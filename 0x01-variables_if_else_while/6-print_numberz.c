#include <stdio.h>
/**
 *main - Entry point
 *description: 'prints all single digit numbers of base 10 starting from 0'
 *return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
