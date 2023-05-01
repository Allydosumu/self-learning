#include <stdio.h>

/*
 * main - This program is aim at creating a simple calculator
 * using the operators +, -, * and /.
 *
 * Return: 0
 */
int main()
{
	char operator;
	printf("Choose an operator ['+', '-', '*', '/']: ");
	scanf("%c", &operator);

	double number1, number2;

	printf("Enter first number: ");
	scanf("%lf", &number1);

	printf("Enter second number: ");
	scanf("%lf", &number2);

	double result;

	switch(operator)
	{
		case '+':
		result = number1 + number2;
		break;

		case '-':
		result = number1 - number2;
		break;

		case '*':
		result = number1 * number2;
		break;

		case '/':
		result = number1 / number2;
		break;

		default:
		printf("Enter a valid operator");
	}

	printf("%.2lf", result);

	return (0);
}
