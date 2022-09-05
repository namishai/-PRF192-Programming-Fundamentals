#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int arr[100];
	int i;
	scanf("%d", &n);
	int count = 0;
	for(i = 0; i <n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n;i++)
	{
		if(arr[i] % 2 == 0)
		{
			count++;
		}
	}
	for(i = 0; i < n;i++)
	{
		if(arr[i] % 2 == 0)
		{
			if(count > 1)
			{
				printf("%d\n", arr[i] * arr[i]);
				count--;
			}
			else
				printf("%d", arr[i] * arr[i]);
		}
	}
}
