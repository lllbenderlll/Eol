#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>

#include <Vector_picture_static.h>

#include <queue>


#define LOGO(...) std::cout << __VA_ARGS__ << std::endl;


/*

#   if 0//defined(__ARM_NEON32__)

         int res = 0;
         const uint toNextLine = w - WIDTH;
         for (const uchar* endPatch = patch + WIDTH * HEIGHT; patch !=
endPatch; img += toNextLine)

             __asm__ __volatile__
                 (
                     "vld1.32    {q0,q1}, [%[src0]]!    \r\n"
                     "vld1.32    {q2,q3}, [%[src1]]!    \r\n"

                     "VABd.u8    d0 , d0 , d2        \r\n"
                     "Vmovl.u8   q0 , d0             \r\n"
                     "vmul.u16   q0 , q0 , q0        \r\n"
                     "vaddl.u16  q0 , d0 , d1        \r\n"
                     "vpadd.u32  d0 , d0 , d1        \r\n"
                     "vdup.32    d2 , %[res]         \r\n"
                     "vpadd.u32  d0 , d0 , d0        \r\n"
                     "vadd.u32   d0 , d0 , d2        \r\n"

                     "vmov.32    %[res], d0[0]       \r\n"
                     :
                     [src0]      "+r"    (patch ),
                     [src1]      "+r"    (img   ),
                     [res]       "+r"    (res   )
                     ::
                     "memory", "cc"
                     );

         return res;


#   else

     int res = 0;
     const uchar* p1 = mData;
     const uchar* p2 = patch2.mData;
     for (int i = kWidth * kHeight; i; --i)
     {
         const int diff = *p1++ - (int) *p2++;
         res += diff * diff;
     }
     return res;

#   endif

*/


/// ###########################################################
/// ##################### [binary search] #####################
/// ###########################################################

//template <class T>
//int findBin(T val, T* mas, int st, int end)
//{
//    int index = -1;
//    while (index == -1)
//    {

//        if (st == end)
//            index = st;

//        int index05 = st + (end - st) / 2;

//        if (val == mas[index05])
//            index = index05;

//        if (val == mas[st])
//            index = st;

//        if (val == mas[end])
//            index = end;


//        if ((mas[st] < val) && (val < mas[index05]))
//        {
//            end = index05;
//            continue;
//        }

//        if ((mas[index05] <= val) && (val < mas[end]))
//        {
//            st = index05;
//            continue;
//        }
//    }
//    return index;
//}


//int main(int argc, char *argv[])
//{
//    srand((unsigned)time(NULL));
//    __masI mas(rand()%35 + 15,1);
//    mas.value_set_from(1);
//    mas.LOG_mas();

//    int value = rand()%(mas.get_cols_m_rows()-1);
//    LOGN(value);
//    int index = findBin(value, mas.get_ptr(), (int)0, (int)mas.get_cols()-1);
//    LOGN(value << ": mas[" << index << "]=" << mas.get_ptr()[index]);
//}






//static const int N = 20;
//unsigned char mas[100];
//int __Esize;

//void swap(int k, int j)
//{
//    int t = mas[k];
//    mas[k] = mas[j];
//    mas[j] = t;
//}


//void Generate(int k)
//{
//    if (__Esize == k)
//    {
//        __masUC::LOG_mas(mas, __Esize, 1);
//    }
//    else
//    {
//        for(int j = k; j < __Esize; j++)
//        {
//            swap(k, j);
//            Generate(k + 1);
//            swap(k, j);
//        }
//    }
//}
//int main(int argc, char *argv[])
//{
//    new_linedd;
//    __Esize = 4;
//    __masUC::value_set_from(mas, __Esize, 1);
//    __masUC::LOG_mas(mas,__Esize, 1);
//    new_line;
//    Generate(0);
//    new_linedd;
//}


//int main(int argc, char *argv[])
//{
//    std::string path = getCurDirStr();
//    path += std::string("/in.txt");

//    std::ifstream in(path);
//    path.clear();
//    cin.rdbuf(in.rdbuf());

//    int j, i, q, p, id[N], sz[N];

//    for (i = 0; i < N; ++i)
//        id[i] = i;

