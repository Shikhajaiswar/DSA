#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void create(int A[], int n, Node *head)
{
    // Node *head = new Node;
    Node *temp;
    Node *last;
    head->data = A[0];
    head->next = nullptr;
    last = head;

    // Creating a linked list
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        // Last'next is pointing to temp
        last->next = temp;
        last = temp;
    }
}

// void display(Node *p){
//     while (p != nullptr)
//     {
//         cout << p->data << "->" << flush;
//         p = p->next;
//     }
// }
// Recursive function to access the linkedlist
void display(Node *p)
{
    if (p != nullptr)
    {
        cout << (p->data) << "->";
        display(p->next);
    }
}

// Function to count the number of nodes
int k = 0;
int count(Node *p)
{
    if (p != nullptr)
    {
        k++;
        count(p->next);
    }
    return k;
}

// Function to sum all the elements of the linked list
int sum2 = 0;
int sum(Node *p)
{
    if (p != nullptr)
    {
        sum2 += p->data;
        sum(p->next);
    }
    return sum2;
}

// Recursive fun to find the max and min element

// void max_min(Node *p)
// {
//     int max = p->data;
//     while (p != nullptr)
//     {
//         if (p->data > max)
//         {
//             max = p->data;
//         }
//         p = p->next;
//     }
//     cout << "Maximum is : " << max;
// }

int max_min(Node *p)
{
    int x = 0;
    if (p == 0)
        return INT32_MIN;
    else
    {
        x = max_min(p->next);
        if (x > p->data)
            return x;
        else
            return p->data; 
    }
}

//linear search
Node * search(Node *p, int key){
    if(p==0)
        return nullptr;
    else{
        if(key==p->data)
            return p;
        else
        return search(p->next, key);    
    }    
}

int main()
{
    int A[] = {3, 5, 7, 9, 43, 5};
    int n = sizeof(A) / sizeof(A[0]);
    Node *head = new Node;
    create(A, n, head);
    display(head);
    cout << endl;
    cout << "The number of Nodes is : " << count(head) << endl;
    cout << "The sum of all the elements is :  " << sum(head) << endl;
    cout << "The maximum element is : " << max_min(head)<<endl;
    int key=43;
    cout<<search(head, key);

    return 0;
}