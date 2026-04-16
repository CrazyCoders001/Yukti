#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Take ineteger rows and cols from user
        declare a 2D array with rows and cols taken above
        and ask user to enter the elements inside the 2D array

        once the insertion done, calculate the sum of all elements from 2D array
        whose index sum is odd.

        TestCase

        rows = 3, cols = 3
        1(0, 0) 3(0, 1) 6(0, 2)           
        7(1, 0) 3(1, 1) 9(1, 2)          3 + 7 + 9 + 5 = 24
        2(2, 0) 5(2, 1) 6(2, 2)

        output = 24

    */

   int row, col;
   cout<<"ennter the row and col values : ";
   cin>>row>>col;

   int twoD_array[row][col];
   cout<<"enter 2D array elements"<<endl;
   for(int i=0; i<row; i++)
   {
        for(int j=0; j<col; j++)
        {
            cin>>twoD_array[i][j];
        }
   }

   int sum =0;
   for(int i=0; i<row; i++)
   {
    for(int j=0; j<col; j++)
    {
        int current_num = twoD_array[i][j];
        if((i+j)%2 == 1)
        {
            sum += current_num;
        }
    }
   }

   cout<<"The sum of all elements whose index sum is odd = "<<sum<<endl;

}