#include<bits/stdc++.h>
using namespace std;

/*

These are the list of premitive data structure/type
int
float
char
bool
double
pointer  -- Dedicated sessions
*/

int main()
{
    // I want to store my age, Initial of name, percentage
    // How can i store these values?

    // to store age (or any numerical whole numbered data we use int)
    // age = 18

    // to store initial of name? char
    // initial_name = 'a'

    // to store percentage? float/double  (because percentage can be in decimal frcation)
    // percentage = 87.34

    cout<<"--------------------------------------------INT----------------------------------------------"<<endl;
    // int
    int val;     // Variable declaration
    val = 10;    // variable initialization

    // int val = 10;  // var declaration + initialization

    /*
    what is the size of integer = 4 Bytes
    Range of integer (the mimium and maximum value it car store) = -2,147,483,648 to 2,147,483,647
    */
    int max_value = 2147483647;
    cout<<"max_value = "<<max_value<<endl;

    /*
    Incident of integer overflow
    There was company which had a database and this database has a column named request_id (primary) (int)
    - whenever a new reuest comes, existing value of request_id will increment by one and it get stored in db
    */

    
    
   cout<<"--------------------------------------------FLOAT----------------------------------------------"<<endl;
    // float
    float float_val;         // variable declaration
    float_val = 12.445566788883578;       // varibale initialization

    cout<<"float_value = "<<setprecision(20)<<float_val<<endl;
    /*
        size of float = 4 Bytes
        what is the precision correctioness of float : 6-7 decimal places

        precision is how many decimal points you want to have in a number
        float_val = 12.445566788883578
    */

    cout<<"--------------------------------------------DOUBLE----------------------------------------------"<<endl;
    // double
    double double_val;
    double_val = 12.4455667888835784675;
    cout<<"double_value = "<<setprecision(20)<<double_val<<endl;
    /*
        size of double = 8 Bytes 
        what is the precision correctioness of double : 15-16 decimal places

        precision is how many decimal points you want to have in a number
        double_val = 12.445566788883578
    */
    cout<<"--------------------------------------------CHAR----------------------------------------------"<<endl;
    //char
    /*
    size of character 1 Bytes
    the character should always be enclosed within single quotes
    range = -128 to 127
    */
   char ch = 'A';
   cout<<"My_character is ="<<ch<<endl;    // the characters gets stored in memory as the ascii values

    cout<<"--------------------------------------------BOOLEAN----------------------------------------------"<<endl;
    //boolean
    bool is_valid;
    is_valid = false;
    cout<<"boolean variable = "<<is_valid<<endl;

    /*
    size of boolean is 1 Byte
    the range : you either store true (1) or false (0)
    */


    //pointer  -- We will see it in detailed and separate sessions
}