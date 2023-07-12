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

        void swap(int *x, int *y)
        {
            int temp = *x;
            *x = *y;
            *y = temp;
        }

        int linearSearch(int key)
        {
            int i;
            for (i = 0; i < length; i++)
            {
                if (key == A[i])
                {
                    return i;
                }
            }
            return -1;
        }

        int linearSearchTranposition(int key)
        {
            int i;
            for (i = 0; i < length; i++)
            {
                if (key == A[i])
                {
                    swap(&A[i], &A[i - 1]);
                    return i - 1;
                }
            }
            return -1;
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
    int key;

    cout <<"Enter the element to search : "<<endl;
    cin>>key;
    cout<<"The element "<<key<<"is in the index : "<<arr.linearSearch(key)<<endl;;

    cout <<"Enter the element to search : "<<endl;
    cin>>key;
    cout<<"The element "<<key<<"is in the index : "<<arr.linearSearchTranposition(key)<<endl;
    return 0;
}
