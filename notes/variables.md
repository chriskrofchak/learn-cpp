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