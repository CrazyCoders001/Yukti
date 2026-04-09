#include<bits/stdc++.h>
using namespace std;

int main()
{
    //I want to explain how we can access the array elemets using index

    //Array declaration + Initialization
    int arr[10] = {10, 20, 45, 11, 67, 22, 90, 34, 90, 56};

    //array elements :-  10 20 45 11 67 22 90 34 90 56
    //Indexes        :-   0  1  2  3  4  5  6  7  8  9

    //I want to fetch first element of array and print the same
    //What will be the index of first element = 0
    cout<<"The first element is : "<<arr[0]<<endl;

    //How to find the length of any given array
    //=>

    //In python :- by using len() function
    //In Java :- by using .length() method

    //In CPP :- we dont have the inbuilt function which directly tells what is length of an array
    //          But we do have a sizeOf operator which helps to calculate the size of any data

    //How to find size of an array : sizeof(arr);
    //How to find size of an array : sizeof(arr[0]);

    int len = sizeof(arr) / sizeof(arr[0]);
    cout<<"The size of array : "<<sizeof(arr)<<endl;
    cout<<"The size of Int : "<<sizeof(arr[0])<<endl;
    cout<<"The length of given array is : "<<len<<endl;

    //I want to fetch last element of array and print the same
    //What will be the index of last element = lengthOfArray - 1
    cout<<"The last element of the array is : "<<arr[len-1]<<endl;


    //I want to fetch mid element of array and print the same
    //What will be the index of mid element = lengthOfArray/2
    cout<<"The mid element of the array is : "<<arr[len/2]<<endl;


    //From the above given array i want to print the sum of second element and third last element  :- 54
    //The first step should be to find the indexes of those elements

    //The index of second element = which is position - 1
    //                            = 2nd -1
    //The index of second element = 1

    //The index of third last element = len - position
    //                                = 10 - 3
    //The index of third last element = 7

    int secondElement = arr[1];
    cout<<"The second element is : "<<secondElement<<endl;

    int thirdLastElement = arr[len-3];
    cout<<"The third last element is : "<<thirdLastElement<<endl;
    cout<<"The sum of second and third last element is : "<<secondElement+thirdLastElement<<endl;


}