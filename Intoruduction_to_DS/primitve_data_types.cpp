#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Primitive data/structure types : These are already defined/available data structure
                                         in the libraries.
                                         These are also called as, building blocks for
                                         non-primitive data structure


        1. int : int data type can hold integer values
                 The size of int data is of 4 Bytes
                 Range is -2147483648 to 2147483647

        2. Float
        3. Char
        4. Double
        5. Boolean

    */

   /*
    1. int : int data type can hold integer values
            The size of int data is of 4 Bytes
            Range is -2147483648 to 2147483647

        SYNTAX 
        int VARIABLE_NAME;       //this is variable declaration
        VARIABLE_NAME = 10;      //this is variable Initialization
    */

   int var;
   var =  2147483650;
   // int var = 10;
   cout<<"My integer variable var = "<<var<<endl;


   // Q. can i declare a variable named var twice?
   // => NO, We cant re=declare a variable but we can re-initialize its values as many
   //     times as we want

   /*

   2. Float : Float is used to store the decimal valued numbers
              The size of float data is of 4 Bytes
              float has accurate precesion upto 6-7 decimal places
              Range is -3.4028234663852886e+38 to 3.4028234663852886e+38 
                       -3.4028234663852886^38 to 3.4028234663852886^38
              
    SYANTAX:
    float VARIABLE_NAME;

   
   */

    cout<<fixed<<setprecision(10)<<endl;

    float float_var;
    float_var = 19.6781278877;
    cout<<"My Float variable is = "<<float_var<<endl;

    /*
    3. double : double is used to store the decimal valued numbers
                The size of double data is of 8 Bytes
                double has accurate precesion upto 14-15 decimal places
                Range is -3.4028234663852886e+308 to 3.4028234663852886e+308 
                        -3.4028234663852886^308 to 3.4028234663852886^308
              
    SYANTAX:
    double VARIABLE_NAME;

   */

    double double_var;
    double_var = 19.6781278877;
    cout<<"My double variable is = "<<double_var<<endl;

    //what is accurate precision
    // Lets assume i have a number
    // var = 12.5678923
    // If i say that i have the accurate precision of 5
    // its means the first 5 digits after the decimal place will remain same
    // cout<<var;
    // In this case the output will be
    // 12.56789(fixed 5 precision place digits)49(these are innaccurate digits)


     /*


    4. char : char is used to store a single character value
              the char value is always enclosed within single quote
              The size of char data is of 1 Bytes
              Range is -128 to 127

    Q. I said char will store character values (for example 0-9, a-z, A-Z)
       but i am saying its range is in ingeter (numeric), so why is this happening?
    => Characters get mapped with its ASCII values and stored in computer in form of
       ASCII values

              
    SYANTAX:
    char VARIABLE_NAME;

   */
   char ch;
   ch = 'a';
   cout<<"My char variable is = "<<ch<<endl;

    /*
   5. boolean : Boolean data type stores either true/1 or false/0
                size = 1 Byte
       
    SYANTAX:
    bool VARIABLE_NAME;

   */
   bool bool_var;
   bool_var = false;
   cout<<"My bool variable is = "<<bool_var<<endl;   //0



}