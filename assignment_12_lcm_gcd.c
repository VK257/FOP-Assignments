#include <stdio.h>

int main()
{
	printf("\nEnter two numbers\n");
	int a, b;
	scanf("%d %d", &a, &b);
	
	int n;
	if (a >= b)
	{
		n = a;
	}
	else
	{
		n = b;
	}
	
	int lcm = 0, i = 1, p;
	while (lcm == 0)
	{
		p = a * i;
		
		if (p % b == 0)
		{
			lcm = p;
		}
		else
		{
			i++;
		}
	}
	
	printf("\nLCM = %d\n", lcm);
	
	int gcd = 0;
	for (int i = n; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
			break;
		}
	}
	
	printf("\nGCD = %d\n", gcd);
}
