//nhap chuoi 6 so va tinh tong cac phan tu chia het cho 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int arr[6],i;
  	for(i = 0; i < 6;i++)// chay vong lap den 5 thi dung lai
  	{
  		scanf("%d", &arr[i]);// nhap chuoi 
	}
	int sum = 0; //khai bao 1 bien tong
	for(i = 0; i < 6;i++)
	{
		if(arr[i] % 2 == 0)// dieu kien phan tu chia het cho 2 
		{
			sum += arr[i]; //tinh tong neu dieu kien tren thoa man
		}
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