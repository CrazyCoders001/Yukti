#include<bits/stdc++.h>
using namespace std;
#define SIZE 5
int front = -1, rare = -1;
int q[SIZE];

bool isQueueFull()
{
    //if the rare index is at SIZE-1 then the queue is already full
    if(rare == SIZE-1)
    {
        return true;
    }
    return false;
}

bool isQueueEmpty()
{
    //if front and rare both are at -1 that means queue is empty
    if(rare==-1 && front==-1)
    {
        return true;
    }

    return false;
}

void Enqueue(int data)
{
    //When rare is at size-1 that means the queue is full, and you cannot add more elements
    if(isQueueFull())
    {
        cout<<"The Queue is full, Hence cannot add value "<<data<<" inside the queue"<<endl;
        return;
    }
    if(isQueueEmpty())
    {
        rare++;
        front++;
        q[rare] = data;
    }
    else{
        rare++;
        q[rare] = data;
    }
}

void Dequeue()
{
    //What if the queue is empty
    if(isQueueEmpty())
    {
        cout<<"The Queue is already empty, cannot delete anything from it....!"<<endl;
        return;
    }

    //what is the queue has only one element
    if(front == rare)
    {
        //when both front and rare are at same value/position
        //The the queue has only one element left
        //Delete it and reset
        //front and rare by -1
        cout<<"Deleting element : "<<q[front]<<" from the queue"<<endl;
        front=-1;
        rare=-1;
        return;
    }

    //normal scenario
    cout<<"Deleting element : "<<q[front]<<" from the queue"<<endl;
    front++;
    return;
}

void display()
{

    //Check if the queue is empty
    if(isQueueEmpty())
    {
        cout<<"The Queue is Empty, Nothing to display....!"<<endl;
        return;
    }
    cout<<"The elements inside queue are"<<endl;
    for(int i=front; i<=rare; i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    /*
        What is the meaning of queue (normal english)?
        => the objects of persons after standing in a straight line one after another
           Assume you are standing in a queue to get your first beer of life....
           So in that queue you will be served on the basis of first come first served


        Queue Data Structure : Queue is a linear Data Structure which works on the 
                               principal of FIRST IN FIRST OUT
        
        You can implement queue by using an Array as well as by using LinkedList
        If you have fixed size data (You know the number of integers/anyKindOfData u want to store) : go with Array
        If you dont know the size of data (Or if the size will keep on fluctuating at run time)     : go with linkedList

        While implementing queue
        You will have to take two pointer varibales
        one is front and the other is rare
        and initially both the pointers will get assigned with value -1

        front : you will delete the elements from the front index
        rare : you will insert the elements at rare index


        The operations of queue?

        1. Enqueue      :- The enqueue operation means inserting an element inside the queue
                           The insertion will happens at the RARE index

                           Rules for Enqueue
                           When the queue is empty in that case
                           you need to increment both front (front++) and rare (rare++) by one

                           Otherwise just increment the rare index by one (rare++)
                           assign/insert the value at rare index

        2. Dequeue      :- The Dequeue operation means deleting an element from the queue
                           The deletion will happen from the front index

                           First print the element which you want to delete 
                           after that increment the front value by one (front++)

                           Rules for Dequeue
                           When the queue is empty in that case you cannot delete anything

                           When there is only one element left in the queue, your front and rare
                           both the index will point to the same position
                           so in that case if you delete an element the queue will become empty
                           reset the front and rare index to ?



        3. DisplayQueue :- To display the queue, traverse from front index till the rare index

        4. isQueueEmpty :- When both the front and rare index are at -1, then we can call
                           The Queue is empty

        5. isQueueFull  :- When the rare index is at SIZE-1 then you can call
                           The Queue is full
    */


   Enqueue(10);
   Enqueue(20);
   Enqueue(30);
   Enqueue(40);
   Enqueue(50);

   display();

   Enqueue(60);  //this should give ...cant add msg

   Dequeue();

   display();
   Dequeue();
   Dequeue();
   display();


   Enqueue(100);   //Will it get added into the queue?
   //you cannot add 100 here, bcoz this is a normal queue, and not a circular queue

   //We can add/store the elements in the best optimal way by using circular queue
}