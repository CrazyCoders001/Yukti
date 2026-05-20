
#include<bits/stdc++.h>
using namespace std;

/*

What is pointer :
So the pointer is a concept in cpp/c by using that the programmer can directly get access to the memory
A pointer is a variable which holds the memory address of another varibale

and 

Why do we need to learn the pointer (Why is it so powerful)

system call? :- Syatem call is a program/code which makes the user level application (logic)
                to connect with the kernel applications
When you are dealing with kernel level operation or even writing any system call
you will need the access of memory directly

Most of these system call are written in c++

most of the mobile games are built by using c++
HFT (High Frequency Trading Ferms) uses c++ to build their application

you can build the complex data structure if you know and understand the pointers well
*/

int main()
{
    int a = 10;    //There is a variable "a" which has value 10
    cout<<a<<endl;

    int *p = &a;
    cout<<"Address of variable a "<<p<<endl;

    cout<<"The value at adreess "<<p<<" is = "<<*p<<endl;

    // &a will give you the address of variable "a"
    // and when you dereference the addres using * you will be able to access the value


    //Types of pointers

    // 1. Null Pointer
    // have you encountered with an exception called NULL POINTER exception
    // NULL pointer : A pointer that points to nothings is called as null pointer
    // when you try to perfrom operation on null value/pointer then you will get null pointer exception

    //add two numbers a = 10 , b = null 
    // if you try to do a+b then you will get null pointer excpetion

    int *q = NULL;
    // cout<<10 + *q<<endl; if you try to do this then your application will crash


    // 2. Wild pointer
    int *r;
    //a wild pointer is something where you declare a pointer but that pointer doesnt actuallt store anything
    cout<<*r<<endl;   //your app/program may crash, or it will print a garbage value

    //Run this on your machine and tell me what *r will print   --> ?


    cout<<"Hello world"<<endl;


}