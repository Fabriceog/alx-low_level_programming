#include <stdio.h>
/**
 *main - Entry point
 *Descption: 'prints the alphabet in lowercase, and then in uppercase'
 *return: Always 0
 */
int main(void)
{
	int n;
	int j;

	for (n = 65; n <= 90; n++)
	{
		putchar(n);
	}
	putchar('\n');
	for (j = 97; j <= 122; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
