#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    static int x = 0; // same if we declare it as a global variable
    if(n > 0)
    {
        x ++;
        return func(n - 1) + x;
    }
    return 0;
}

int main()
{
    cout<<func(5);
}