#include<bits/stdc++.h>
using namespace std;

//pass by value
void incrementByValue(int num)
{
    num++;
}

//pass by reference
void incrementByReference(int &num)
{
    num++;
}

int main()
{
    /*do u know what is pass by value VS pass by reference?????*/

    /*
        Pass by value : Here you are passing an value to a function as a copy of the origina data
                        Here the original value will not be changed by any operation done by function

        Pass by reference : Here you are passing an reference to the original data
                            Here the original value will be changed by any operation done by function

    */

    int num = 10;
    incrementByValue(num);
    cout<<"The num value aftre incrementByValue function : "<<num<<endl;     //10

    incrementByReference(num);
    cout<<"The num value aftre incrementByReference function : "<<num<<endl; //11
}