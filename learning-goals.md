# LEARNING GOALS

1. Data Types 
    * how large are different data types? 
    * does a data type change/define the actual binary data stored in memory? 
2. Variables 
    * how to declare variables, how to initialize them
    * what happens when you declare a variable but do not initialize? what's in that variable?
3. Stack and Heap Memory 
    * what is the difference between stack and heap memory?
    * `int x; int y;` how far apart are those two variables? (what matters in order to know why?)
    * how to initialize something on the heap, and how to remove it when it's life is done. 
4. Pointers 
    * how to initialize a pointer to an existing value
    * what is the type of pointer which points to nothing?
    * how to dereference a pointer
    * understanding of pointers to pointers, etc.
5. Arrays 
    * what is an array in C/C++? 
    * how to initialize an array on the stack and on the heap
    * how to work with arrays (iterate over them), change items in an array
6. Functions 
    * calling functions (pass by value, by reference, by const reference)
    * recursion (what is the relation between recursion and the stack?)
    * base case, recursive case
    * how to turn an iterative problem (for, while) into a recursive problem and vice versa
    * ADVANCED: mutual recursion. writing a recursive function A which calls a function B which calls A, etc... 
7. Strings
    * Good to know, but don't spend too much time on: C-style strings
    * What is a C-style string, what is a null-terminating character?
    * Using std::string, google the functions that std::string gives you 
    * Using std::string to compare, concatenate and change strings like you would manipulate arrays
    * Try recursive functions on std::string: for example, is a string a palindrome? (Use recursion.)
8. Structs and Classes 
    * What is a struct? 
    * What is a class in C++? What is the difference between a struct and a class
    * Creating instances of classes. (MUST KNOW HOW TO WRITE A CONSTRUCTOR)
    * ((BREAK))
    * Overload operators -- ">>" "<<" "+" "-" operators can all be overloaded to work with your class.
        * THE RULE OF THREE: DESTRUCTOR, COPY CONSTRUCTOR, COPY ASSIGNMENT OPERATOR.
    * Visibility: public, private, protected 
    * Inheritance: inheriting from a parent class

((THIS WOULD BE  THE END OF 1.5 to 2 Intro courses in C++))

9. Simple Data Structures
    * Linked List: use simple class or struct to hold `data` field and pointer `next` field
        * Implement initialization, add, delete
    * Doubly linked list: has a `next` and a `prev` (previous) field, can traverse both ways
        * Implement init, add, delete
    * "Abstract Data Types" stack, queue, list, etc. how do we define an abstract data type, what pros and cons do each have?
    * Stack using an array, stack using a linked list
    * Queue using an array, queue using a linked list
    * Binary trees, basically a field which has data and two pointers `left` and `right` (children)
        * How to traverse a given binary tree
        * Recursion on binary trees
    * Binary search trees 