#include <bits/stdc++.h>
using namespace std;

class Diagonal
{
    private:
        int *A;
        int n;
    public:
        Diagonal(int n)
        {
            this->n = n;
            A = new int[n];
        }
        Diagonal()
        {
            n = 2;
            A = new int[2];
        }
        void Set(int i , int j , int x)
        {
            if (i == j)
            {
                A[i] = x;
            }
        }
        int Get(int i , int j)
        {
            if(i == j)
            {
                return A[i];
            }
            else
            {
                return 0;
            }
        }
        void display()
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++) 
                {
                    if (i == j)
                    {
                        cout<<A[i]<<" ";
                    }
                    else
                    {
                        cout<<0<<" ";
                    }
                }
                cout<<endl;
            }
        }
};

int main()
{
    int n;
    cout<<"Enter the dimension of the matrix: "<<endl;
    cin>>n;
    Diagonal d(n);

    cout<<"Enter the diagonal elements of the matrix: "<<endl;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        int val;
        cout<<"Enter the diagonal element at position "<<i<<","<<j<<"in the matrix: "<<endl;
        cin>>val;
        d.Set(i, j, val);
    }

    d.display();
}
