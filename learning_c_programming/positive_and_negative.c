#include <stdio.h>

/**
 * main - This program takes input from the user and prints 
 * based on positive and negative.
 *
 * Return: 0
 */
int main()
{
	while(1)
	{
		int number;
		printf("Enter a number: ");
		scanf("%d", &number);
	
		if (number < 0 && number % 2 != 0)
	{
		printf("%d", number);
	}
		else if
			(number >= 0)
		{
			printf("Positive Value");
			break;
		}
		else
		{
			printf("Negative Even\n");
			continue;
		}
	
	return (0);
	}
}
