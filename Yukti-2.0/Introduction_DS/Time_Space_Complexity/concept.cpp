/*

What is Time complexity :- 

The amount of time an algorithm/block of code takes to run when input size increases


What is space complexity :- 
The amount of space an algorithm/block of code utilizes from syatem to run when input size increases


key factors which affects the time and space required to run a code
- The size of input which we feed to the program


Types Time and space functions

1. O(1)     ---- Constant
2. O(n)     ---- Linear
3. O(n^2)   ---- Quadratic
4. O(log n) ---- Logarithmic
5. O(n^3)   ---- Cubic
6. O(2^n)   ---- Exponential 

Performance graph
O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(n^3) < O(n^n)

example

O(n)     ---- Linear
{
    int sum = 0;    -- O(1)   //what is sixe of int : 4 bytes *3 = 12 Bytes
    int n;          -- O(1)
    cin>>n;    // this is input to your sum calculation code
    for(int i=1; i<=n; i++)   lets assume the value of n = 10  -- O(1)
    { 
        sum += i;    -- O(n)
    }

    cout<<sum<<endl;   -- O(1)
}

How much time it takes to run the above code?
-- The time and space complexity are denoted by using Big O notation [O(XYZ)]
-- For n=10, the above code will take 10 iteration to run
-- For n=10000 the above code will take 10000 iteration to run

-- Time complexity = O(1) + O(1) + O(n) + O(1)
                   = O(n+3)   = O(n^1 + (n^0*3))
                   = O(n)

How much space the above code is taking to execute?
a variable takes constant space O(1)
an array of size n takes O(n) space coplexity
O(1) + O(1) + O(1)
O(1+1+1)
O(3)      --- 3 is a constant value

hence the space coplexity of above code is constant O(1).

// n = input size, Iteration = time required to run
// When n = 1, iteration = 1  
// When n = 2, iteration = 2 
// When n = 3, iteration = 3 
// When n = 4, iteration = 4 
// When n = 5, iteration = 5 
// When n = 6, iteration = 6 
// When n = 7, iteration = 7 
// When n = 8, iteration = 8 






O(1)     ---- Constant
{
    int n;         -- O(1)     
    cin>>n;        -- O(1)              O(1+1+1) = O(3) = O(1)
    cout<<n;       -- O(1)


    //In above code we are just declaring 1 integer variable
    // Now what is the size of that Variable = 4 Bytes 

    // when n=56     // space required to store 56    = 4 Bytes
    // When n=50000  // space required to store 50000 = 4 Bytes
    // When n=999    // space required to store 999   = 4 Bytes

    The Time and space complexity of above code is O(1)
}







How to calculate the time and space complexity for different types of code blocks


{
    int n;                      -- O(1)
    cin>>n;     // n=10         -- O(1)

    for(int i=1; i<n; i=i+2)      --- O(n/2)
    {
        cout<<i<<endl;    -- 1+1+1+1+1 = 5
    }
}

when n = 5, Number of iteration = 2
when n = 10, Number of iteration = 5
when n = 50, Number of iteration = 25

Time complexity = O(1) + O(1) + (n/2)
                = O(n/2 + 2)
                = O(n/2)
                = O(n)   -- Linear time complexity

Space complexity = O(1) -- Constant


O(log n) ---- Logarithmic
{
    int n;
    cin>>n;   // n = 12

    for(int i=1; i<n; i=i*2)
    {
        cout<<i;          1+1+1+1  
    }
}
                        k
for n = 10, iteration = 4
for n = 28, iteration = 5
for n = 34, iteration = 6
for n = 20, iteration = 5
for n = 12, iteration = 4


The equation to determine Number of iteration for input n
2*2*2*2 = 16
1 <= 2^(k-1) <= n

1 * 2^(k-1) = n
2^(k-1) = n/1 = n

K-1 = log Base2 n
K = (log Base2 n) + 1
K = log Base2 n
K = log n
What is your K = Amount of time rquired to run the code

Time complexity = O(log n)
space complexity = O(1)


{
    int n;                             -- O(1)
    cin>>n;   //Input                  -- O(1)

    int arr[n];                        -- O(1);

    //suppose n =  7
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)      for i=1, j=1,2,3,4,5,6,7
        {                            for i=2, j=1,2,3,4,5,6,7
            int num;                 for i=3, j=1,2,3,4,5,6,7        Total iteration = 25  -- O(n^2)
            cin>>num;                for i=4, j=1,2,3,4,5,6,7
            arr[j] = num;            for i=5, j=1,2,3,4,5,6,7
        }                            for i=6, j=1,2,3,4,5,6,7
    }                                for i=7, j=1,2,3,4,5,6,7
}


Time complexity  -- O(n^2)
when n = 5, the loop iteration = 25  = (5*5)  = n*n = n^2
when n = 7, the loop iteration = 49  = (7*7)  = n*n = n^2
when n = 3, the loop iteration = 9   = (3*3)  = n*n = n^2

O(1) + O(1) + O(1) + O(n^2) + O(n^2) + O(n^2)
O(1+1+1+n^2+n^2+n^2)
O(3+3n^2)
O(3n^2)
O(n^2)


Space complexity -- O(n)
-- We are using 4 integer variables in above code block - O(4) - 4*4 Bytes = 16 Bytes
-- We are also taking an integer array of size n
-- Which means the size of array is as big as the value of n

for example n = 5
arr = 1,2,3,4,5

n = 7
arr = 1,2,3,4,5,6,7

we need constant space of 16 Bytes + array memory of n*4 Bytes
= O(4+n)
= O(n)



If i give you the code block, can you be able to figure out its time and space complexity?

// Data structure :-
// Types of data structure
// Classification of Data structures
*/