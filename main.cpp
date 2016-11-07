#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>

#include <Vector_picture_static.h>
#include <time_measure.h>




static const int N = 20;

int main(int argc, char *argv[])
{
    std::string path = getCurDirStr();
    path += std::string("/in.txt");

    //__masF mas(20,10);
    //mas.set_random_data(0, 10);
    //mas.LOG_mas();
    //new_line;

    std::ifstream in(path);
    path.clear();
    cin.rdbuf(in.rdbuf());

    int j, i, q, p, id[N], sz[N];

    for (i = 0; i < N; ++i)
        id[i] = i;

    __masI::LOG_mas(id,N,1);
    new_line;



    while(cin >> p >> q)
    {
        for(;id[p] != p;)
            p = id[id[p]];

        for(;id[q] != q;)
            q = id[id[q]];

        if(!(p-q))
            continue;

        id[p] = q;

        __masI::LOG_mas(id,N,1);
    }
}
