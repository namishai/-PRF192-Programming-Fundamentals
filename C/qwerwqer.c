#include <stdio.h>
int main(){
	int n=5;
	int tong=0;
	int mangA[30];
	for (int i=0;i<n;i++){
		printf ("\nA[%d]=", i); scanf("%d", &mangA[i]);
	}
	for (int i = 0 ; i < n;i++ ){
		printf("%d ", mangA[i]);
	}
	for (int i=0; i<n; i++)
		if (mangA[i]%2==0) 
		tong +=mangA[i];
		printf("\nTong la: %d",tong);	
}
