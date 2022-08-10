# Control Flow 

## Conditions and booleans in C++

So in order to check different things, you need to know how to write logical statements. For example "x is 2 and y is 3" or "x is at most 3 and y is not 4". I will show you logical "or", logical "and" and how to use comparators.

| Meaning              | Syntax   |
| -------------------- | -------- |
| `a` greater than `b` | `a > b`  |
| `a` greater than `b` | `a < b`  |      
| `a` at most `b`      | `a <= b` |
| `a` at least `b`     | `a >= b` |
| `a` is equal to `b`  | `a == b` |
| `a` not equal to `b` | `a != b` |
| `X` is true and `Y` is true | `X && Y` | 
| `X` is false | `!X` | 
| `X` is true or `Y` is true | `X || Y` | 

Some examples 

```cpp
int x = 2; int y = 4; int b = 10; bool p = false;
p // evals to false
!p // evals to true
!p && x == 2 // true
x <= y // true
```

## Condition execution "short circuiting"

For a statement `p || q` to be true only one of `p` or `q` needs to be true, because of this if `p` is true, C++ will stop evaluating the clause and return `true`. This is the same with `p && q` if `p` is `false` then C++ stops evaluating the clause and returns `false`. 

This is useful if you are checking things in order where if one fails you don't want to check the later clauses, we'll learn about this when we touch on pointers.

## `If` statements 

An `if` statement is what it sounds like, if some condition is true the code block will execute, then there are options to chain `if` conditions with `else if` and supply an `else` clause for if all conditions before it are false. Write one in the following way

```cpp
int x = 2;
if (x == 2) {
    std::cout << "x is two!" << std::endl;
}
```

### `if`, `else if`, `else`

Ignore the function syntax, we'll touch on that next. Consider the `if`/`else if` statements. We can chain conditions so that we can check multiple buckets of possibilities in order, here is an example

```cpp
int tax(int a) {
    // need to decide size of a to decide tax
    if (a < 10) {
        return 0;
    }
    else if (10 <= a && a < 20) {
        return 5;
    }
    else {
        return 15;
    }
}
```

### Recall scope.

Let's look at our tax example again.

```cpp
int tax(int a) {
    // need to decide size of a to decide tax
    if (a < 10) {
        int tax = 0;
        return tax;
    }
    else if (10 <= a && a < 20) {
        return tax + 5; // this will throw an error
    }
    else {
        return 15;
    }
}
```

I think you get the point so we'll move on! 

### Ternary operator

Noticing that a lot of control-flow might have the following form 

```cpp
int x;
if (condition) {
    x = SOMETHING;
} else {
    x = ELSE;
}
```

C++ and many other languages have a "ternary" operator which looks like this 

```cpp
int x = condition ? SOMETHING : ELSE;
// to help remember its:
int x = condition ? val_if_true : val_if_false ; 
```

which sets `x` to `SOMETHING` if `condition` is true and `ELSE` otherwise. This is nice and easy to read, so for example 

```cpp
bool b = true;
int x = b ? 10 : 5;
```

then in one line you know `x` is `10` vs having to look through curly brackets to figure out what you set `x` to.

## `For` loops

Sometimes we want to do a number of things and we don't want to program them all by hand (namely copy and paste), for example 
```cpp
std::cout << 1 << std::endl;
std::cout << 2 << std::endl;
std::cout << 3 << std::endl;
```
what if we wanted all numbers up to one hundred? 

So, we can use the following syntax 

```cpp 
for (int i = 0; i < 100; i++) {
    std::cout << i << std::endl;
}
```

what this does is it initializes a variable `int i` for inside the for loop (so `i` won't work outside the for loop, it is out of scope!) and then will check if `i < 100`, if it is, it will execute the body of the for loop, and then at the end of the body of the for loop it will execute `i++`, so it will increment `i` and do it again. This will print numbers 0,...,99. 

In general for loop syntax is 

```cpp
for (DECLARE VARIABLE; CHECK CONDITION; OPERATION) {
    BODY
}
```

Declare your for loop VARIABLE, each time it will check CONDITION and at the end of the BODY each time it will execute OPERATION once. 

## `While` loops

While loops are syntactically easier than for loops (just one condition), 
but are a bit riskier. A while loop has the following syntax 

```cpp 
while (CONDITION) {
    BODY
}
AFTER
```

so while the CONDITION is true, the BODY will execute as normal, then repeat, and so on. Once the condition is false, the program moves on to the AFTER section.

If you want an infinite loop (something that never stops), then you can do 

```cpp
while (true) {
    BODY
}
``` 

and BODY will execute over and over and never stop!! The problem with while loops is exactly this, when writing large programs sometimes we don't know that we have written a condition is always true, then we're left wondering why we have an infinite loop...


## Examples 

```cpp
int x = 8;
int y = 11;

int z = (x <= y) ? (y % x == 3 ? 1 : 3) : 2;
```
What is the value of `z`? 
What values should you change `x` to if I want `z` to be the other two values? (Give an `x` value for each other `z` value.)

```cpp
int x = 2;
for (int i = 0; i < 50; i++) {
    if (i % x == 0) {
        std::cout << i << std::endl;
    }
}
```
What does the above example do? 

```cpp
int x = 100;
int n = 0;
while (x > 0) {
    x /= 2;
    n++;
}
```
Does the above while loop terminate? If so, what is the value of $n$ at the end of the while loop? 

[[PREV NOTES](./02_variables.md)]
[[NEXT NOTES](./03_stdin.md)]