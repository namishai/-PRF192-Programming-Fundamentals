#include <stdio.h>
int a[10000];
int n;
void nhapMang(int x[100], int n){
	do {
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", &n);
	}while(n<1);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){
	printf("\n");
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

void inMangConKhacNhau(int x[100], int n){
	int b[100];
	for(int i=0; i<n; i++){
		b[i]=1;
	
}
	for(int i=n-1; i>0; i--){
		if(x[i]!=x[i-1]){
			b[i-1]=b[i]+1;
		}
	}
}
int main(){
	printf("-------\n");
	nhapMang(a, n);
	xuatMang(a, n);
	inMangConKhacNhau(a, n);
}


