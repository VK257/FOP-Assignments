#include <stdio.h>

int main()
{
	printf("\nEnter a number\n");
	int n = 0;
	scanf("%d", &n);
	
	int temp = n, d = 0, r = 0;
	while (temp != 0)
	{
		d = temp % 10;
		r = r * 10 + d;
		temp = temp / 10;
	}
	
	printf("\nReversed Number = %d\n", r);
	return 0;
}