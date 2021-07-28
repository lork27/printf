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


### Program Testing

```
01:55:10) vagrant@ubuntu-focal:testfiles(main)
  ⟾  cat main.c 
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	char *p = NULL;
	char *string = "jarron";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	printf(string);
	printf("\n");
	_printf(string);
	printf("\n");

	//after finding % the real printf doesn't care about the spaces and whenever it finds the appropiate format modifier it uses it and prints accordinly
	//without printing the spaces
	//printf("me llamo %   s pedro\n", s);
	//_printf("me llamo %  s   Pedro\n", s);

	
	//printf("me llamo %  s pedro1\n");
	//_printf("me llamo %s pedro2\n");
	//edge cases start here

	//_printf("%%\n");
	//printf("%%\n");
	//our _printf doesn't print the second escape character

	//printf("%\n");
	//_printf("%\n");
	//our _printf doesn't print % and newline
	//printf("%$\n");
	//_printf("%$\n");
	
	//printf("%(ayy)\n");
	//_printf("%(ayy)\n");

	//printf("%s", p);
	//putchar('\n');
	//_printf("%s", p);
	//putchar('\n');
	//this one crashed



	//edge cases ends here
	printf("len of our printf: %i len of the real printf: %i\n", len, len2);

	return (0);
}
```
