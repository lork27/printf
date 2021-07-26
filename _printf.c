#include "holberton.h"
#include <stdio.h>
/**
 *_printf - function that emulates printf behaviour
 *@format: string we pass to print and look for extra argurments
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	/*sum will keep track of the num characters printed*/
	int i, sum = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	/*va_start takes our declared va_list and starts it after format*/
	va_start(list, format);
	if (list == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && formar[i + 1] != '\0')
		{
			/*checks for the % escape caracter and passes what is next
			 *to a function that selects what to do with it*/
			sum += caseselect(format[i + 1], list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}
	va_end(list);
	return (sum);
}

