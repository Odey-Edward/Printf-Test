#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* main - test fuction
* @Return: always 0
*/
int main(void)
{

	write(1,"From the Standard printf\n", 25);
	printf("Tester number: %s\n", "seven");
	printf("character from standard printf is: %c and %c\n", 'c', 'a');
	printf("percent sign is %%\n");

	printf("..........................................\n");

	write(1, "Home_made _printf\n", 18);
	_printf("Tester is numbeber: %s\n", "seven");
	_printf("character from home_made _printf is: %c and %c\n", 'c', 'a');
	_printf("percent sign is %%\n");

	return (0);
}
