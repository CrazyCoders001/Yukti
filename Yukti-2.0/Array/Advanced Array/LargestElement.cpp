#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    Take an integer n as input from user
    create n sized integer array
    Find out the Largest element from the array

    Input : 
    Integer n
    n int values inside array

    Output :
    Largest number

    sample test case :
    n - 5
    array - 6 2 8 3 25

    output : 25


    The thumb rule :
    When in the problem statment they say find out the largest value
    then initialize the largest_value to the INT_MIN (cpp)

    When in the problem statment they say find out the smallest value
    then initialize the smallest_value to the INT_MAX (cpp)

    INT_MIN :- is the minimum possible integre value (-2147483648)
    INT_MAX :-  it is maximum possible integer value (2147483647)

    Traverse over all elements of the array and check if the current value is 
    greater than the largest_value then assign the current value to the largest_value
    
    */

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int large_Value = INT_MIN;
    for(int i=0; i<n; i++)
    {
        int current_value = arr[i];
        if(current_value > large_Value)
        {
            large_Value = current_value;
        }
    }

    cout<<"The largest value from array is : "<<large_Value<<endl;
    //To find second largest value iterate over the array again
    //and try to find the second largest value with same logic but the
    // the current value should not be equal to largest one
    int second_largest_value = INT_MIN;
    for(int i=0; i<n; i++)
    {
        int current_value = arr[i];
        if(current_value > second_largest_value && current_value != large_Value)
        {
            second_largest_value = current_value;
        }
    }

    cout<<"The second largest value from array is : "<<second_largest_value<<endl;

    int smallest_value = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        int current_value=arr[i];
        if(current_value < smallest_value)
        {
        smallest_value=current_value;
        }
    }
    cout<<"The smallest value from array is : "<<smallest_value<<endl;

    //write code to find second smallest value
    int second_smallest_value = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        int current_value=arr[i];
        if(current_value < second_smallest_value && current_value != smallest_value)
        {
            second_smallest_value = current_value;
        }
    }
    cout<<"The second smallest value from array is : "<<second_smallest_value<<endl;
}