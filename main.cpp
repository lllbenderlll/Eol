#include <iostream>
#include <fstream>
#define LOGO(...) std::cout << __VA_ARGS__ << std::endl

#ifdef _EollloE_
#   include <pwd.h>
#   include <unistd.h>
#   include <Vector_picture_static.h>
#   include <queue>
#endif

// template <class T, int N = 20>
// class stack//https://www.e-olymp.com/ru/problems/6124
// {
// public:
//    stack()
//    {
//        assigne();
//    }
//    ~stack()
//    {
//        delete [] mas;
//        clear();
//        mas = NULL;
//        topLenOfStack = N;
//        pointer = -1;
//    }

//    void push(T& el)
//    {
//        if (size() >= (topLenOfStack - 10))
//            assigne();

//        ++pointer;
//        mas[pointer] = el;
//    }

//    T pop()
//    {
//        if (size())
//        {
//            T el = mas[pointer];
//            --pointer;
//            return el;
//        }

//        LOGO("error");
//    }

//    T tail()
//    {
//        if(size())
//            return mas[pointer];

//        LOGO("error");
//    }

//    T back()
//    {
//        return tail();
//    }

//    int size()
//    {
//        return (1 + pointer);
//    }


// //    void logStack()
// //    {
// //#       ifdef _EollloE_
// //        class_Vector_picture_static::Vector_picture_static<T>::LOG_mas(mas, size(), 1);
// //#       endif
// //    }

//    void clear()
//    {
//        pointer = -1;
//    }

// private:
//    void assigne()
//    {
//        int newLen = int(topLenOfStack * 2.5);
//        T* tmp = new T [newLen];

//        if(mas != NULL)
//        {
//            for (int i = 0; i <= pointer; i++)
//                tmp[i] = mas[i];

//            delete [] mas;
//        }

//        mas = tmp;
//        topLenOfStack = newLen;
//    }

//    T* mas = NULL;
//    int topLenOfStack = N;
//    int pointer = -1;
// };


// // \template <class T, int N = 20>
// // \class stack


// int main(int argc, char *argv[])
// {
// #   ifdef _EollloE_
//     freopen("in.txt", "r", stdin);
// #   endif

//     stack<int> myDeq;
//     char comand[10];
//     while (scanf("%s", comand) == 1)
//     {
//         int value;
//         if (!strcmp(comand,"push"))
//         {
//             scanf("%d", &value);
//             myDeq.push(value);
//             printf("ok\n");
//             continue;
//         }

//         if(!strcmp(comand,"pop"))
//         {
//             if (myDeq.size())
//                 printf("%d\n", myDeq.pop());
//             else
//                 printf("error\n");

//             continue;
//         }

//         if(!strcmp(comand,"back"))
//         {
//             if (myDeq.size())
//                 printf("%d\n", back());
//             else
//                 printf("error\n");

//             continue;
//         }

//         if(!strcmp(comand,"size"))
//         {
//             printf("%d\n", size());

//             continue;
//         }
//         if(!strcmp(comand,"clear"))
//         {
//             myDeq.clear();
//             printf("ok\n");
//             continue;
//         }
//         if(!strcmp(comand,"exit"))
//         {
//             printf("bye\n");
//             break;
//         }
//     }
//     return 0;
// }








////https://www.e-olymp.com/ru/problems/6128
//template <class T>//on NODE point (with next and prev componenta's): tail and head are NODE too;
//class node
//{
//public:
//    node(T el, node<T>* _prev = 0, node<T>* _next = 0):element(el), prev(_prev), next(_next){}
//    node<T>* prev;
//    node<T>* next;
//    T element;
//};

//template <class T>
//class Deque
//{
//public:
//    void push_back(T el)
//    {
//        if(sizeOfD == 0)
//        {
//           tail = new node<T>(el);
//           head = tail;
//           ++sizeOfD;
//           return;
//        }
//        tail->next = new node<T>(el,tail);
//        tail = tail->next;
//        ++sizeOfD;
//    }

//    void push_front(T el)
//    {
//        if(sizeOfD == 0)
//        {
//           tail = new node<T>(el);
//           head = tail;
//           ++sizeOfD;
//           return;
//        }
//        head->prev = new node<T>(el, 0, head);
//        head = head->prev;
//        ++sizeOfD;
//    }

