#include<bits/stdc++.h>
using namespace std;

void push(char ch, char st[], int &top, int size)
{
    if(top == size-1)
    {
        cout<<"STACK OVERFLOW!!"<<endl;
        return;
    }
    top++;
    st[top] = ch;
    return;
}

int main()
{
    /*
        Take a string as a input from the user, and reverse the string by using stack 
        and print the revesred version of string

        INPUT :
        str = "akash"

        OUTPUT :
        "hsaka" 
    */

    //Take input
    string input_str;
    cin>>input_str;

    //create a stack of size equal to the length of string
    //How to find the length of the string
    int size = input_str.length();

    //local declaration of variables
    char st[size];   // --> is this correct? 
    int top = -1;

    //push all characters into the push
    
    for(int i=0; i<size; i++)
    {
        char ch = input_str[i];
        push(ch, st, top, size);
    }
    
    //create a empty string
    string reversed_string = "";

    //pop out all stack elements one by one and append it to the reversed_string
    
    while(top != -1)
    {
        char top_element = st[top];
        reversed_string += top_element;
        top--;
    }
    
    
    cout<<"The original string : "<<input_str<<endl;
    cout<<"The Reversed string : "<<reversed_string<<endl;

}