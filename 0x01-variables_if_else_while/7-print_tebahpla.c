#include <stdio.h>
/**
 *main - Entry point
 *Discription: ' prints the lowercase alphabet in reverse'
 *return: Always 0
 */
int main(void)
{
	int n;

	for (n = 122; n>= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

