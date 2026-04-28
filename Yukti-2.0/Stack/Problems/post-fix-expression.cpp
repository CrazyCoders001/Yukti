#include<bits/stdc++.h>
using namespace std;

void push(int ch, int st[], int &top)
{
    top++;
    st[top] = ch;
}

int pop(int st[], int &top)
{
    int value = st[top];
    top--;
    return value;
}
int main()
{
    //What is a post fix expression?
    /*
    In post fix expression the operator will be written after both the operands
    if i want to write an postfix expression to calculate sum of 10 and 34
    then the postfix expression will be
    10 34 +

    ABC*+   --> A(B*C)+  -->  A + (B*C) 
    Steps to convert post fix to infix

    push the values/numbers into the stack
    if you get the operator, pop out the top two elements and perform the operation
    after that push the value back to stack

    */

    //Infix expression : the operator in infix expression will be in between two operands
    /*
    if you have two variables/value 10 and 34, and u want to calculate the sum
    => 10 + 34
    */
   
    /*
            238*+  --> '2'  '3'  '8'  '*'  '+'


            asscci values
            '0'    -->  48  - '0'   ==> 48 - 48 --> 0
            '1'    -->  49  - '0'   ==> 49 - 48 --> 1
            '2'    -->  50
            '3'    -->  51
            '4'    -->  52
            '5'    -->  53
            '6'    -->  54
            '7'    -->  55
            '8'    -->  56
            '9'    -->  57  - '0'  ==> 57 - 48  --> 9


    */

    string post_fix_expr;
    cin>>post_fix_expr;

    int SIZE = post_fix_expr.length();
    //I want to create a stack of size = SIZE
    //What should be the datatype of my stack???
    int st[SIZE];

    int top = -1;

    for(int i=0; i<SIZE; i++)
    {
        char ch = post_fix_expr[i];
        //what are asccii values of '0' and '9'
        if(ch >= 48 && ch <= 57)
        {
            push(ch-'0', st, top);
        }
        else
        {
            int num2 = pop(st, top);
            int num1 = pop(st, top);

            if(ch == '+')   push(num1+num2, st, top);
            if(ch == '*')   push(num1*num2, st, top);
            if(ch == '-')   push(num1-num2, st, top);
            if(ch == '/')   push(num1/num2, st, top);

        }

    }

    cout<<"The output of given postfix expression "<<post_fix_expr<<" = "<<st[top]<<endl;
}