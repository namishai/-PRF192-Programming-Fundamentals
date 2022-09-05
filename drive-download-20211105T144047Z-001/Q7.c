#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i,j;
	char arr[100][100] = {' '};
	int mid = n / 2;
	int count = 0;
	for (i = 0; i <n;i++)
	{
		for(j =0 ;j < n;j++)
		{
			if(j <= mid)
			{
				if(i <= mid)
					if((i + j) == mid)
						arr[i][j] = '*';
				if( i > mid)
						arr[i][j] = arr[2 *mid - i][j];
			}
			else
			{
				arr[i][j] = arr[i][2 * mid - j];
			}
		}
	}
	for(i = 0; i < n;i++)
	{
		for(j = 0; j < n;j++)
		{
			printf("%c", arr[i][j]);
		}
		count++;
		if(count < n)	
		{
			printf("\n");
 		}
	}
}
