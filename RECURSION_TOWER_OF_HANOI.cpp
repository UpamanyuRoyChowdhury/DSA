#include <bits/stdc++.h>
using namespace std;

void TOH(int n , int A, int B, int C)
{
    if(n == 1)
    {
        cout<<"("<<A<<","<<C<<")"<<endl;
    }

    else if(n > 1)
    {
        TOH(n - 1, A, C, B);
        TOH(1, A, B, C);
        TOH(n - 1, B, A, C);
    }
}

int main()
{
    TOH(3, 1, 2, 3); //Tower of hanoi problem for 3 disks and 3 pillars 
    return 0;
}