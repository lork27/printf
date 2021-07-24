#include <stdio.h>
#include "holberton.h"

void _printf(char *sentence, ...);

/**
 * Output should look like just like what the printf output would look like.
 * for task 0 we just need to take into account %c and %s format format modifiers
 */
int main(void)
{
        _printf("Hi my name is %s and I am %i years old");
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

	va_start(list, format);
	//parse through format and check if we encounter the escape character %
	for (counter = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			//after finding the escape character we pass what's next to our
			//caselect function and add +1 to the index variable so it
			//doesn't print the format modifier, s i d c etc.
			//in sum we are storing the return of caseselect to then return it
			sum += caseselect(format[i + 1], list);
			i++;
		}
		else
		{
			//here we just print whatever is on format if it is not an escape character
			_putchar(format[idx]);
			sum++;
		}
	}
	va_end(list);
	return(sum);
	
	
}

