#include<stdio.h>   
int main()
{
	int i,j,n;
	printf ("input n=");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		{						
 //goc 3
	if (i>=j) printf(" %d",i+1);
		else// co the bo qua
	printf("  "); // co the bo qua
		}
 printf("\n");
	}
}
