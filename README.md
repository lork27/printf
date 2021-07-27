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
| Header | Title |
| Paragraph | Text |

## Format Specifiers
| Function | Description | Format Specifier |
| ----------- | ----------- | ----------- |
| `printchar` | function that prints a single character | `%c` |
|