//    __masI::LOG_mas(id,N,1);
//    new_line;



//    while(cin >> p >> q)
//    {
//        for(; p != id[p]; )
//            p = id[id[p]];

//        for(; q != id[q]; )
//            q = id[id[q]];

//        if(p == q)
//            continue;

//        id[p] = q;
//        __masI::LOG_mas(id,N,1);
//    }
//}


//static int __Esize = 0;
//int mas[999];

//template <class T>
//void _swap(T& k, T& j)
//{
//    T tmp = k;
//    k = j;
//    j = tmp;
//}


//void brFoars(int k)
//{
//    if(k == __Esize)
//    {
//        __masI::LOG_mas(mas, __Esize, 1);
//        return;
//    }

//    for (int j = k; j < __Esize; ++j)
//    {
//        _swap(mas[k], mas[j]);
//        brFoars(k + 1);
//        _swap(mas[k], mas[j]);
//    }
//}





/*
#define LOGO(...) std::cout << __VA_ARGS__ << std::endl;
template <class T>
class Node
{
public:
    Node<T>(T El, Node<T>* _prev = 0, Node<T>* _next = 0):Element(El),prev(_prev),next(_next){}

    T Element;
    Node<T>* prev;
    Node<T>* next;
};


//template<class T>
//struct Helper { static T return_me(const T& var) { return var; } };
//template<>
//struct Helper<int> { static int return_me(const int& var) { return 0; } };

template <class T>
class Deque
{
public:
    void push_front(T el)//Добавить (положить) в начало дека новый элемент. Программа должна вывести ok.
    {
        if (sizeOfDeq == 0)
        {
            tail = new Node<T>(el);
            head = tail;
            ++sizeOfDeq;
            return;
        }
        head->prev = new Node<T>(el, 0, head);
        head = head->prev;
        ++sizeOfDeq;
    }

    void push_back(T el)//Добавить (положить) в конец дека новый элемент. Программа должна вывести ok.
    {
        if (sizeOfDeq == 0)
        {
            tail = new Node<T>(el);
            head = tail;
            ++sizeOfDeq;
            return;
        }
        tail->next = new Node<T>(el, tail);
        tail = tail->next;
        ++sizeOfDeq;
    }

    T pop_front() //Извлечь из дека первый элемент. Программа должна вывести его значение.
    {
        Node<T>* tmp = head;
        T el;
        if(tmp)
        {
            el = tmp->Element;
            head = head->next;
            delete tmp;
            --sizeOfDeq;
        }
        return el;
    }

    T pop_back() //Извлечь из дека последний элемент. Программа должна вывести его значение.
    {
        Node<T>* tmp = tail;
        T el;
        if(tmp)
        {
            el = T(tail->Element);
            tail = tail->prev;
            delete tmp;
            --sizeOfDeq;
            return el;
        }
        return el;//Helper<T>::return_me(el);
    }

    T front()    //Узнать значение первого элемента (не удаляя его). Программа должна вывести его значение.
    {
        return head->Element;
    }

    T back()    //Узнать значение последнего элемента (не удаляя его). Программа должна вывести его значение.
    {
        return tail->Element;
    }

    size_t size()    //Вывести количество элементов в деке.
    {
        return sizeOfDeq;
    }

    void clear()    //Очистить дек (удалить из него все элементы) и вывести ok.
    {
        for (; sizeOfDeq; )
            pop_back();

        sizeOfDeq = 0;
        tail = head = 0;
    }

private:
    size_t sizeOfDeq = 0;
    Node<T>* tail = 0;
    Node<T>* head = 0;
};
*/



