#include <stdio.h>

/**
 * main - This code uses for loop to compute the 
 * sum of only odd numbers fro 1 to 100.
 *
 * Return: 0
 */
int main()
{
	int i;
	int sum = 0;

	for(i = 1; i <= 100; i = i+2)
	{
		sum = sum + i;
	}

	printf("%d", sum);

	return (0);
}
