
#include<bits/stdc++.h>
using namespace std;
/*

What is multidimensional array?
The Advanced array Data structure where there will be more than 1 dimensions
So, in multidimensional array also you can store one data type only
The best example to take is 2D array

*/

int main()
{
    //Declare a 2 D array
    //To Declare any 2D array one should know how many
    //Rows and how many cols it has

    int row = 5, col = 5;
    //SYNTAX : DATATYPE ARRAY_NAME[ROW][COL]
    //Initialize the 2D array 
    //static initialization
    int arr[row][col] = {
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5}
        }; //when we declare something the memory gets
    //allocated for the varibale/DS

    cout<<"Display elements in 2D array"<<endl;
     for(int i=0; i<row; i++)
    {
        //The outer loop j value is for col
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Enter elements in 2D array"<<endl;
    //Dynamic/runtime initialization (user input)
    //The outer loop i value is for row
    for(int i=0; i<row; i++)
    {
        //The outer loop j value is for col
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];  // [0][0/1/2/3/4]
        }
    }


    cout<<"Display elements in 2D array"<<endl;
     for(int i=0; i<row; i++)
    {
        //The outer loop j value is for col
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    /*
    arr[5][5]
    
    */
}


