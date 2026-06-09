#include<bits/stdc++.h>
using namespace std;

// Node structure
struct Node {

    int data;
    Node *next;
};

int main()
{

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

    cout<<"--------LL before adding node at beginning---------------------------------"<<endl;

    int count = 1;
    while(temp != NULL)
    {
        cout<<"The data at node "<<count<<" is : "<<temp->data<<endl;
        temp = temp->next;
        count++;
    }


    cout<<"-----------------------------Insert element at the begining---------------------------"<<endl;
    //create a newNode
    Node *newNode = new Node();

    //assign value to the node
    newNode->data = 45;

    //Make the newNodes next pointer points to the existing first node of LL
    newNode->next = head;

    //make the head point to the updated first node of LL
    head = newNode;


    cout<<"--------LL after adding node at beginning---------------------------------"<<endl;
    temp = head;
    
    count = 1;
    while(temp != NULL)
    {
        cout<<"The data at node "<<count<<" is : "<<temp->data<<endl;
        temp = temp->next;
        count++;
    }



    cout<<"-----------------------------Insert element at the end---------------------------"<<endl;

    cout<<"-----------------------------Insert element at the given position---------------------------"<<endl;


    cout<<"Thanks for learning linked list"<<endl;


}