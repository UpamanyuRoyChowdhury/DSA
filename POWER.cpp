#include <bits/stdc++.h>
using namespace std;

int power(int i , int n)
{
    if (n == 0)
    {
        return 1;
    }
    else 
    {
        return i*power(i , (n-1));
    }
}

int main()
{
    int i,n ;
    cin >> i;
    cin >> n;

    int ans = power(i , n);
    cout<<ans;
}