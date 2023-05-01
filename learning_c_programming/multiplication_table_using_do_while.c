#include <stdio.h>

int main()
{
	int number;
	printf("Input a number: ");
	scanf("%d", &number);

	int count;
	
	do
	{
		int result = number * count;
		printf("%d * %d = %d\n", number, count, result);
		count = count + 1;
	}
	while (count <= 12);

	return (0);
}