/*
template <class T>
class node
{
public:
    node(T el, node<T>* _prev = 0, node<T>* _next = 0):element(el), prev(_prev), next(_next){}
    node<T>* prev;
    node<T>* next;
    T element;

};

template <class T>
class Deque
{
public:
    void push_back(T el)
    {
        if(sizeOfD == 0)
        {
           tail = new node<T>(el);
           head = tail;
           ++sizeOfD;
           return;
        }
        tail->next = new node<T>(el,tail);
        tail = tail->next;
        ++sizeOfD;
    }

    void push_front(T el)
    {
        if(sizeOfD == 0)
        {
           tail = new node<T>(el);
           head = tail;
           ++sizeOfD;
           return;
        }
        head->prev = new node<T>(el, 0, head);
        head = head->prev;
        ++sizeOfD;
    }

    T pop_front()
    {
        T el;
        node<T>* tmp = head;
        if(tmp)
        {
            el = tmp->element;
            head = head->next;
            delete tmp;
            --sizeOfD;
        }
        return el;
    }

    T pop_back()
    {
        T el;
        node<T>* tmp = tail;
        if(tmp)
        {
            el = tmp->element;
            tail = tail->prev;
            delete tmp;
            --sizeOfD;
        }
        return el;
    }

    T front()
    {
//        if (sizeOfD)
//        {
            return head->element;
//        }
    }

    T back()
    {
//        if (sizeOfD)
//        {
            return tail->element;
//        }
    }

    int size()
    {
        return sizeOfD;
    }

    void clear()
    {
        for (int i = 0; i < sizeOfD; ++i)
            pop_back();

        sizeOfD = 0;
        tail = head = 0;
    }

private:
    int sizeOfD = 0;
    node<T>* tail = 0;
    node<T>* head = 0;
};



//int main(int argc, char *argv[])
//{
//    new_linedd;
//    __Esize = 3;
//    __masI::value_set_from(mas,  __Esize, 1);
//    __masI::LOG_mas(mas, __Esize, 1);
//    new_line;
//    brFoars(0);
//    new_linedd;
//}


int main(int argc, char *argv[])
{
    std::string path = getCurDirStr();
    path += std::string("/in.txt");

    std::ifstream in(path);
    path.clear();
    cin.rdbuf(in.rdbuf());

    Deque<int> myDeq;
//    Deque<Deque<int>> my;
//    my.push_back(myDeq);
//    my.pop_back();

    while(1)
    {
        std::string comand;
        std::cin >> comand;
        int value;

        if (!comand.compare("push_front"))
        {
            std::cin >> value;
            myDeq.push_front(value);
            LOGO("ok");
            continue;
        }

        if (!comand.compare("push_back"))
        {
            std::cin >> value;
            myDeq.push_back(value);
            LOGO("ok");
            continue;
        }

        if(!comand.compare("pop_front"))
        {
            LOGO(myDeq.pop_front());
            continue;
        }
        if(!comand.compare("pop_back"))
        {
            LOGO(myDeq.pop_back());
            continue;
        }
        if(!comand.compare("front"))
        {
            LOGO(myDeq.front());
            continue;
        }
        if(!comand.compare("back"))
        {
            LOGO(myDeq.back());
            continue;
        }
        if(!comand.compare("size"))
        {
            LOGO(myDeq.size());
            continue;
        }
        if(!comand.compare("clear"))
        {
            myDeq.clear();
            LOGO("ok");
            continue;
        }
        if(!comand.compare("exit"))
        {
            LOGO("bye");
            break;
        }
    }
    return 0;
}
*/

//const int n = 15;
//std::queue <int> turn;          //Это наша очередь, хранящая номера вершин
//int used[n];                    //массив, хранящий состояние вершины("сгорела","не сгорела")
//int matrix[n][n];               //матрица, хранящая информацию о смежности вершин

//void bfs (int start)
//{
//    turn.push(start);
//    used[start] = 1;
//    while (!turn.empty())               //проверяем, пуста ли очередь
//    {
//        int ind = turn.front();         //берем из очереди крайний элемент
//        turn.pop();                     //удаляем его
//        for ( int i = 0; i < n; i++ )   //смотрим, с какими вершинами смежна вершина ind
//        {
//            if (matrix[ind][i] == 1 && used[i] == 0)
//            {
//                used[i] = 1;
//                turn.push(i);           //добавляем в очередь вершину i
//            }
//        }
//    }
//}

