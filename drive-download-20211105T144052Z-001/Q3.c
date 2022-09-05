#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  
  	float a[5], temp;
	for(int i=0;i<5;i++)
	{
		scanf("%f", &a[i]);
	}
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	for(int i=0; i<5; i++){
		for(int j=i; j<5; j++){
			if(a[i]<a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(int i=0;i<5;i++)
	{
		printf("%f ",a[i]);
	}

  return(0);
}