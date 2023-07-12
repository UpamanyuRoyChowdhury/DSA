#include <bits/stdc++.h>
using namespace std;

class LTM
{
private:
    int *A;
    int n;

public:
    LTM(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    LTM()
    {
        n = 2;
        A = new int[3];
    }
    void Set(int i, int j, int x)
    {
        if (i >= j)
        {
            A[j*(2*n - j + 1) + (i - j)] = x;
        }
    }
    int Get(int i, int j)
    {
        if (i >= j)
        {
            return A[j*(2*n - j + 1) + (i - j)];
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
                if (i >= j)
                {
                    cout << A[j*(2*n - j + 1) + (i - j)]<< " ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the dimension of the matrix: " << endl;
    cin >> n;
    LTM d(n);

    int val;
    cout << "Enter the LTM elements of the matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> val;
            d.Set(i, j, val);
        }
    }
    d.display();
}
