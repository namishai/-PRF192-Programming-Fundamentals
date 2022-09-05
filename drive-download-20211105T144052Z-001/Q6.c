// Tim chuoi o trong chuoi p va thay chuoi o bang dao nguoc cua no

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char o[100], p[100];
	gets(o);
	gets(p);
	int a = strlen(o); //nhap String cha
	int b = strlen(p); //nhap String con
	int i = 0, j, k, dem = 0;
	while (i <= a - b)
	{
		for (j = i; j < i + b; j++)
		{
			if (o[j] == p[j-i]) // tim string con trong string cha
			{
				dem++; 
				if (dem == b) // neu tim thay string con thi: 
				{
					for (k = b - 1; k >= 0; k--)
						o[i + (b-1) - k] = p[k]; //dao nguoc string con trong string cha
					i += b - 1;				
				}
			}
			else dem = 0; 
		}
		i++;
	}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%s", o); // in ra ket qua

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
