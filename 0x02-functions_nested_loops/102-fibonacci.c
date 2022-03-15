#include <stdio.h>
#include <stdlib.h>
/**
 * main - represent Entry Point to the program
 *
 * Return: 0 to stop the program
 */
int main(void)
{
	double a = 0;
	double b = 1;
	double f;
	int i;
		for (i = 0; i < 50; i++)
	{
		f = a + b;
		if (i != 49)
			printf("%.f, ", f);
		else
			printf("%.f\n", f);
		a = b;
		b = f;
	}
	return (0);
}

