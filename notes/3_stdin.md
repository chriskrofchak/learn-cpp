# Standard Input and Standard Output

So now that you know a bit about variables, types and control flow, it is really important that you know how to interact with your program. 

In Python you can do something like `print` and this will output something. C++ is a bit more strict, but the same concepts apply. 

## Standard Output

Whenever using standard output you must have the line 

```cpp
#include <iostream>
``` 

at the top of your file. This is "input output stream" or we use "I/O" as short form for input/output. Then, when you want to print something, you can use 

```cpp
std::cout << SOMETHING;
```

in many of my programs you will see `std::endl` at the end as well, this is optional, and just adds a "line end" character so you can separate what you print on their own lines. I'll give a few examples and this should suffice for what we need in this course. 

Anything of a different type must be separated by `<<` which is why you see `<<` between what I print and `std::endl`, then since a print statement is a statement you always need a semi-colon (`;`) at the end.

```cpp
int x = 2; 
int y = 45; 
char c = 'x';
char newline = '\n'; // this is single character! 

// prints "Something" on its own line
std::cout << "Something" << std::endl;

// prints "(2, 45)Uh oh..." 
// since we did not print "(2, 45)" on its own line
std::cout << "(" << x << ", " << y << ")"; // didnt add std::endl;
std::cout << "Uh oh..." << std::endl;

// adding '\n' is same as adding "<< std::endl"
std::cout << "Well that's weird!\n"; // will print the same as 
std::cout << "Well that's weird!" << std::endl;
```

When I say the program prints something, it won't print the quotes, that's just so you can see what I'm saying the program will print! 

Note, `\n` only prints newline on Mac or Linux. On Windows it doesn't, which is why it's best practice to use `std::endl` because then C++ will figure out what computer you're on, and substitute the correct newline character! Note, `std::endl` is saying "standard endline". 

## Standard input 

Standard input is very confusing and it only gets worse the more you learn. I will just give a few examples which are useful to know when learning and writing problems...

TBC

[[PREV NOTES](./3_flow.md)]