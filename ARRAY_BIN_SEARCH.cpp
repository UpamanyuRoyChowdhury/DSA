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

        int IBinSearch(int key)
        {
            int l , mid , h;
            l = 0;
            h = length - 1;
            mid = (l + h) / 2;
            while (l <= h)
            {
                if (A[mid] == key)
                {
                    return mid;
                }
                else if (A[mid] < key)
                {
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1;
                }
            }
            return -1;
        }

        int RBinSearch(int key, int l, int h)
        {
            if (l <= h)
            {
                int mid = (l + h) / 2;
                if (A[mid] == key)
                {
                    return mid;
                }
                else if(A[mid] < key)
                {
                    l = mid + 1;
                    return RBinSearch(key, l , h);
                }
                else
                {
                    h = mid - 1;
                    return RBinSearch(key , l , h);
                }
            }
            else
            {
                return -1;
            }
        }

        int getLength()
        {
            return length;
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
    cout<<arr.getLength()<<endl;

    cout <<"Enter the element to search : "<<endl;
    cin>>key;
    cout<<"The element "<<key<<"is in the index : "<<arr.IBinSearch(key)<<endl;;

    cout <<"Enter the element to search : "<<endl;
    cin>>key;
    
    cout<<"The element "<<key<<"is in the index : "<<arr.RBinSearch(key,0,arr.getLength())<<endl;
    return 0;
}
