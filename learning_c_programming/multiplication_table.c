#include <stdio.h>

/**
 * main - This program is aimed at creating a multiplication
 * table of 1 - 12 for any number inputted by the user.
 *
 * Return: 0
 */
int main()
{
	int number;
	printf("Input a number: ");
	scanf("%d", &number);

	int count = 1;

	
	while (count <= 12)
	{
		int result = number * count;
		printf("%d * %d = %d\n", number, count, result);
		count = count + 1;
	}
	return (0);
}
