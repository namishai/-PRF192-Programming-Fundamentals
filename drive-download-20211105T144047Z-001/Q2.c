#include <stdio.h>

long long factorial(long long n)
{
	if (n == 1)	
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%lld", factorial(n + 1));
}
