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

	int i;
	char *str;
	char c;

	switch(mod)
	{
		case 's':
		str = va_arg(list, char * );
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
		break;

		case 'c':
		c = va_arg(list, int);
		_putchar(c);
		return (1);
		break;
	}
	va_end(list);
	return (0);
}
