#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char b;

	b = 'a';
	while
		(b <= 'z') {
			if ((b != 'q' && b != 'e') && b <= 'z')
				putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
