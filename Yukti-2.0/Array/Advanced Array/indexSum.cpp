#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    Take an integer n, create an integer array of size n, 
    take n elements in array from user
    calculate the count of pairs whose sum is even

    Input : 
    Take user input integer n
    Create integer array of size n
    Take n elemets from user

    Ouput : integer (count of pairs whose sum is even)

    Sample TestCase :
    n = 5
    arr[n] = {3, 8, 2, 9, 6}
    output = 4

    pairs = (3,8) (3,2) (3,9) (3,6)  1+1+1+1 = 4
            (8,2) (8,9) (8,6)
            (2,9) (2,6)
            (9,6)


    n = 5
    arr[n] = {4, 1, 8, 6, 2}
    output = 6

    
    */

   int n;
   cin>>n;

   int arr[n];
   for(int i=0; i<n; i++)
   {
     cin>>arr[i];
   }

   int count = 0;
   for(int i=0; i<n; i++)
   {
      int firstValue = arr[i];
      for(int j=i+1; j<n; j++)
      {
        int secondValue = arr[j];
        int add = firstValue + secondValue;
        if(add%2 == 0)
        {
            count++;
        }
      }
   }

   cout<<"The answer is : "<<count<<endl;
}