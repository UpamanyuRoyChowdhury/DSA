#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n + sum(n - 1));
    }
}

int main()
{
    int n;
    cout<<"Enter the number upto which sum is required."<<endl;
    cin >> n;
    cout<<sum(n);
}
