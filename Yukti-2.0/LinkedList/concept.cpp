#include<bits/stdc++.h>
using namespace std;

// Node structure
struct Node {

    int data;
    Node *next;
};

int main()
{
    /*

        What is Linked list :
        - Linked list is linear/sequencial data structure
        - Linked list store the values in form of node
        - Each node of the list will have two entities 
          - Value
          - Pointer to the memeory address of next node
        - Linked list doesnt have any indexes
        - The memory allocation of every node is non-continuos
        - The first node of the linkedList can be accessed by using
          HEAD pointer, which stores the memory address of first
          node
        - The next pointer of last node stores NULL value

        
    */


    //How to create a node (Declaration of nodes)
    Node *first = new Node();  // new : to create memory at runtime (Dyanmic memory allocation)
    Node *second =  new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    //Assign the data
    first->data = 10;    // -> : arrow operator
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    //Linking Nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    //Head pointer
    Node *head = first;


    //Traverse on this linked list
    Node *temp = head;

    int count = 1;
    while(temp != NULL)
    {
        cout<<"The data at node "<<count<<" is : "<<temp->data<<endl;
        temp = temp->next;
        count++;
    }


    cout<<"Thanks for learning linked list"<<endl;


    /*

    1. How to delete an elemnt from linked list
    2. How to insert an element at any position in linked list
    
    
    */


}