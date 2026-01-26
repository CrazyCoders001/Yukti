#include<bits/stdc++.h>
using namespace std;


/*

Take an integer array of size N, store N elements in that array
calculate the length of that array and print
first, mid and last element of that array


N = 7
arr = [2, 5 , 7 , 4 , 9 , 0 , 8]
       0  1   2   3   4   5   6

       [2, 5 , 7 , 4 , 9 , 0]  --> mid element of this-> 4

length = ?     7 (programatically find kaisse krna hai?)
first = ?      2
mid = ?        4    (mid = length/2)
last = ?       8 

*/

int main()
{
    int N;
    cout<<"Please enter the size of array :-";
    cin>>N;

    //declare an array of name arr of size N
    int arr[N];  

    cout<<"Please enter "<<N<<" elements in the array"<<endl;
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
        /*

        i if going from 0 to N-1
                        0 to (7-1)
                        0 to 6
        
        */
    }

    // calculate length of the array?
    // step 1 : calculate the total size of the array (using sizeOf op)
    // step 2 : divide the total size by the size of first elemnt of array

    // first element is 2 (2 is an integer, what is size of integer = 4)
    // Total size of array = size of data type * length of array
    // length of array = Total size of array / size of data type

    int size_of_array = sizeof(arr);
    int size_of_data_type = sizeof(arr[0]);
    int len = size_of_array/size_of_data_type;

    cout<<"Total size of array :- "<<size_of_array<<endl;
    cout<<"Size of data type :- "<<size_of_data_type<<endl;
    cout<<"length of the array :- "<<len<<endl;

    /*
        the index of first element will be zero (0)
        the index of last element will be length of array minus 1 (len - 1)
        the mid index = len/2    
    */

    cout<<"The first element is : "<<arr[0]<<endl;
    cout<<"The mid element is : "<<arr[len/2]<<endl;
    cout<<"The last element is : "<<arr[len-1]<<endl;


}

