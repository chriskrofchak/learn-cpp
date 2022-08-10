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

At the core of all the examples we'll be using, you'll be making a variable you want to store the input into and then you will input something from the command line and the program will store it in your variable for you to use.

### Example 1: Input Integer

```cpp
int main() {
    int input;
    std::cin >> input;
    std::cout << "The integer you input was: " << input << std::endl;
    return 0;
}
```

Note we use the `>>` for INPUT and `<<` for OUTPUT, you can separate multiple arguments of different types with `<<`. So if you want to print a string, then character then string then integer (or some weird combination), then separate each argument of a different type with `<<`. You'll learn why later.

### Example 2: Input while loops

Sometimes it does not suffice to input a single integer, you want to keep inputting variables until you no longer need to (say until you input "quit" or "q" or -1), or until there is no more input to be read, we call this End Of File (EOF). So, we use a while loop, and we do something peculiar, which you just have to trust me why this works (it's complicated and not necessary to know now).

```cpp
int main() {
    int input;
    while (std::cin >> input) {
        // do something
        std::cout << "> " << input << std::endl;
    }
}
```

This will keep reading integers until EOF is reached (until you have no more input), when doing this from the command line in Mac/Linux you will use `Ctrl+D` to signal EOF.

I have made an example in `/examples` which includes a test in and out file. To explain how I made them let's first take another look at some useful bash commands (these all work for Mac, which runs on either bash or zsh which have the same set of commands).

### Bash Commands Pt. 2!

Here are some useful bash commands which will help you when writing tests and interacting with your C++ program. I suggest you make some text files and try this out. (There will be examples for everything.)

Note `<` and `>` in *BASH* (don't get confused with `<<` and `>>` in C++) are what we use for "redirection", so `<` is used to change the source of an input to a command, and `>` is used to redirect the output from a command. So, for example, in my terminal, I try 

```
user@user:~$ date
Wed 10 Aug 2022 01:43:36 PM EDT
user@user:~$ date > testOutfile.txt
user@user:~$
```

As you can see, when we call date again with `>`, the output is not displayed to the terminal, this is because it was written to "testOutfile.txt". We can use `cat filename` to print the outputs of `filename` to the terminal. So, 

```
user@user:~$ date > testOutfile.txt 
user@user:~$ cat testOutfile.txt 
Wed 10 Aug 2022 01:44:00 PM EDT
```

Then, you can also use `>>` to append to a file, so if we call `date >> testOutfile.txt` in the terminal, we will have a second line with a second date. Try it! Let's look at more useful commands.

| Command Examples     | Purpose |
| ----------  | ---- |
| cat         | appends/writes/displays file   |
| cat > outfile.txt | will write whatever you type in the terminal to file `outfile.txt` |
| cat >> outfile.txt  | whatever you write in the terminal is appended to file `outfile.txt` |
| touch  `filename` | makes a file named `filename` in the current directory   |
| touch `./subdir/filename` | makes a file in `subdir` (if it exists) named `filename` |
| `|` (pipe command) | links output of the left to input on the right |
| `./cmd1 | ./cmd2` | take output from the program `./cmd1` and uses it as input to `./cmd2` |
| `./cmd < file.in > file.out` | uses `file.in` as input to `./cmd1` and writes it to `file.out` | 
| `cat file.in | ./cmd1 > file.out` | is same as `./cmd < file.in > file.out` |
| `cat file.in | ./cmd1 | cat > file.out` | is same as `./cmd < file.in > file.out` |
| diff file1 file2 | checks for differences between file1 and file2 | 

Now that we know a bit more about redirection in bash, it will be easier to write test inputs/outputs for our programs which interact with a user!

[[PREV NOTES](./3_flow.md)] [[NEXT NOTES](./4_functions.md)]