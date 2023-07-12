#include <bits/stdc++.h>
using namespace std;

void reachHome(int dest,int src)
{
    if(src == dest)
    {
        cout<<"Reached home!"<<endl;
        return;
    }
    src++;
    reachHome(dest,src);
}

int main()
{
    int dest = 10;
    int src = 1;
    reachHome(dest, src);
}