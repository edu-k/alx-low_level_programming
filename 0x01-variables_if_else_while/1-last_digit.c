#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Lanzador
*
*Return: Always 0
*
*/

int main(void)
{
		int n;
		int lastdigit;
			srand(time(0));
		n = rand() - RAND_MAX / 2;
		lastdigit = n % 10;
		printf("Last digit of %d is %d and is ", n, lastdigit);

		if (lastdigit > 5)
		{
			printf("greater than 5\n"); }

		else if (lastdigit == 0)
		{
			printf("0\n");
		}
		else
			printf("less than 6 and not 0\n");
		return (0);
}
