#include<bits/stdc++.h>
using namespace std;

//These are global varibales and data structure
int top = -1;
#define SIZE 5   // Macro defination
int st[SIZE];

void push(int num)
{
    if(top == SIZE-1)
    {
        cout<<"Sorry cant insert element :"<<num<<" , the stack is already full, STACK OVERFLOW!!!!"<<endl;
        return;
    }
    top++;
    st[top] = num;
}

void pop()
{

}

void display()
{

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

    push(60);

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

                you have to increment the top index first
                and after that assign the value at the top index

                STACK OVERFLOW :- When the stack is already full and you want to insert the element
                                  then the stack overflow happens

2. pop      :-

3. display  :-

4. isEmpty  :-  

5. peak     :- 

6. isFull   :-

*/