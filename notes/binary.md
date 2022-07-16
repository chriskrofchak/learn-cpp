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

## Converting integers

In the notes, I will try to write a subscript $x_{b}$ to denote that $x$ is in binary, and $x_{10}$ to denote $x$ is in decimal.

Using this we can encode numbers in base two, so $0$ becomes $0$, 1 becomes $1$, 2 becomes $10$, 3 becomes $11$, and so on. 

Let's convert $11011$ to decimal. First, write out its expanded form, and then compute the sum.

$$11011_b = 1\cdot 2^4 + 1\cdot 2^3 + 0\cdot 2^2 + 1\cdot 2^1 + 1\cdot 2^0 = 16 + 8 + 2 + 1 = 27_{10}$$

Let's convert $45$ to binary. Going backwards is more tricky, but there is a 

## Other Data Types

