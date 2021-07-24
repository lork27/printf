#include "holberton.h"
#include <stdio.h>

int _printf(char *sentence, ...);

/**
 * Output should look like just like what the printf output would look like.
 * for task 0 we just need to take into account %c and %s format format modifiers
 */
int main(void)
{
	int checklen;
	//int to store return of our _printf to check we are getting the proper return

	checklen = _printf("Print a string: %s and then a char: %c\n", "it works", 'F');
	_printf("Print a string: %s and then a char: %c\n", "it works", 'F');
	printf("%i\n", checklen);
	return (0);
}

int _printf(char *sentence, ...)
{
	//parse through string, and print the proper case after
	//every % it encounters
	int i, sum = 0;
	va_list list;
	//i is the integer used to parse through format in a loop
	//sum is where we store the returns of all the printing functions to return it
	//list is where we store the variadic arguments

	va_start(list, sentence);
	//parse through format and check if we encounter the escape character %
	for (i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] == '%')
		{
			//after finding the escape character we pass what's next to our
			//caselect function and add +1 to the index variable so it
			//doesn't print the format modifier, s i d c etc.
			//in sum we are storing the return of caseselect to then return it at the end
			sum += caseselect(sentence[i + 1], list);
			i++;
		}
		else
		{
			//here we just print whatever is on format if it is not an escape character
			_putchar(sentence[i]);
			sum++;
		}
	}
	va_end(list);
	return(sum);
	
	
}

