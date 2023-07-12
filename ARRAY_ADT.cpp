#include <bits/stdc++.h>
using namespace std;

class Array
{
    private:
        int *A;
        int size;
        int length;

    public:
        Array(int size)
        {
            this->size = size;
            A = new int[size];
        }
        
        void create()
        {
            cout<<"Enter the number of elements in the array :"<<endl;
            cin>>length;
            cout<<"Enter the elements in the array :"<<endl;
            for (int i =0; i < length; i++)
            {
                cout<<"Array element :"<<i<<"is = "<<flush;
                cin>>A[i];
            }
            cout<<endl;
            display();
        }

        void display()
        {
            cout<<"The elements in the array are :"<<endl;
            for (int i = 0; i < length; i++)
            {
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }

        void append(int x)
        {
            if(length < size)
            {
                A[length++] = x;
            }
            display();
        }

        void insert(int index, int x)
        {
            if(index < size)
            {
                for(int i = length; i > index; i--)
                {
                    A[i] = A[i - 1];
                }
                A[index] = x;
            }
            display();
        }

        int del(int index)
        {
            int x = A[index];
            if (index >= 0 && index < length)
            {
                for (int i = index; i < length - 1 ; i++)
                {
                    A[i] = A[i + 1];
                }
                length--;
            }
            display();
            return 0;
        }

        ~Array()
        {
            delete[] A;
            cout << "Array destroyed" << endl;
        }
};

int main()
{
    int size;
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;
    Array arr(size);
    arr.create();
    arr.append(20);

    int index, x;
    cout<<"Enter the index in which you want to insert :"<<endl;
    cin>>index;
    cout<<"Enter the element that you want to insert :"<<endl;
    cin>>x;
    arr.insert(index, x);

    cout<<"Enter the index in which you want to delete :"<<endl;
    cin>>index;
    arr.del(index);
    return 0;
}