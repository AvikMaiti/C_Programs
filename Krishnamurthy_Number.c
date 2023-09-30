// Check if a number is a Krishnamurthy Number or not
#include <stdio.h>
// user defined function for factorial
int fact(int a)
{
	return (a == 0) ? 1 : a * fact(a - 1);
}

// Main function
void main()
{
	int n, l, save, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	save = n;
	while (n > 0)
	{
		l = n % 10;
		n /= 10;
		sum += fact(l);
	}
	if (save == sum)
		printf("This is a krishnamurti Number");
	else
		printf("This is not a krishnamurti Number");
}
