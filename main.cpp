#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>
#include <Vector_picture_static.h>


using namespace std;

static const int N = 20;

int main(int argc, char *argv[])
{
    // Get the last position of '/'
    std::string aux(argv[0]);

    // get '/' or '\\' depending on unix/mac or windows.
#if defined(_WIN32) || defined(WIN32)
    int pos = aux.rfind('\\');
#else
    int pos = aux.rfind('/');
#endif

    // Get the path and the name
    std::string path = aux.substr(0,pos+1);
    std::string name = aux.substr(pos+1);
    // show results

    path += std::string("in.txt");

    ifstream in(path);
    cin.rdbuf(in.rdbuf());

    int j, i, q, p, id[N], sz[N];

    for (i = 0; i < N; ++i)
        id[i] = i;

    __masI::LOG_mas(id,N,1);
    new_line;
    new_line;

    for (i = 0; i < N; ++i)
        sz[i] = 1;


    while(cin >> p >> q)
    {
#       if 0

        int t = id[p];
        if(id[q] == t) continue;

        for (i = 0; i < N; ++i)
            if(id[i] == t)
                id[i] = id[q];

        __masI::LOG_mas(id,N,1);
        continue;
#       endif

#       if 0

        int tm0 = p;
        for (; p != id[p];)
        {
            p = id[p];
        }


        int tm1 = q;
        for (; q != id[q]; )
        {
            q = id[q];
        }


        if(p == q) continue;

        id[p] = q;

        __masI::LOG_mas(id,N,1);
        continue;
#       endif

#       if 1

        for (; p != id[p];)
        {
            p = id[id[p]];
        }

        for (; q != id[q]; )
        {
            q = id[id[q]];
        }


        if(p == q) continue;

        if (sz[p] <= sz[q])
        {
            id[p] = q;
            sz[q] += sz[p];
        }
        else
        {
            id[q] = p;
            sz[p] += sz[q];
        }

        __masI::LOG_mas(id,N,1);
        continue;
#       endif


    }
}
