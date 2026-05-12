#include<bits/stdc++.h>
using namespace std;
#define SIZE 100
int front = -1, rare = -1;
string q[SIZE];

bool isQueueEmpty()
{
    if(rare == -1 && front == -1)
    {
        return true;
    }
    return false;
}

bool isQueueFull()
{
    if(rare == SIZE-1)
    {
        return true;
    }
    return false;
}

void addCustomerToQueue()   //Enqueue
{
    if(isQueueFull())
    {
        cout<<"The queue is already full, can't add more customers in it..!"<<endl<<endl;
        return;
    }
    cout<<"Please enter the name of customer... : ";
    string name;
    cin>>name;

    if(isQueueEmpty())
    {
        front++;
        rare++;
    }
    else
    {
        rare++;
    }
    q[rare] = name;
    cout<<"The customer "<<name<<" has been successfully added to queue"<<endl<<endl;
}

void sellTicket()   //Dequeue
{
    //when queue is empty
    if(isQueueEmpty())
    {
        cout<<"There is no one in the queue, cant sell ticket..!"<<endl<<endl;
        return;
    }

    cout<<"The ticket has been sold to the customer : "<<q[front]<<endl<<endl;

    //when there is only one person in the queue
    if(front==rare)
    {
        rare = -1;
        front = -1;
    }
    else{
         //Normal condition where more that one person in queue
         front++;
    }

}

void displayQueueOfCustomers()
{
    //when queue is empty
    if(isQueueEmpty())
    {
        cout<<"There is no one in the queue, Queue is empty"<<endl<<endl;
        return;
    }

    //Traverse the queue and print the customers names along with their positions
    int pos = 1;
    for(int i=front; i<=rare; i++)
    {
        cout<<"At position "<<pos<<" the customer is "<<q[i]<<endl;
        pos++;
    }
    cout<<endl<<endl;
    return;
    
}

int main()
{
    /*

    Build a ticket booking queue system
    Implement it using menu driven program
    1. Where user can add a person in the ticket booking queue
    2. The admin can sell the ticket to people
    3. Show the current queue of users



    menu driver program ?
    => It gives user the flexibility to perform operations at runtime
       And also the user can exit the program at his/her will
    
    How this menu driven program will be implemented
    => By using while loop and switch case
    
    */

   int choice;
   while(true)
   {
        cout<<"-----------------MENU-------------------"<<endl;
        cout<<"1. Add customers to the queue"<<endl;
        cout<<"2. Grant/sell the ticket to customers standing in queue"<<endl;
        cout<<"3. To view the customers position in queue"<<endl;
        cout<<"4. To exit from the code"<<endl;

        cin>>choice;
        switch(choice)
        {
            case 1:
                addCustomerToQueue();
                break;
            case 2:
                sellTicket();
                break;
            case 3:
                displayQueueOfCustomers();
                break;
            case 4:
                cout<<"Thanks for visiting, EXIT!"<<endl;
                return 0;
            default :
                cout<<"Invalid operation"<<endl;
        }
   }
}