#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    if(n > 100)
    {
        return (n - 10);
    }
    return func(func(n + 11));
}

int main()
{
    cout<<func(95);
    return 0;
}