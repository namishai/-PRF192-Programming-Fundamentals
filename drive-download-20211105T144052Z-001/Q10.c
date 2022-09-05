#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i;
	scanf("%d", &n);
	int k = 1;
	if(n < 2)
		k = 0;
	for(i = 2; i < n;i++)
	{
		if(n % i == 0)
			k = 0;	
	}	
	
	
	
	
	
	 
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(k == 0)
		printf("Not Prime");
	else
		printf("Prime");
	

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
