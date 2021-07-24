#include <stdio.h>
#include <holberton.h>

void _printf(char *sentence, ...);

/**
 * Output should look like just like what the printf output would look like.
 * for task 0 we just need to take into account %c and %s format format modifiers
 */
int main(void)
{
        _printf("Hi my name is %s and I am %i years old");
}

void _printf(char *sentence, ...)
{
	//parse through string, and print the proper case after
	//every % it encounters
	int i;
	va_list list;

	va_start(list, format);
	//parse through format and check if we encounter the escape character %
	for (counter = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			caseselect(format[i + 1], list);
			i++;
		}
		else
		{
			_putchar(format[idx]);
		}
	}

	va_end(list);
	
	
}

