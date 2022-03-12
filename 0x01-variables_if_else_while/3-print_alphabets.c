#include<stdio.h>
/**
 * main - Lanzador
 *
 * Return: Always 0
 */
int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	putchar (A);
	for (A = 'A' ; A <= 'Z'; A++)
	putchar (A);
	putchar ('\n');
	return (0);
}
