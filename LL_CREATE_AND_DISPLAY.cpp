#include <iostream>
using namespace std;
 
class Node
{
    public:
        int data;
        Node* next;
};
Node* first;

void create(int A[], int n)
{
    first = new Node;
    Node* temp;
    Node* last;

    first->data = A[0];
    first->next = nullptr;
    last = first;

    // Create a Linked List
    for (int i=1; i<n; i++)
    {
        // Create a temporary Node
        temp = new Node;

        // Populate temporary Node
        temp->data = A[i];
        temp->next = nullptr;

        // last's next is pointing to temp
        last->next = temp;
        last = temp;
    }
}


void display(Node * p)
{
    while (p != nullptr){
        cout << p->data << " -> " << flush;
        p = p->next;
    }
}

void RDisplay(Node * p)
{
    if(p != NULL)
    {
        cout<<p->data<<" -> ";
        RDisplay(p->next);
    }
}

void ReverseRDisplay(Node * p)
{
    if(p != NULL)
    {
        ReverseRDisplay(p->next);
        cout<<p->data<<" -> ";
    }
}
 
int main() {
 
    int A[] = {3, 5, 7, 10, 15};
    int n = 5;
    create (A, n);
    display (first);
    cout<<endl;
    RDisplay (first);
    cout<<endl;
    ReverseRDisplay(first);
    return 0;
}