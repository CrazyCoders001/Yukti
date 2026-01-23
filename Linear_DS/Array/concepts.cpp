/*

Array :- Array is a linear data structure
         which has a fixed size and stores similar type of data


How to Implement an array?

step 1 : How to Declaration an array
step 2 : How to enter the elements in an array
step 3 : How to access each/any array element

*/



#include<bits/stdc++.h>
using namespace std;

int main()  // main is the entry point of the code
{
    // step 1 : How to Declaration an array
    // SYNTAX ->
    // int ARRAY_NAME[SIZE];
    int arr[5];    // Array declaration

    // step 2 : How to enter the elements in an array
    // ARRAY INITIALIZATION
    
    // SYNTAX ->
    // ARRAY_NAME[index] = VALUE
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    cout<<"please enter array elements :- "<<endl;
    for(int i=0; i<5; i++)
    {
        int element;   // var declaration
        cin>>element;  // var Initialization
        arr[i] = element;  // Array element declaration
    }

    cout<<"Display array elements :- "<<endl;
    // step 3 : How to access each/any array element
    // By using indexes we have to access the array elements
    // what is the index of first element of array? --> 0
    // what is the index of last element of array? -->  (length of array - 1)
    
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    
}

