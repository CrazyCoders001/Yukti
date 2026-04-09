#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9] = {2, 5, 7, 2, 8, 0, 2, 5, 6};

    //Print the sum of only even index elements :- ?

    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++) 
    {
        if(i%2==0) 
        {
                sum+=arr[i];
        }
    }
    cout<<"The sum of even index elements is : "<<sum<<endl;

}