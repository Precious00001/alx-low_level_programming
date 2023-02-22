#include "main.h"
/**
 * print_alphabet - prints the alphabets in lower case
 * Return: always 0
 */


void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	_putchar('\n');
}
