#include<bits/stdc++.h>
using namespace std;

//These are global varibales and data structure
int top = -1;
#define SIZE 5   // Macro defination
int st[SIZE];

bool isStackFull()
{
    //when stack is filled completely the top pointer will be at index SIZE-1
    if(top == SIZE-1)
    {
        return true;
    }
    return false;
}

bool isStackEmpty()
{
    //When stack is empty the top pointer(index) will be at -1
    if(top == -1)
    {
        return true;
    }
    return false;
}

void push(int num)
{
    //before adding/pushing element into stack check if it is already full
    if(isStackFull())
    {
        cout<<"Sorry cant insert element :"<<num<<" , the stack is already full, STACK OVERFLOW!!!!"<<endl;
        return;
    }

    //if stack is not full, then perform push operation
    top++;
    st[top] = num;
}

void pop()
{
    //Before deleteing an element from stack check if it is already empty
    if(isStackEmpty())
    {
        cout<<"The stack is already empty, cant delete anything, STACK UNDERFLOW!!!!"<<endl;
        return;
    }

    //If stack is not empty, perform pop operation
    cout<<"Deleting the top of stack : "<<st[top]<<endl;
    top--;
}

void display()
{
    //check if stack is empty
    if(isStackEmpty())
    {
        cout<<"The satck is empty, nothing to show......!"<<endl;
        return;
    }

    //If the stack is not empty then display the stack elements
    cout<<"The stack elements are as follows :- "<<endl;
    for(int i=0; i<=top; i++)
    {
        cout<<st[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    //local scope of top (the existance of top is only within this main function)
    // int top = -1;


    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    
    display();
    pop();      //removes 50
    display();

    pop();  //removes 40
    pop();  //removes 30
    pop();  //removes 20
    pop();  //removes 10

    pop();

}



/*

Stack :- The stack is Linear Data Structure, Which works on the principle of LIFO.

LIFO :- Last in First out (The element you insert last in the stack data structure will be removed at the first)


Assume you have 10 dishes put one on another
now, if u want to remove one dish from where will u remove it?
=> The top one

To Implement stack, you should know the methods/operations that needs to be performed
To implement stack you should know

You can implement stack using Array as well as by using LinkedList
If you have fixed size data (You know the number of integers/anyKindOfData u want to store) : go with Array
If you dont know the size of data (Or if the size will keep on fluctuating at run time)     : go with linkedList


Lets implement stack using Array :- 
To implement a stack using array you would need to keep track of one pointer index :- Top (that will be calles top)
and the initial value of top will be -1

1. push     :-  Push means to insert/add the element at top of stack
                Whenever you want to insert an element in stack you can only add it to 
                the top of stack, you cant add it anywhere else

                The rule : 
                you have to increment the top index first, top++
                and after that assign the value at the top index, st[top] = value

                STACK OVERFLOW :- When the stack is already full and you want to insert the element
                                  then the stack overflow happens

2. pop      :-  The pop operation means removing/deleting the topmost element from stack
                The defination of topmost element is, the element you inserted last
                you can't delete any element from stack other than the top place

                The rule :
                First display the element you want to delete, cout<<st[top]<<endl;
                after that decrement the top index by 1, top--

3. display  :-  Display helps to see what all you have inside your stack....

4. isStackEmpty  :-  When the stack is empty the top pointer(index) will be at -1
                     If the stack is empty, the function isStackEmpty() will return true, otherwise it will return false

5. peak     :- 

6. isStackFull   :- when stack is filled completely the top pointer will be at index SIZE-1
                    If the stack is full, the function isStackFull() will return true, otherwise it will return false

*/