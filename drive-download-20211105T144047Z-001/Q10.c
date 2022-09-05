#include <stdio.h>
#include <stdbool.h>
int digit(int n)
{
	int digit = 0;
	while(n != 0)
	{
		digit++;
		n /= 10;
	}
	return digit;
}


int main()
{
	int a[7],b[1000] = {0};
	int i;
	for(i = 0; i < 7;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < 7;i++)
	{
		if(digit(a[i]) == 3)
			b[a[i]]++;
			//b[123] = 2
			//b[832] = 2
			//b[111] = 1
	}
	int max = 0;
	for(i = 100; i < 1000 ;i++)
		if(b[i] > max)
			max = b[i];
	for(i = 100; i < 1000;i++)
	{
		if(b[i] == max)
		{
			printf("%d ", i); 
		}
	}
}
