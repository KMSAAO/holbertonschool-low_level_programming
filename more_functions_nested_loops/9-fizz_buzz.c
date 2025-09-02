#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int num;
	int mul3 = 1;
	int mul5 = 1;


	for (num = 1; num <= 100; num++)
	{
		if (num == 3 * mul3 && num == 5 * mul5)
		{
			printf("FizzBuzz ");
			mul3++;
			mul5++;
		}
		else if (num != 3 * mul3 && num != 5 * mul5)
		{
			printf("%d ", num);
		}
		else if (num == 5 * mul5)
		{
			printf("Buzz ");
			mul5++;
		}
		else if (num == 3 * mul3)
		{
			printf("Fizz ");
			mul3++;
		}
	}
	printf("\n");
	return (0);
}