/*
////std::vector<std::vector<int>>
////

const static int N = 20;
static int _next[N];
//static int _prev[N];
static int _data[N];
int _front;
int _tail;
int _free = 1;
int _size = 0;

void push_frontA(int x)
{
    if(!_size)
    {
        ++_size;
        _data[_free] = x;
        _front = _free;
        _tail = _free;
        ++_free;
        return;
    }

    _data[_free] = x;
    _next[_free] = _front;
    _front = _free;
    ++_free;//!!!!
    ++_size;
}

void push_backA(int x)
{
    if(!_size)
    {
        ++_size;
        _data[_free] = x;
        _front = _free;
        _tail = _free;
        ++_free;
        return;
    }

    _data[_free] = x;
    _next[_tail] = _free;
    _tail = _free;
    ++_free;//!!!!
    ++_size;
}

void logDataA()
{
    if(_size)
    {
        int pointer = _front;
        while (pointer != _tail)
        {
            LOGO(_data[pointer]);
            pointer = _next[pointer];
        }
        LOGO(_data[pointer]);
        pointer = _next[pointer];
    }
}


int main(int argc, char *argv[])
{
//    std::string path = getCurDirStr();
//    path += std::string("/in.txt");

//    std::ifstream in(path);
//    path.clear();
//    cin.rdbuf(in.rdbuf());


    push_backA(5);
    push_frontA(15);
    push_frontA(16);
    push_backA(6);
    push_frontA(17);
    push_backA(7);
    push_frontA(18);
    push_backA(8);
    push_frontA(19);
    push_backA(9);
    logDataA();
   


    return 0;
}
*/

int N;
int** a;
template <class T>
void __setData(T*& mas, int N, T value = 0)
{
    mas = new T [N];
    for (int j = 0; j < N; ++j)
        mas[j] = value;

    class_Vector_picture_static::Vector_picture_static<T>::LOG_mas(mas, N, 1);
}

void bfs(int St)
{
    bool* used;

    N += 1;
    __setData(used, N);

    deque<int> Edges;

    Edges.push_back(St);
    used[St] = 1;

#   if 1
    //BFS:
    while(Edges.size())
    {
        St = Edges.front();
        Edges.pop_front();

        std::stringstream os_;
        os_.str("");
        os_.clear();
        os_ << std::right;

        for (int j = 0; j < N; ++j)
        {
            if ( a[St][j] && !used[j] )
            {
                Edges.push_back(j);
                used[j] = 1;
                os_ << j << " ";
            }
        }
        LOGN(os_.str());
    }

#   else

    while(Edges.size())
    {
        St = Edges.back();
        Edges.pop_back();

        std::stringstream os_;
        os_.str("");
        os_.clear();
        os_ << std::right;

        for (int j = 0; j < N; ++j)
        {
            if ( a[St][j] && !used[j] )
            {
                Edges.push_back(j);
                used[j] = 1;
                os_ << j << " ";
            }
        }
        LOGN(os_.str());
    }

#   endif

    delete [] used;
}




bool* usedDFS;
std::vector<int> EdgesDFS;

void dfs(int St)
{
    usedDFS[St] = true;

    for (int j = 0; j < N; ++j)
    {
        if ( a[St][j] && !usedDFS[j] )
        {
            EdgesDFS.push_back(j);
            //os_ << j << " ";
            dfs(j);
        }
    }
    LOGO(EdgesDFS.back());
    EdgesDFS.pop_back();
}

int main(int argc, char *argv[])
{
    std::string path = getCurDirStr();
    path += std::string("/in.txt");

    std::ifstream in(path);
    path.clear();
    cin.rdbuf(in.rdbuf());

    cin >> N;

    a = new int* [N + 1];
    a[0] = new int [(N + 1)*(N + 1)];
    for (int i = 1; i < N + 1; ++i)
    {
        a[i] = a[0] + i*(N + 1);
        for (int j = 0; j < N + 1; ++j)
            a[i][j] = 0;
    }


    int p, q;
    while(cin >> p >> q)
    {
        a[p][q] = 1;
        a[q][p] = 1;
    }

    __masI::LOG_mas(&a[0][0], N + 1, N + 1);
    new_line;

#if 0
    bfs(1);
#else
    __setData(usedDFS, N);
    EdgesDFS.push_back(1);
    dfs(EdgesDFS.back());
#endif
}


