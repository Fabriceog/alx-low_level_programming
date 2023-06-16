#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all the numbers of base 16 in lowercase'
 * return: Always 0
 */
int main(void)
{
	int n;
	int j;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
