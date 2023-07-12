#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p = new int[5];
    cout<<"Enter the elements"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cin>>p[i];
    }
    //for increasing the size
    cout<<"Increasing the size of the array"<<endl;
    int *q = new int[10];
    for (int i = 0; i < 10; i++)
    {
        if(i < 5)
        {
            q[i] = p[i];
        }
        else
        {
            cin>>q[i];
        }
    }

    free(p);
    p = q;
    q = NULL;

    for(int i = 0; i < 10; i++)
    {
        cout<<p[i]<<" ";
    }
}