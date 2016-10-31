#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>

using namespace std;

static const int N = 20;

int main(int argc, char *argv[])
{

    //struct passwd *pw = getpwuid(getuid());
    std::string directory = /*std::string(pw->pw_dir) + std::string("/in.txt")*/
            "/home/bender/E-olimp/in.txt";

    ifstream in(directory);
    cin.rdbuf(in.rdbuf());

    int j, i, q, p, id[N];

    for (i = 0; i < N; ++i)
        id[i] = i;

    while(cin >> p >> q)
    {
#       if 0

        int t = id[p];
        if(id[q] == t) continue;

        for (i = 0; i < N; ++i)
            if(id[i] == t)
                id[i] = id[q];

        continue;
#       endif

#       if 1

        i = p;
        for (; i != id[i];)
        {
            i = id[i];
        }

        j = q;
        for (; j != id[j]; )
        {
            j = id[j];
        }

        if(i == j) continue;

        id[i] = j;

#       endif
        cout << p << " " << q << endl;
    }
}
