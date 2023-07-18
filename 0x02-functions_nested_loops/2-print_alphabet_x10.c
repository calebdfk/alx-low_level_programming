#include "main.h"

/**
 * print_alphabet_x10 - function that prints ten time lwcse
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

char cl;
int f;
f = 0;
while (f < 10)
{
for (cl = 'a'; cl <= 'z'; cl++)
{
_putchar(cl);
}
_putchar('\n');
f++;
}

}
