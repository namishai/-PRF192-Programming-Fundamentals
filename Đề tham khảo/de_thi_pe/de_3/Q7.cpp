#include <stdio.h>
int main(){
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
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] == a[j]){
				 for(int k=j; k<n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
			}
		}
	}
	printf("\n Mang sau khi xoa het cac phan tu trung nhau: ");
	for(int i=0; i<n; i++) {
		printf("%d  ",a[i]);
	}
}

