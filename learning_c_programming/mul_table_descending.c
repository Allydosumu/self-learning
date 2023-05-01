#include <stdio.h>

/**
 * main - This program prints out multiplication table
 * of a number in a descending order.
 *
 * Return: 0
 */
int main()
{
	int number;
	printf("Input a number: ");
	scanf("%d", &number);

	int count = 12;
	
	while (count >= 1)
	{
		int result = number * count;
		printf("%d * %d = %d\n", number, count, result);
		count = count - 1;
	}
	return (0);
}

