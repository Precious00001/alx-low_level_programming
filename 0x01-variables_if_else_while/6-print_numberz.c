#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this is main function
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
