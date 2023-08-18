#include <math.h>
#include <stdio.h>
#include <stdbool.h>

bool is_prime(long x)
{
	if (x < 2 || (x != 2 && x % 2 == 0))
		return false;
	else
	{
		int i, limit = (int)sqrt((double)x) + 1;
		for (i = 3; i < limit; i+=2)
		{
			if (x % i == 0)
				return false;
		}
	}
	return true;
}

int main()
{
	long user_input;
	printf("Enter a number to check if it is prime: ");
	scanf("%li", &user_input);
	
	if (is_prime(user_input))
		printf("The number %li is prime.\n", user_input);
	else
		printf("The number %li is not prime.\n", user_input);
	return 0;
}
