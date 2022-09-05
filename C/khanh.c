#include "stdio.h"
#include "limits.h"
int a[];
int n, All;

void nhapMang(int x[100], int n){
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}

void xuatMang(int x[100], int n){
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
void delete_x(int n,int a[], int vi_tri){
	int i;
	for(i = vi_tri; i < n-1; i++){
		a[i] = a[i+1];
	}
	n--;
}
void xoaMangTheoYeuCau(int n, int a[], int All){
	int gt;
	int i;
	printf("\nNhap vao gia tri ban muon xoa: ");
	scanf("%d", &gt);
	for(i = 0; i < n; i++){
		if(a[i] == gt){
			delete_x(n, a, i);
		}
	}	
}

int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
	xoaMangTheoYeuCau(a, n,All );
	printf("\n");
	xuatMang(a, n);
}
