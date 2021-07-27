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
	char modifiers[3] = {'c', 's', '\0'};

	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (val_mod(modifiers, format[i + 1]))
			{
				totalchars += caseselect(format[i + 1], list);
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == '%')
			{
				totalchars += _putchar('%');
				i++;
				continue;
			}
			else
			{
				totalchars += _putchar('%');
			}
		}

		else
		{
			totalchars += (_putchar(format[i]));
		}
	}
	va_end(list);
	return (totalchars);
}
