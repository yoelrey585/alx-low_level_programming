#include <stdio.h>

/**
 * main - prints the lower case in reverse
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
