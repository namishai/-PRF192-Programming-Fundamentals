#include <stdio.h>
void removeAt(int a[], int n, int k){

	
}
int main() {
	int n,i;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++) {
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++) {
		printf("%4d ",a[i]);
	}
	//your code here
	
	
	//your output here
	printf("\nMang sau khi xoa tat ca cac gia tri trung nhau: ");
	for(i=0; i<n; i++) {
		printf("%4d ",a[i]);
	}
	
}

