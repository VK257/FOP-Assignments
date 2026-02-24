#include <stdio.h>

int fact_1 (int n)
{
	long long f = 1;
	for (int i = 1; i <= n; i++)
	{
		f = f * i;
	}
	
	return f;
}

int fact_2 (int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return (n * fact_2 (n - 1));
	}
}

int main()
{
	printf("\nEnter a number\n");
	int n = 0;
	scanf("%d", &n);
	
	if (n < 0)
	{
		printf("\nFactorial of Negative Number is Invalid\n");
	}
	else
	{
		printf("\nFactorial by non-recursive function = %d\n", fact_1(n));
		printf("\nFactorial by recursive function = %d\n", fact_2(n));
	}
	
	return 0;
}