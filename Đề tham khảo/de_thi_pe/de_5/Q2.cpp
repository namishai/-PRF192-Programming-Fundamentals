#include <stdio.h>
void reverse(int a[], int n) {
	//2 6 8 12 1 6 3 8 1 9
	//
	int b[6];
	int index = n - 6;
	int j = 0;
	for(int i=n-1; i>=index; i--) {
		b[j] = a[i];
		j++;
	}


	j = 0;
	for(int i=index; i<n; i++) {
		a[i] = b[j];
		j++;
	}
}
int main() {
	int n ;
	printf("input n: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}

	printf("\nBefore reverse: \n");
	for(int i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
	reverse(a,n);
	printf("\n\n");
	printf("\nAfter reverse: \n");
	for(int i=0; i<n; i++) {
		printf("%d ",a[i]);
	}


}

