#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*

    Given two 2D arrays, we have to calculate the sum of both the 2D arrays

    arr_1        arr_2          Result_arr
    1 4 6        2 5 1         1+2  4+5  6+1       3  9  7
    3 5 1   +    4 8 9    =    3+4  5+8  1+9  -->  7  13 10
    9 6 0        0 0 1         9+0  6+0  0+1       9  6  1
    
    
    The dimension of arr_1 is 3x3
    The dimension of arr_2 is 3x3
    The dimension of Result_arr is 3x3

    The dimension of Result_arr will always be the same as the input arrays


    arr_1        arr_2          Result_arr
    1 2 4        1 2 3
    2 4 7    +   4 2 1           INVALID_INPUT
                 9 9 1
    
    The dimension of arr_1 is  --> 2*3
    The dimension of arr_2 is  --> 3*3

    When you are doin the matrix addition/substraction the dimensions of both the matrices should be same
    if they are not same, then you cant perform the addition/substraction operations
    
    */


    //Array_1 Input code
    int row_1, col_1;
    cout<<"Enter the dimensions of first array : ";
    cin>>row_1>>col_1;

    int arr_1[row_1][col_1];

    cout<<"enter 2D array elements"<<endl;
   for(int i=0; i<row_1; i++)
   {
        for(int j=0; j<col_1; j++)
        {
            cin>>arr_1[i][j];
        }
   }

   //Array_2 Input code
    int row_2, col_2;
    cout<<"Enter the dimensions of second array : ";
    cin>>row_2>>col_2;

    int arr_2[row_2][col_2];

    cout<<"enter 2D array elements"<<endl;
   for(int i=0; i<row_2; i++)
   {
        for(int j=0; j<col_2; j++)
        {
            cin>>arr_2[i][j];
        }
   }

    if(row_1 != row_2 || col_1 != col_2)
    {
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }


    //Addition operation logic
    int result_arr[row_1][col_1];
    for(int i=0; i<row_1; i++)
    {
        for(int j=0; j<col_1; j++)
        {
            result_arr[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }

    //Display the result
    cout<<"The result array after addition is : "<<endl;
    for(int i=0; i<row_1; i++)
    {
        for(int j=0; j<col_1; j++)
        {
            cout<<result_arr[i][j]<<" ";
        }
        cout<<endl;
    }

}