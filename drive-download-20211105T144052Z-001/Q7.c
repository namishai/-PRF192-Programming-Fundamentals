#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Tim so co 2 chu so xuat hien nhieu nhat trong day

int main() {
  	system("cls");
 	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:	
	int i, a[100], b[100], c[100], d[100];
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &a[i]);
		b[i] = 0;
		c[i] = 0;
		d[i] = 1;
	}
	
	int max = 0, k = 0, j;
	for (i = 0; i < 7; i++)
	{
		if (a[i] >= 10 && a[i] <= 99 && b[i] == 0)
		{
			c[k] = a[i];
			for (j = i+1; j < 7; j++)
			{
				if (a[j] == a[i])
				{
					d[k]++;
					b[j] = 1;
				}
			}
			if (max < d[k]) max = d[k];
			k++;
		}
	}
	
	
	
	
	
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	if (k == 0) printf("no two-digit number");
	else
	{
		for (i = 0; i < k; i++)
		{
			if (d[i] == max)
			{
				i == k - 1 ? printf("%d", c[i]) : printf("%d ", c[i]);
				
			}
		}
	}	
	
	
	
	
	
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


