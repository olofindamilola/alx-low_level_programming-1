#include "main.h"



/**

 * main-print_alphabet_x10 - print alphabet 10 times

 * desscription: print_alphabet_x10 - print alphabet 10 times

 * Return: void

 */



int print_alphabet_x10(void)

{

	int round = 0;

	char letter = 'a';



	while (round < 10)

	{

		letter = 'a';

		while (letter <= 'z')

		{

			_putchar(letter);

			letter++;

		}

		_putchar('\n');



		round++;

	}

}
