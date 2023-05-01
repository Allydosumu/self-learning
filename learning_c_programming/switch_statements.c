#include <stdio.h>

/**
 * main - I am using the switch statement to create a program
 * that will find the month based on the number inputted.
 * Input values are between 1 and 12.
 *
 * Return: 0
 */
int main()
{
	int number;
	printf("Input a number between 1 to 12: ");
	scanf("%d", &number);

	switch(number)
	{
		case 1:
		printf("January");
		break;

		case 2:
		printf("February");
		break;

		case 3:
                printf("March");
                break;

		case 4:
                printf("April");
                break;

		case 5:
                printf("May");
                break;

		case 6:
                printf("June");
                break;

		case 7:
                printf("July");
                break;

		case 8:
                printf("August");
                break;

		case 9:
                printf("September");
                break;

		case 10:
                printf("October");
                break;

		case 11:
                printf("November");
                break;

		case 12:
                printf("December");
                break;

		default:
		printf("Invalid Number! Please try again");
		break;
	}

	return (0);
}
