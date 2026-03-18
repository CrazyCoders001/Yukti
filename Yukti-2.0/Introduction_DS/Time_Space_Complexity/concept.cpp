/*

What is Time complexity :- 

The amount of time an algorithm/block of code takes to run when input size increases


What is space complexity :- 
The amount of space an algorithm/block of code utilizes from syatem to run when input size increases


key factors which affects the time and space required to run a code
- The size of input which we feed to the program

example

{
    int sum = 0;    -- O(1)
    int n;          -- O(1)
    cin>>n;    // this is input to your sum calculation code
    for(int i=1; i<=n; i++)   lets assume the value of n = 10  -- O(1)
    { 
        sum += i;   
    }

    cout<<sum<<endl;
}

How much time it takes to run the above code?
-- The time and space complexity are denoted by using Big O notation [O(XYZ)]
-- For n=10, the above code will take 10 iteration to run
-- For n=10000 the above code will take 10000 iteration to run

How much space the above code is taking to execute?
a variable takes constant space O(1)
an array of size n takes O(n) space coplexity
O(1) + O(1) + O(1)
O(1+1+1)
O(3)      --- 3 is a constant value

hence the space coplexity of above code is constant O(1).




Types Time and space functions

1. O(1)     ---- Constant
2. O(n)     ---- Linear
3. O(n^2)   ---- Quadratic
4. O(log n) ---- Logarithmic
5. O(n^3)   ---- Cubic
6. O(2^n)   ---- Exponential 

O(1) < O(n) < (log n) < O(n^2) < O(n^3) < O(n^n)



How to calculate the time and space complexity for different types of code blocks


*/