//    T pop_front()
//    {
//        T el;
//        node<T>* tmp = head;
//        if(tmp)
//        {
//            el = tmp->element;
//            head = head->next;
//            delete tmp;
//            --sizeOfD;
//        }
//        return el;
//    }

//    T pop_back()
//    {
//        T el;
//        node<T>* tmp = tail;
//        if(tmp)
//        {
//            el = tmp->element;
//            tail = tail->prev;
//            delete tmp;
//            --sizeOfD;
//        }
//        return el;
//    }

//    T front()
//    {
////        if (sizeOfD)
////        {
//            return head->element;
////        }
//    }

//    T back()
//    {
////        if (sizeOfD)
////        {
//            return tail->element;
////        }
//    }

//    int size()
//    {
//        return sizeOfD;
//    }

//    void clear()
//    {
//        for (int i = 0; i < sizeOfD; ++i)
//            pop_back();

//        sizeOfD = 0;
//        tail = head = 0;
//    }

//private:
//    int sizeOfD = 0;
//    node<T>* tail = 0;
//    node<T>* head = 0;
//};


//https://www.e-olymp.com/ru/problems/6128
//template <class T> //on two stack<T>: tail and head
//class Deque
//{
//public:
//    void push_back(T el)
//    {
//        __tail.push(el);
//    }

//    void push_front(T el)
//    {
//        __head.push(el);
//    }

//    T pop_front()
//    {
//        if (__head.size())
//            return __head.pop();

//        while(__tail.size())
//        {
//            T el = __tail.pop();
//            __head.push(el);
//        }

//        if (__head.size())
//            return __head.pop();

//        LOGO("error");
//    }

//    T pop_back()
//    {
//        if (__tail.size())
//            return __tail.pop();

//        while(__head.size())
//        {
//            T el = __head.pop();
//            __tail.push(el);
//        }

//        if (__tail.size())
//            return __tail.pop();

//        LOGO("error");
//    }

//    T front()
//    {
//        if (__head.size())
//            return __head.tail();

//        while(__tail.size())
//        {
//            T el = __tail.pop();
//            __head.push(el);
//        }

//        if (__head.size())
//            return __head.tail();

//        LOGO("error");
//    }

//    T back()
//    {
//        if (__tail.size())
//            return __tail.tail();

//        while(__head.size())
//        {
//            T el = __head.pop();
//            __tail.push(el);
//        }

//        if (__tail.size())
//            return __tail.tail();
//        LOGO("error");
//    }

//    int size()
//    {
//        return (__tail.size() + __head.size());
//    }

//    void clear()
//    {
//        __tail.clear();
//        __head.clear();
//    }

//private:
//    stack<T> __tail;
//    stack<T> __head;
//};


template <class T, int N = 10>
class Deque
{
public:
    void push_back(T el)
    {
        if (__size)
            __inc(__tail);

        __mas[__tail] = el;
        ++__size;
    }

    void push_front(T el)
    {
        if (__size)
            __dec(__head);

        __mas[__head] = el;
        ++__size;
    }

    T pop_front()
    {
        if (__size)
        {
            --__size;
            T& el = __mas[__head];
            if (__size)
                __inc(__head);
            return el;
        }
    }

    T pop_back()
    {
        if (__size)
        {
            --__size;
            T& el = __mas[__tail];
            if (__size)
                __dec(__tail);
            return el;
        }
    }

    T front()
    {
        return __mas[__head];
    }

    T back()
    {
        return __mas[__tail];
    }

    int size()
    {
        return __size;
    }

    void clear()
    {
        __tail = 0;
        __head = 0;
        __size = 0;
    }

    const
    T& operator[](int idx) const
    {
        int el = __head + idx;
        el = (el < N) ? el : N % el;
        return __mas[el];
    }

    T& operator[](int idx)
    {
        int el = __head + idx;
        el = (el < N) ? el : N % el;
        return __mas[el];
    }

private:
    T __mas[N];
    int __head = 0;
    int __tail = 0;
    int __size = 0;

    void __inc(int& el)
    {
        ++el;
        el = (el < N) ? el : 0;
    }

    void __dec(int& el)
    {
        --el;
        el = (el >= 0) ? el : N + el;
    }

};

