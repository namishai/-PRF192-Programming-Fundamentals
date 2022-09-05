//nhap vao n phan tu, sap xep va in ra chung theo thu tu giam dan

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//O day bien temp se la trung gian 
//Vi du nhap mang gom 5 so 9 1 6 4 3
//Nhu chung ta thay 1<6 (arr[i]<arr[j]) nen temp=1 arr[i]=6 arr[j]=1 
//Va gia tri sau khi duoc sap xep la 6 1 thay vi 1 6 nhu ban dau
void selectionSort(int arr[], int n)
{
	int i,j,temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n;
  	int arr[10];
  	scanf("%d", &n);
  	int i;
  	for(i = 0; i < n;i++)
  	{
  		scanf("%d", &arr[i]);
	}
	selectionSort(arr, n);
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(i = 0; i < n;i++)
  	{
  		printf("%d\n", arr[i]);	
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

