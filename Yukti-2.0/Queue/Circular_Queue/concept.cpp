#include<bits/stdc++.h>
using namespace std;
#define SIZE 5
int front = -1, rare = -1;
int q[SIZE];

bool isQueueEmpty()
{
    if(rare == -1 && front==-1)
    {
        return true;
    }
    return false;
}

bool isQueueFull()
{
    if((rare+1)%SIZE == front)
    {
        return true;
    }
    return false;
}

void Enqueue(int val)
{
    if(isQueueFull())
    {
        cout<<"Cant insert value "<<val<<" because the queue is already full"<<endl;
        return;
    }
    if(isQueueEmpty())
    {
        front++;
        rare++;
        q[rare] = val;
        return;
    }

    //first increment the rare value using special incrementation logic
    rare = (rare+1)%SIZE;
    q[rare] = val;
    return;
}

void Dequeue()
{
    if(isQueueEmpty())
    {
        cout<<"Queue is already empty, nothing to delete"<<endl;
        return;
    }
    if(rare == front)
    {
        //when the front and rare index points to the same index, that means queue has only one element
        // when you Dequeue the last standing element from queue, then queue will become empty
        // in that case reset the front and rare to -1
        cout<<"Deleting value "<<q[front]<<" from queue"<<endl;
        front = -1;
        rare = -1;
        return;
    }

    cout<<"Deleting value "<<q[front]<<" from queue"<<endl;
    q[front] = -1;
    front = (front+1)%SIZE;
    return;

}

void Display()
{
    if(isQueueEmpty())
    {
        cout<<"Queue is empty notjing to show"<<endl;
        return;
    }

    int iter = front;
    while(true)
    {
        cout<<q[iter]<<" ";

        if(iter == rare){
            break;
        }

        iter = (iter+1)%SIZE;

    }
    cout<<endl;
    return;
}

int main()
{
    /*
    
    Circular Queue :- The circular queue is the advanced version of queue
                      Where you can store the data efficiently
                      The rare index can circle from last index (size-1) to firstIndex(0)
                      All the other implementation remains same
                      Except few condition check..


    
    */

    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);

    Dequeue();
    Dequeue();

    Display();

    Enqueue(60);
    Enqueue(70);

    Display();
}