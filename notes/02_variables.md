# Making Variables (syntax)

So in general (in C++, syntax is a bit different in C), the syntax for declaring variables is as follows

> `Type name = value;`

So for types like `int, bool, float, char` or even `std::string` you can declare types in the following way.

```cpp
int x = 2;
float f = 2.5;
bool is_that_true = true;
char c = 'c';
```

If you know you need a few integers, let's say a counter and a max value, but you don't know what they are yet, you can declare them but not initialize them with a value. I strongly recommend against this, even in third year some of the worst bugs I have faced is realizing I forgot to initialize a variable to a specific value. 

When you declare a variable, but don't specify its value, note in C++, THE VALUE IS RANDOM GARBAGE.

```cpp
// this is how you declare multiple variables of same type
int x,y; // at this point, x,y, could be ANYTHING
int max, counter, whatever_else;
bool is_true, is_false, is_even, is_odd, is_he_gay; // etc...
```

## Scope 

So in C++ you use curly braces to define "scope," as we saw in our Hello World example, our `main` function was written 

```cpp
int main() {
    // body of function
}
```

but we see that any variables we declare inside `main` will live only inside `main`, this is true for any pair of curly braces. Let's look at another example.

```cpp
int main() {
    int x = 2;
    {
        int y = 3;
    }
    std::cout << y << std::endl; // will not compile, y is out of scope
    std::cout << x << std::endl; // this is fine, x is in same scope
}
```

We will look at control flow next, but note `if`, `else`, `for` and `while` statements have their own scope as well, so if you declare a variable inside of it, be careful that you only use it inside that scope. 

## Arithmetic 

Arithmetic is as it is in any other language and how you would expect it to be in written English. 

```cpp 
// Addition example
int x = 2;
int y = 3;
int z = x+y; // z is 5

// Multiplication example 
int x = 2;
int y = 7;
int z = x*y; // z is 14
```

Now division is more complicated. 
Division with integers in C++ is "integer division" 
which "rounds down" to the nearest integer (towards ?) 
so $3/2 = 1$.

```cpp
int x = 5;
int y = 2;
int z = x/y; // z is 2 because of integer division
```

Note there is no native exponentiation in C++... So you can't do $3^n$ for any $n$, you have to write your own function to do that (which we'll get to)

## Modulo operator

This is a very useful operator! You can think of modulo as the "remainder" operator. So, if I take `5 % 2` I will get `1` back since `5/2` has a remainder of `1`. Some examples 

```cpp 
int x = 6 % 4; // 2 
int y = 35 % 11; // 2 since 35 = 3*11 + 2.
int z = -5 % 3; // -2 weird... i recommend avoiding using negative numbers 
``` 

### Arithmetic assignments

Like in Python and some other languages sometimes we want to do the following 

```cpp
int x = 2;
x = x + 3;
```

So there are specific operators, `+=`, `-=`, `*=`, and `/=` which will add, subtract, multiply and divide, respectively, and then store it in the variable on the LHS. So

```cpp
// +=
x = x + 3; // is the same as
x += 3;
// -= 
x = x - 2; 
x -= 2;
```

and so on.

### Increment and decrement operators

Programmers realized that a very common thing was to do `x += 1` or 
`x -= 1`, namely increment by one or decrement by one. So, they came up with an operator to do just that. So,

```cpp
x += 1; // is the same as
x++;
// and 
x -= 1; // is the same as 
x--; 
```

it adds/subtracts one from `x` and stores the result back in `x`.

WARNING: only ever use this as it's own statement. Do not do something like 

```cpp
x = x++ + x++;
```

this is undefined behaviour, as in even the people who MADE C++ have NO idea what this might actually do. So only EVER increment or decrement as its own statement for readability, namely,

```cpp
// bla bla bla
x++;
int y = 2*x;
// etc ...
```

Great! Now that we can do arithmetic and such, let's move on to control flow.

[[PREV NOTES](./1_binary.md)]
[[NEXT NOTES](./3_flow.md)]