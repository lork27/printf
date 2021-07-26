#include "holberton.h"
/**
 * caseselect - function that finds which function we use to print
 * @mod: character after the escape character %
 * @list: variadical arguments from _printf
 * Return: lenght of what is printed
 */

int caseselect(char mod, va_list list)
{
	/**
	*this function will check for the test cases
	*and call a function to print accordinly to the desired output
	*Returns the amount of characters printed
	*/

	switch (mod)
	{
		case 's':
			return (printstr(va_arg(list, char *)));
			/**
			 *calls a function that prints a string and
			 *returns the numbers o characters printed
			 */
		case 'c':
			return (printchar((va_arg(list, int))));
			/*function that prints a character and returns 1 */
		default:
			return (_putchar(mod));
	}
	va_end(list);
	return (0);
}
