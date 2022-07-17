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

## `If` statements 

An `if` statement is what it sounds like, if some condition is true the code block will execute, then there are options to chain `if` conditions with `else if` and supply an `else` clause for if all conditions before it are false. Write one in the following way

```cpp
int x = 2;
if (x == 2) {
    std::cout << "x is two!" << std::endl;
}
```

note when comparing, we use `==` vs. `=` which is for assignment. This is common in many programming languages (I think it's this way in Python too).

### `if`, `else if`, `else`

```cpp
int tax(int a) {
    // need to decide size of a to decide tax
    if (a < 10) {
        return 0;
    }
    else if (10 <= a >)
}

### Ternary operator

## `For` loops

## `While` loops