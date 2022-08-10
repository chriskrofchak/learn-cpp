# Functions

A function is simply a named procedure which takes arguments, executes a sequence of steps and optionally can return a value. In C++ functions can have what are known as "side-effects". 

In a math "function", there is simply an input and an output, nothing else happens. Namely $f(x,y) = 3x+2y$, the same input will always output the same thing. If a function has NO side effects, we call this a pure function. Note, "printing" or any kind of I/O (so std::cout and std::cin) is considered a side effect. Let's look at some example implementations of $f$ in C++.  

```cpp 
// good, clean and concise, no side effects, easy to debug
int pure_f(int x, int y) {
    return 3*x + 2*y;
}

// not so bad, prints result, helpful for debugging
int impure_f(int x, int y) {
    int res = 3*x + 2*y;
    std::cout << "f(" << ", " << ") produces " << res << std::endl;
    return res;
}

// very, very, very bad
// this is also not pure, because we are "mutating" (changing) the values of int*x and int*y
// so there is a "side effect"
int very_impure_f(int *x, int *y) {
    *x *= 3;
    *y *= 2;
    return *x + *y;
}
```

### Passing parameters (call conventions)

Three ways we will focus on: "pass by value", "pass by reference" and "pass by const reference". All of these changes are expressed in how we WRITE our function, it will look the same from the point of view of the caller, so if you're in main and you call `foo(x,y)` you will call this for each of the three ways of calling a function.

#### Pass by Value
Example: `foo(int a, int b)`. Copies values on the stack, the function uses a copy of the original variables passed to the function. This means original variables are not mutated, but this can waste a lot of memory if a) the objects you pass to functions start increasing in size and b) if you're calling a lot of functions (have a deep stack-frame).

#### Pass by Reference
Example: `foo(int& a, int& b)`. The hint there is with the `&` which we know is the "address of" operator, so even though we are not using an address (the variable is NOT a POINTER (this confuses a lot of people learning C++ don't worry!)), we are passed a reference (under the hood it is a pointer) to the original variable, so any changes you make to `a` in `foo` will be reflected in the original variable you pass to the function. Example,

```cpp
int absolute_difference(int& a, int &b) {
    a -= b; // uh oh...
    return a < 0 ? -1*a : a; // if a < 0 return negative, else return a which must be >=0
}

int main() {
    int x = 30;
    int b = 46;
    // see we do not CALL this function differently
    std::cout << absolute_difference(x,b) << std::endl; // outputs 16 as desired
    std::cout << x << std::endl; // outputs -16... 
}
```

#### Pass by const reference

Example `foo(const int &a, const int &b)`. Same under the hood as passing by reference but gives you compile time checking to make sure you are not setting your parameters to anything in the function (makes sure you are not changing anything). So our `absolute_difference` function above would not even compile if you added the const! 

### Enforcing "pure" functions

So in "functional programming" languages (like Haskell, Ocaml, Lisp, Racket, etc...) all functions must be pure, they only allow I/O from a main function which is the only function allowed to be impure, but C++ is NOT a functional programming language and so we don't care much about "pure functions" at all. BUT, the thought is good and make sure that when writing large programs all helper functions that don't need to have side effects, don't have them, this will save a big headache down the road.

A good way to enforce this is as we saw with passing "const reference" parameters. We don't copy the parameter on the stack, so we don't waste memory, but we don't actually change the parameters we pass either. 

Of course different passing conventions will make sense in different scenarios. Try and think of an ideal scenario for each!


## Recursion 

A "recursive" function is simply a function which calls itself. If something is "recursively defined" this means the same thing, it is defined in terms of itself! Many structures and mathematical objects (and objects in the real world) can be defined recursively, which makes it very easy to work on them. For example, the Fibonacci sequence is defined as 1 for the first and second element in the sequence, and as $fib(n-1) + f(n-2)$ for $n\geq 3$. We will assume the first element is the 0th element (we index by 0 a lot in computer science). Then a recursive C++ function to compute the Fibonacci sequence is as follows:

```cpp
int fib(int n) {
    if (n < 0) {
        std::cout << "Are you smoking crack? There's no negatively indexed Fibonacci numbers";
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    // note we checked < 0 and ==0 or == 1
    // so if we reach this point in the function
    // n must be >= 2.
    // else 
    return fib(n-1) + fib(n - 2);
}
```

When we learn a bit more about algorithms we'll see how horrendously slow this function is at calculating a Fibonacci number... Try inputting $n = 10000$ and see your computer stall! LOL. 


## Problems

1. Given a sequence of integers input by the user, output the minimum.
2. Given a sequence of integers input by the user, output the product. (Small change from (1).)
3. Is the Fibonacci function shown above pure? Can you make it pure? (If you can, return -1 for an error, otherwise return the correct number.) (Challenge: can you call it using const reference?)
4. Let $f(0,0) = 1$, let $f(0,n) = f(n, 0) = 0$ when $n > 0$ and let $f(n+1, k) = n*f(n,k)+f(n,k-1)$. Given $n,k\geq 0$ compute $f(n,k)$ using a recursive function.
    * Is your function pure? If not, can you make it a pure function? 
5. Implement (2) but do not use a `while` loop, you should use recursion.
6. Given a sequence of integers input by the user, print them one per line in REVERSE order, and only use recursion for this.

[[PREV NOTES](./03_stdin.md)] <!-- [[NEXT NOTES](./05_pointers.md)] -->

