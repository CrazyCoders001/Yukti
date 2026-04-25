#include<bits/stdc++.h>
using namespace std;

void push(char ch,char st[], int &top)
{
    top++;
    st[ch];
}

bool pop(char st[], int &top)
{
    if(top==-1)
    {
        return false;
    }
    top--;
    return true;
}

int main()
{
    /*
        you will be given a srtring of parenthesis, you need to figure out
        whether that is a valid parenthesis or not.

        INPUT :
        "(())()"

        OUTPUT :
        Valid parenthesis
    */

   string str;
   cin>>str;

   int size = str.length();
   char st[size];
   int top = -1;
 
   bool isValid = true;
   for(int i=0; i<size; i++)
   {
        char ch = str[i];
        //if the character is a opening bracket then push it to the stack
        if(ch == '(')
        {
            push(ch, st, top);
        }
        else  // if the character is a closing bracket then pop it from the top of stack
        {
            isValid = pop(st, top);
        }
        if(isValid==false) break;
   }

   if(top==-1 && isValid==true)
   {
    cout<<"The given string : "<<str<<" is a VALID PARENTHESIS"<<endl;
   }
   else
   {
    cout<<"The given string : "<<str<<" is a INVALID PARENTHESIS"<<endl;
   }
}