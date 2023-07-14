#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase, and then in uppercase
 * Return: 0 (Success)
 */

int main(void)
{
	char d;

	char e;

	d = 'a';
	e = 'A';
	while
		(d <= 'z') {
			putchar(d);
			d++;
		}
	while
		(e <= 'Z') {
			putchar(e);
			e++;
		}
	putchar('\n');
	return (0);
}
