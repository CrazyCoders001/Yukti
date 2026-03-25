/*

Classification of data structure

1. What are all different types of DS
=> Lined List
   Queue
   Array
   Stack
   Tree
   Graph
   Hash Table

   (The below are a bit complex and difficult to implement at the same time Not much frequently asked)
   Heap    
   Trie

2. classification based on scenario/method
=> i.   Based on organizing data
        => Linear 
           Non-Linear
   ii.  Based on Storage Representation
        The data structure are classified based on Primitive and Non-primitive data 

        Primitive types of data :- This is the raw form to store actual data
        int
        float
        char
        bool
        double
        pointer

        Non-Primitive DS :- These are derived DS which stores primitive data inside it
        Array
        Linked-list
        Queue
        Stack
        Tree
        Graph

   iii. Based on Memory Allocation
        Static Memory Allocation
        (Ek bar jo likh diya vahi aakhir tk rahega)
        int arr[5];

        Above you created an array of size 5
        can i increase the size of same array at runtime?
        => No, we cant increase/descrease the array size at runtime
        Thats why it is called as Static data structure

        - Array
        - Stack (implemented using array)
        - Queue (implemented using array)


        Dyanamic Memory Allocation
        (The initial value/size can alter at run time)

        Suppose you have a linked list 
        initially it has 2 nodes, at run time can i increase the nodes?
        => Yes, U can add as many nodes or delete as many nodes as you want at run time
        Thats why it is called as Dyanamic data structure

        - Linked list
        - Stack (implemented using linked-list) -- By default stack and queue comes under dynamic memory allocation
        - Queue (implemented using linked-list)
        - graph
        - tree


        Contigous Memory allocation VS non-contiguos memory allocation


    iv. Based on data access speed/convinience
        - Fast data access/update/addition (Index -> first element : 0, second : 1, and so on)
          Array is the best example of fast data accesss
        - slow data access/update/addition
          Linked List - If somebody says you to update mid element
          Graph
          Tree
          Stack
          




(M)FAANG? --> (Meta)Facebook, Aaple, Amazon, Netflix, Google
(Resume, Project, Network, System Design)

   

when you try to create an array 
lets say of size 5

but actually array doesnt created of size 5
it is not a mistake but an intentional effort
because array is static data structre

the size of array will always be in multiple of 2^n
2^0   2^1   2^2    2^3
1      2     4      8

actually how many blocks gets created for array of size 5? 8
Thats why, Many times we loose/waste some part of memory in contigous memory allocation

*/