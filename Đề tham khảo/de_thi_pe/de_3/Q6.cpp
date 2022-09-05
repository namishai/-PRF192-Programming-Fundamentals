#include <stdio.h>
int main() {
	int n,i;
	printf("Nhap n: ");
	scanf("%d",&n);


	int a[n];
	for(i=0; i<n; i++) {
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++) {
		printf("%d  ",a[i]);
	}
	//your output here
}

