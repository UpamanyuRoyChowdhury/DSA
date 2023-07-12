#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        //cout<<n<<endl; if the cout is here it is called tail recursion else it is called tail recursion. 
        print(n - 1);
        cout<<n<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}