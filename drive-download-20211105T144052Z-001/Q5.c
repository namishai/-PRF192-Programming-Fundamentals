// Tinh tong binh phuong cac so CHAN trong day n phan tu

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n; 
	scanf("%d", &n); // nhap so phan tu n
	int a[100], i, sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]); // nhap gia tri cua tung phan tu trong day
		if (a[i] % 2 == 0) // check phan tu la so chan
		sum += a[i] * a[i]; // tinh tong binh phuong cua phan tu (neu la so chan)
	}

  // Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d", sum);// in ra ket qua

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
