#include "holberton.h"
/**
 * caseselect - function that finds which function we use to print
 * @mod: character after the escape character %
 * @list: variadical arguments from _printf
 * Return: lenght of what is printed
 */
int caseselect(char mod, va_list list)
{
	// this function will check for the test cases
	// and call a function to print accordinly to the desired output
	// Returns the amount of characters printed

	char *str;
	char c;

	switch(mod)
	{
		case 's':
			str = va_arg(list, char *);
			return (printstr(str, list));
			// called a function that prints a string and returns the numbers o characters printed
			break;

		case 'c':
			c = va_arg(list, int);
			return (printchar(c, list));
			// function that prints a character and returns 1
			break;
	}
	va_end(list);
	return (0);
}