int main(int argc, char *argv[])
{

#   ifdef _EollloE_
    freopen("in.txt", "r", stdin);
#   endif;


    Deque<int> myDeq;

    char comand[10];
    while (scanf("%s", comand) == 1)
    {
        int value;

        // Deque<Deque<int>> my;
        // my.push_back(myDeq);
        // {
        //     std::stringstream os_;
        //     for (int i = 0; i < my.size(); ++i)
        //         for (int j = 0; j < my[i].size(); ++j)
        //         os_ << my[i][j] << " ";
        //     cout << os_.str() << endl;
        //     cout << "------------" << endl;
        // }

        if (!strcmp(comand,"push_front"))
        {
            scanf("%d", &value);
            myDeq.push_front(value);
            printf("ok\n");
            continue;
        }

        if (!strcmp(comand,"push_back"))
        {
            scanf("%d", &value);
            myDeq.push_back(value);
            printf("ok\n");
            continue;
        }

        if(!strcmp(comand,"pop_front"))
        {
            if(myDeq.size())
                printf("%d\n",myDeq.pop_front());
            else
                printf("error\n");

            continue;
        }
        if(!strcmp(comand,"pop_back"))
        {
            if(myDeq.size())
                printf("%d\n",myDeq.pop_back());
            else
                printf("error\n");

            continue;
        }
        if(!strcmp(comand,"front"))
        {
            if(myDeq.size())
                printf("%d\n",myDeq.front());
            else
                printf("error\n");
            continue;
        }
        if(!strcmp(comand,"back"))
        {
            if(myDeq.size())
            printf("%d\n",myDeq.back());
            else
                printf("error\n");
            continue;
        }
        if(!strcmp(comand,"size"))
        {
            printf("%d\n",myDeq.size());
            continue;
        }
        if(!strcmp(comand,"clear"))
        {
            myDeq.clear();
            printf("ok\n");
            continue;
        }
        if(!strcmp(comand,"exit"))
        {
            printf("bye\n");
            break;
        }
    }
    return 0;
}




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
//https://www.e-olymp.com/ru/problems/6128
template <class T>//on NODE point (with next and prev componenta's): tail and head are NODE too;
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
*/


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



//template <class T, int N = 10>
//class Deque
//{
//public:
//    void push_back(T el)
//    {
//        if (__size)
//            __inc(__tail);

//        __mas[__tail] = el;
//        ++__size;
//    }


//    void push_front(T el)
//    {
//        if (__size)
//            __dec(__head);

//        __mas[__head] = el;
//        ++__size;
//    }

//    T pop_front()
//    {
//        --__size;
//        T& el = __mas[__head];
//        __inc(__head);
//        return el;
//    }

//    T pop_back()
//    {
//        --__size;
//        T& el = __mas[__tail];
//        __dec(__tail);
//        return el;
//    }

//    T front()
//    {
//        return __mas[__head];
//    }

//    T back()
//    {
//        return __mas[__tail];
//    }

//    int size()
//    {
//        return __size;
//    }

//    void clear()
//    {
//        __tail = 0;
//        __head = 0;
//        __size = 0;
//    }

//private:
//    T __mas[N];
//    int __head = 0;
//    int __tail = 0;
//    int __size = 0;

//    void __inc(int& el)
//    {
//        ++el;
//        el = (N - el) ? el : 0;
//    }

//    void __dec(int& el)
//    {
//        --el;
//        el = (el + 1) ? el : N + el;
//    }

//};


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


/*
//DFS & BFS
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
    static int size0 = 1;
    static int size1 = 1;
    usedDFS[St] = true;

    for (int j = 0; j <= N; ++j)
    {
        if ( a[St][j] && !usedDFS[j] )
        {
            EdgesDFS.push_back(j);
            size0++;
            //size += EdgesDFS.size();
            //os_ << j << " ";
            dfs(j);
        }
    }

    if (size0 > size1)
    {
        size1 = size0;
        int* ptr = &EdgesDFS[0];
        __LOG_MAS_simpley(ptr, EdgesDFS.size());
    }
    EdgesDFS.pop_back();
    size0 = EdgesDFS.size();
    size1 = size0;
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

#if d
    bfs(1);
#else
    __setData(usedDFS, N);
    EdgesDFS.push_back(1);
    dfs(EdgesDFS.back());
#endif
}
*/

/*
const int n = 7;
int used[n];

void go(int index)
{
    if (index == n)
    {
        __LOG_MAS_simpley(used, n);
    }
    else
    {
        used[index] = 0;
        go(index + 1);

        used[index] = 1;
        go(index + 1);

        used[index] = 2;
        go(index + 1);

        used[index] = 3;
        go(index + 1);
    }
}

int main(int argc, char *argv[])
{
    go(0);
}
*/
















