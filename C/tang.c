
#include<stdio.h>
#include<math.h>
#include<conio.h>

void NhapMang (int A[100], int n){	
	for (int i = 0; i < n; i++){
		printf ("\nNhap vao A[%d]:", i);
		scanf ("%d", &A[i]);
	}
}

void XuatMang (int A[100], int n){
	printf ("\n");
	for (int i = 0; i < n; i++){
		printf ("%4d", A[i]);
	}
}
int timMax (int A[100], int n){
	printf("\nday so tu lon den be la :");
	int max = A[0];
	for (int i = 0; i < n; i++){
		int vt=0;
		int tmp;
		for (int j = 0; j < n-i; j++) {
			if (max < A[j]){
			max = A[j];
			vt=j;
			}
		}
	tmp=A[n-i-1];
	A[n-i-1]= A[vt];
	A[vt]=tmp;
	printf ("%d", tmp);
	}
} 

int main(){
	int n=0; 
	int A[100];
	printf ("So phan tu trong mang la :");scanf ("%d", &n);
	NhapMang (A,n);
	printf ("Day so vua nhap:",n);
	XuatMang (A,n);
	timMax (A,n);
}
