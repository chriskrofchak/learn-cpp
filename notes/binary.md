# Data Types and Intro to Computer Storage

Disclaimer: As this is a course on C++ we will discuss how data types are stored in C/C++, and on Mac or Unix-like (Linux) operating systems. Most will be the same on Windows but I don't know or like anything about Windows so I can't say. 

## Binary Representation of Integers

Definition: "Integer" is a whole number, so $-2,-1,0,1,2,3,...$ are integers while $0.5$, $1/3$, and $\pi$ are not.

Everyone tells you computers deal in ones and zeroes, namely "binary" which means "base 2," but exactly how does different data get turned into sequences of $1$s and $0$s?

We start with the encoding of integers greater than or equal to $0$, then generalize to all integers.

### Base ten and decimal systems

You already know this, but as a refresher, any numeric "decimal" system has a base $b$ and a digits which can take up values $0,...,b-1$. For example, our current decimal system uses base 10 and so we have digits $0,...,9 (= 10-1)$. The way we represent numbers is thus a sequence of powers of our base system. For example
$$1452 = 1\cdot 10^3 + 4\cdot 10^2 + 5\cdot 10^1 + 2\cdot 10^0,$$

so starting from the rightmost digit, we increment the power of the base by $1$ and we simply write all digits side by side and that's how we know what the number is. It is exactly the same in binary, which uses base $2$ and thus digits can only be $0,1$, and 
the same works for another common base you find in computing which is base 16. In this case though, instead of using 
$10,11,12,13,14,15$ when writing hex digits which would be confusing we use digits $0,...,9,A,..,F$.

Note when we refer to "decimal" outside of discussing decimal systems, we just mean base 10. 

| Name        | Base | Digits        |
| ----------  | ---- | -------       |
| Binary      | 2    | 0,1           |
| Decimal     | 10   | 0,...,9       |
| Hexadecimal | 16   | 0,..,9,A,..,F |

You will usually see addresses (we will get to that) written in hexadecimal. 

### Converting integers

In the notes, I will try to write a subscript $x_{b}$ to denote that $x$ is in binary, and $x_{10}$ to denote $x$ is in decimal.

Using this we can encode numbers in base two, so $0$ becomes $0$, 1 becomes $1$, 2 becomes $10$, 3 becomes $11$, and so on. 

Let's convert $11011$ to decimal. First, write out its expanded form, and then compute the sum.

$$11011_b = 1\cdot 2^4 + 1\cdot 2^3 + 0\cdot 2^2 + 1\cdot 2^1 + 1\cdot 2^0 = 16 + 8 + 2 + 1 = 27_{10}$$

Let's convert $45$ to binary. Going backwards is more tricky, but there is a simple process to it. Just keep dividing by $2$ until you hit $0$ and keep track of each division's remainder. 

$45/2 = 22$ with remainder $1$ . 
$22/2 = 11$ with remainder $0$ .
$11/2 = 5$ with remainder $1$ .
$5/2 = 2$ with remainder $1$. 
$2/2 = 1$ with remainder $0$ and 
$1/2 = 0$ with remainder $1$ . 

So in order, our remainders are $1,0,1,1,0,1$, now to get the number in binary, reverse the order and write out the ones and zeroes, so $45$ in binary is $101101$, sanity check let's double check we did it right, we have ones in the $0, 2, 3, 5$ th places so we should have 
$$101101_b = 2^5 + 2^3 + 2^2 + 2^0 = 32 + 8 + 4 + 1 = 45_{10},$$
as expected. Good! 

Next steps will be 2s complement, this is how we "encode" all integers (including negative ones) into binary, but we don't need to worry about that now. 

## Introduction to Computer Storage and C/C++

### Encodings

Computers work entirely on sequences of ones and zeros (binary), since for a computer to run it requires electricity and the only way of carrying information via electrical signals is either to have a signal be on or off. So internally, your computer is shooting out rapid fire on/off signals which your processor is reading, decoding and executing. 

> A single binary digit (0 or 1) is called a `bit`, and 8 bits is called a `byte`.

The key word is "decoding," because inherently, ones and zeroes mean absolutely nothing, but like above, once we put a meaning onto something like "101101" and we say it's a positive integer, then we can decode it into the number "45". This works with all kinds of data, like text files, applications, etc...

That's all you need to know about encoding/decoding right now, just know that specific computers encode and decode binary in order to work, and different programming languages figure out the best way to turn a program you, the programmer, writes, into the appropriate binary to be executed by the computer.

### C and C++ 

When learning C++, you will notice right away that it looks different than languages like Python. The programming language C++ comes from an even older language C, which was invented in the 70s. At this time, computers were very stupid and very limited with memory, and because of this, the programmer's themselves had to know everything the computer was doing in order for their code to work efficiently. The best way of doing this was to add "types," or sometimes they are called "primitives." 

These are very simple objects which a programmer can use in order to do whatever it is they need. In C++, we will use the following types:


| Type        | Size | Keyword in C++ |
| ----------  | ---- | -------------- |
| Integer     | 32   | `int`          |
| Decimal     | 32   | `float`        |
| Letters     | 8    | `char`         |
| Booleans    | 1    | `char`         |
| "Strings"   | N/A  | `std::string`  |

The sizes are in bits. So we automatically use 32 bits for any integers you use in C++, right away you'll notice you can't write any integers bigger than your size will allow, but we don't need to worry about that now. 

## Installation and Hello World

### Installing Command Line Tools and IDE

The best way to familiarize yourself with C++ is to start writing simple programs. So, to install on a Mac follow the tutorial here.

https://www.freecodecamp.org/news/install-xcode-command-line-tools/

Then we want to be programming in VSCode (I think it's pretty and it's also lightweight and easy to use), so go download that here: 

https://code.visualstudio.com/download

VSCode is an "Integrated Development Environment" which is just a fancy term for "Microsoft Word for Programmers" with a few perks. But it's nice to write code in a specific application instead on in Google Docs or something... 

### Testing Installation

Once you've installed as above, open a Terminal (I can use Shift+Command to open Spotlight Search and then type in "Terminal") and then just type in 

> `clang++ --version`
> ```
Homebrew clang version 12.0.1
Target: x86_64-apple-darwin20.4.0
Thread model: posix
InstalledDir: /usr/local/opt/llvm@12/bin```