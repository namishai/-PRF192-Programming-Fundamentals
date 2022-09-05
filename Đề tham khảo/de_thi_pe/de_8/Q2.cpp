#include <stdio.h>
void reverse(int a[], int n){

	
}
int main(){
	int n;
	printf("input n: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
		printf("input arr[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nBefore reverse: \n");
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	reverse(a, n);
	printf("\nAfter reverse: \n");
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	

}

