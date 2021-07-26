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
			totalchars += caseselect(format[i + 1], list);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else
		{
			_putchar(format[i]);
			totalchars++;
		}
	}
	va_end(list);
	return (totalchars);
}
