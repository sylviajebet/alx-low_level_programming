#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Program to generate random valid passwords
 *Return: 0 for success
 *
 */

int main(void)
{
	int pass, sum = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (sum < 2772)
	{
		pass = (rand() % 128);
		if ((sum + pass) > 2772)
			break;
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);

	return (0);
}
