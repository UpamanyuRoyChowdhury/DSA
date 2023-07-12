#include <bits/stdc++.h>
using namespace std;                                                                      
int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    else 
    {
        return fact(n-1)*n;
    }
}
int C2(int n , int r)
{
    int num, dem;
    num = fact(n);
    dem = fact(r)*fact(n - r);
    return num / dem;
}
int C1(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else 
    {
        return C1(n - 1, r - 1) + C1(n - 1, r);
    }
}

int main()
{
    int n , r;
    cin>>n>>r;
    cout<<C1(n , r)<<endl;
    cout<<C2(n , r)<<endl;
    return 0;
}