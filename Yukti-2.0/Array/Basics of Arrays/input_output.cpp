#include<bits/stdc++.h>
using namespace std;

int main()
{
    //I want to declare an iteger array of size 5, array name = arr
    int arr[5];

    // 10 20 45 18 7
    // 0  1  2  3  4

    //I want to take 5 integers from user (Dyanamic input)   (instead of 5 you have 5000 numbers to store)
    // cin>>arr[0];   -> 0
    // cin>>arr[1];   -> 1
    // cin>>arr[2];   -> 2              --> The only changing factor here is index_value
    // cin>>arr[3];   -> 3
    // cin>>arr[4];   -> 4

    //The above approach works 100% fine, But the issue is with code duplicacy/repetation
    //The above code need to be fixed using some coding features/concepts -> Use Loop
    cout<<"Enter array elements : ";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    //I want to print all the array elements on screen 
    cout<<endl<<"The Array elements are : ";
    // cout<<arr[0];
    // cout<<arr[1];
    // cout<<arr[2];
    // cout<<arr[3];
    // cout<<arr[4];
    for(int i=0; i<5; i++)  
    {
      cout<<arr[i]<<" ";
    }

    //In above code you printed the elements in order on insertion
    //How to print the elements in reverse order?
    cout<<endl<<"The Array elements in reverese order are : ";
    for(int i=4; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
}