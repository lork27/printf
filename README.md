# C - printf

## Description

This **printf** function is a simple exact replica of the printf function found in the
**C programming language**. Whatever format specifiers you use in the actual **printf** function
will work in our **printf** function.

**printf** is the C language function to do formated printing.
The same function is also available in **PERL**.
This paper explains how **printf** works,
and how to design the proper formatting specification for any occasion.

This **printf** if successfully compiled and executed, should return the number of characters
printed (excluding the null byre). And if it fails, then the function should return a (-1) upon error
and `"(null)"` if the string argument in NULL.

## Prototype

`int _printf(const char *format, ...)`

- `format` is a character string. `man 3 printf` for more info.
- Returns: the numbers of characters printed(excluding null byte).
- Write output to stdout.

## File explanation
| File | Description |
| ----------- | ----------- |
| \_printf.c | The main file in which the function that emulates **printf** resides. It contains an array to handle the format specifiers and uses conditional statements to find the escape character and if what's next is a format modifier, we pass it to a selector function. |
| case\_select.c | After we find a format specifier in the format string we pass it to a function that uses a switch statement to select which printing function we should call. |


## Format Specifiers
| Function | Description | Format Specifier |
| ----------- | ----------- | ----------- |
| `printchar` | function that prints a single character and returns 1 | `%c` |
| `printstr` | function that prints a string and returns amount of characters printed | `%s` |
| `printnum` | function that prints number with putchar using recursion and returns counter | `%i`, `%d` |
