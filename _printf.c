#include "holberton.h"
#include <stdio.h>
/**
 *_printf - function that emulates printf behaviour
 *@format: string we pass to print and look for extra argurments
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, totalchars  = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	if (list == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			/**
			 * checks for the % escape caracter and passes what is next to a
			 * function that selects what to do with it
			 */
			totalchars += caseselect(format[i + 1], list);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			/**
			 *if % is the last character of format string don't
			 *pass it to our case selector
			 */
			return (-1);
		}
		else
		{
			/*if not the escape character just print normally*/
			_putchar(format[i]);
			totalchars++;
		}
	}
	va_end(list);
	return (totalchars);
}
