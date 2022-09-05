#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Nhap vao so nguyen duong n va n so nguyen. Tim so phan tu duoc lap trong mang
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n;
  	int arr[1000], b[1000] = {0}, c[1000] = {0};// Khoi tao 3 mang so nguyen
  	int i;
  	scanf("%d", &n);//So phan tu cua mnag
  	for(i = 0; i < n;i++)
  	{
  		scanf("%d", &arr[i]);//Nhap cac phan tu cua mang	
	}
	for(i = 0; i < n;i++)
	{
		if(arr[i] > 0)
			b[arr[i]]++;//Tra ve so cac phan tu lon hon 0 trong arr
		if(arr[i] < 0)
			c[-arr[i]]++;//Tra ve so phan tu nho hon 0 trong arr
	}
	int sum  = 0;
	//Vong lap tra ve so cac phan tu duoc lap trong mang
	for(i = 0; i < 1000;i++)
	{
		if(b[i] > 1)
			sum++;
		if(c[i] > 1)
			sum++;
	}
	
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%d", sum);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
