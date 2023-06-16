#include <stdio.h>
/**
 * main - Entry point
 * desccription: 'prints the alphabet in lowercase'
 * return: Aalways 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
