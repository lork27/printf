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


### Prototype

`int _printf(const char *format, ...)`

- `format` is a character string. `man 3 printf` for more info.
- Returns: the numbers of characters printed(excluding null byte).
- Write output to stdout.


### File explanation
| File | Description |
| ----------- | ----------- |
| [\_printf.c](https://github.com/lork27/printf/blob/main/_printf.c) | The main file in which the function that emulates **printf** resides. It contains an array to handle the format specifiers and uses conditional statements to find the escape character and if what's next is a format modifier, we pass it to a selector function. |
| [case\_select.c](https://github.com/lork27/printf/blob/main/case_select.c) | After we find a format specifier in the format string we pass it to a function that uses a switch statement to select which printing function we should call. |
| [printsfunc.c](https://github.com/lork27/printf/blob/main/printsfunc.c) | This file contains the 3 printing functions and a recreation of **putchar**. It handles strings, characters and integers. |
| [holberton.h](https://github.com/lork27/printf/blob/main/holberton.h) | The header file that contains all of the prototypes and libraries we are using.


### Format Specifiers
| Function | Description | Format Specifier |
| ----------- | ----------- | ----------- |
| `printchar` | function that prints a single character and returns 1 | `%c` |
| `printstr` | function that prints a string and returns amount of characters printed | `%s` |
| `printnum` | function that prints number with putchar using recursion and returns counter | `%i`, `%d` |


### Compilation
The code is compiled in this way
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```


## Program Testing
### main.c file test

We created a main.c file were you can test the program in order to see if the custom \_printf function works.
```
#include "holberton.h"
int main(void)
{
    int len1;
    len1 = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    printf("_printf return:%i", len1);

    len1 = _printf("Should print a single percent sign: %%\n");
    printf("_printf return:%i\n", len1);

    len1 = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    printf("_printf return:%i", len1);

    len1 = _printf("num: %i num: %d\n", 12, 34);

    printf("_printf return:%i\n", len1);
    
    len1 = _printf("num: %i num: %d\n", -1234444, 5678888);

    printf("_printf return:%i\n", len1);

    len1 = _printf("num: %i num: %d\n", INT_MAX, INT_MIN);
    printf("_printf return:%i\n", len1);
    return (0);
}
```
### Output Check

Your output should after compiling the program should look something like what's displayed below.

```
code code code and more code
```

### Bugs

At the moment there is no known bugs for our \_printf program.

### About

All files were created using `ubuntu 20.04`

## Authors

- **Guillermo Lorca** - [lork27](https://github.com/lork27)
- **Andrew Gonzalez** - [Drew-24](https://github.com/Drew-24)