//#include <iostream>
//#include <stdio.h>
//#include <string.h>

//template<typename T>
//class Dequeue
//{
//public: struct Node
//    {
//        Node (T _val)
//        {
//            prev = NULL;
//            next = NULL;
//            val = _val;
//        }
//        Node* prev;
//        Node* next;
//        T val;
//    };
//    Dequeue()
//    {
//        head = NULL;
//        tail = NULL;
//        mSize = 0;
//    }
//    void push_back(T val)
//    {
//        Node* node = new Node(val);
//        if (tail == NULL)
//        {
//            head = node;
//            tail = node;
//        }
//        else
//        {
//            tail->next = node;
//            node->prev = tail;
//            tail = node;
//        }
//        mSize++;
//        printf("ok\n");
//    }
//    void push_front(T val)
//    {
//        Node* node = new Node(val);
//        if (head == NULL)
//        {
//            head = node;
//            tail = node;
//        }
//        else
//        {
//            head->prev = node;
//            node->next = head;
//            head = node;
//        }
//        mSize++;
//        printf("ok\n");
//    }
//    T pop_back()
//    {
//        T val = tail->val;
//        if (tail == head)
//        {
//            tail = NULL;
//            delete head;
//            head = NULL;
//        }
//        else
//        {
//            Node* node = tail;
//            tail = tail->prev;
//            tail->next = NULL;
//            delete node;
//        }
//        mSize--;
//        return val;
//    }
//    T pop_front()
//    {
//        T val = head->val;
//        if (tail == head)
//        {
//            tail = NULL;
//            delete head;
//            head = NULL;
//        }
//        else
//        {
//            Node* node = head;
//            head = head->next;
//            head->prev = NULL;
//            delete node;
//        }
//        mSize--;
//        return val;
//    }
//    inline T front()
//    {
//        return head->val;
//    }
//    inline T back()
//    {
//        return tail->val;
//    }
//    inline size_t size ()
//    {
//        return mSize;
//    }
//    void clear()
//    {
//        Node* node = head;
//        Node* prev = NULL;
//        while (node!= NULL)
//        {
//            if(prev != NULL)
//            {
//                delete prev;
//            }
//            prev = node;
//            node = node->next;
//        }
//        delete prev;
//        head = NULL;
//        tail = NULL;
//        mSize = 0;
//        printf("ok\n");
//    }
//private: Node* head;
//    Node* tail;
//    size_t mSize;
//};
//int main()
//{
//    //freopen("/home/dborysenko/CppProject/Dequeue/input.txt", "r", stdin);
//    char command[10];
//    Dequeue<int> dequeue;
//    while (scanf("%s", command) == 1)
//    {
//        if (strcmp(command, "push_front") == 0)
//        {
//            int val;
//            scanf("%d\n", &val);
//            dequeue.push_front(val);
//        }
//        else if (strcmp(command, "push_back") == 0)
//        {
//            int val;
//            scanf("%d\n", &val);
//            dequeue.push_back(val);
//        }
//        else if (strcmp(command, "pop_back") == 0)
//        {
//            if (dequeue.size())
//            {
//                printf("%d\n", dequeue.pop_back());
//            }
//            else
//            {
//                printf("error\n");
//            }
//        }
//        else if (strcmp(command, "pop_front") == 0)
//        {
//            if (dequeue.size())
//            {
//                printf("%d\n", dequeue.pop_front());
//            }
//            else
//            {
//                printf("error\n");
//            }
//        }
//        else if (strcmp(command, "size") == 0)
//        {
//            printf("%d\n", dequeue.size());
//        }
//        else if (strcmp(command, "clear") == 0)
//        {
//            dequeue.clear();
//        }
//        else if (strcmp(command, "back") == 0)
//        {
//            if (dequeue.size())
//            {
//                printf("%d\n", dequeue.back());
//            }
//            else
//            {
//                printf("error\n");
//            }
//        }
//        else if (strcmp(command, "front") == 0)
//        {
//            if (dequeue.size() > 0)
//            {
//                printf("%d\n", dequeue.front());
//            }
//            else
//            {
//                printf("error\n");
//            }
//        }
//        else if (strcmp(command, "exit") == 0)
//        {
//            printf("bye\n");
//        }
//    }
//    return 0;
//}
