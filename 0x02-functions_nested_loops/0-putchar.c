#include <main.h>
#include <_putchar.c>

/**
 * main:  program that prints _putchar
 *
 * description: to write a program that prints _putchar
 *
 * Return: (0) Always success
 *
 */


int main(void)
{
	char index[10] = "_putchar"
	int i = 0;


	for (i = 0; i < 9; i++)

	{
		_putchar(index[i]);

	}
	
	_putchar('n');


	return (0);
}
