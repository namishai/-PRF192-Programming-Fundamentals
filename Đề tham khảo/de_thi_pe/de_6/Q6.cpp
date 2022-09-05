#include <stdio.h>
int checkIncrease(int a[], int n){
	
}
int main(){
	int n,i;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++){
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		printf("%4d ",a[i]);
	}
	//your code here
	int check = checkIncrease(a,n);
	if(check == 1){
		printf("\nMang tang dan");
	}else{
		printf("\n-1");
	}

}

