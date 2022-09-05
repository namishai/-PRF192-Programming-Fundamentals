#include <stdio.h>



int main()
{
	int n;
	int arr[100];
	int i;
	scanf("%d", &n);
	for(i = 0; i < n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	int count = 0;
	for(i = 0; i < n;i++)
	{
		if(i % 2 != 1 && arr[i] % 2 == 1)
		{
			count++;
		}
	}
	for(i = 0; i < n;i++)
	{
		if(i % 2 != 1 && arr[i] % 2 == 1)
		{
			if(count > 1)
			{
				printf("%d\n", arr[i]);
				count--;
			}
			else
			{
				printf("%d", arr[i]);
			}
		}
	}
}
