#include <stdio.h>

/**
 * main - Write single digit numbers
 *
 * description: Write a program that prints all single digit numbers of base 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 48;

	while(i < 58) 
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
