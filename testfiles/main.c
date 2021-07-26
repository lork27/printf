#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	char *p = NULL;
	char *string = "jarron";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	printf(string);
	printf("\n");
	_printf(string);
	printf("\n");

	//after finding % the real printf doesn't care about the spaces and whenever it finds the appropiate format modifier it uses it and prints accordinly
	//without printing the spaces
	//printf("me llamo %   s pedro\n", s);
	//_printf("me llamo %  s   Pedro\n", s);

	
	//printf("me llamo %  s pedro1\n");
	//_printf("me llamo %s pedro2\n");
	//edge cases start here

	//_printf("%%\n");
	//printf("%%\n");
	//our _printf doesn't print the second escape character

	//printf("%\n");
	//_printf("%\n");
	//our _printf doesn't print % and newline
	//printf("%$\n");
	//_printf("%$\n");
	
	//printf("%(ayy)\n");
	//_printf("%(ayy)\n");

	//printf("%s", p);
	//putchar('\n');
	//_printf("%s", p);
	//putchar('\n');
	//this one crashed



	//edge cases ends here
	printf("len of our printf: %i len of the real printf: %i\n", len, len2);

	return (0);
}
