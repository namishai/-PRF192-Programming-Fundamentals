
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
	int max = A[0];
	for (int i = 0; i < n; i++){
		if (max < A[i])
		max = A[i];
	}
	return max;
} 
void timPhanTuKhacNhau(int A[100], int n){
	int b[100];
	for(int i=0; i<n; i++){
		b[i]=1;
	}
	
	for(int i=n-1; i>0; i--){
		if(A[i]!=A[i-1]){
			b[i-1]=b[i]+1;
		}
	}

	int soLuong = timMax(b,n); 
	for(int i=0; i<n; i++){
		if(b[i]==soLuong){
			printf ("\nDay so thao man:");
			for(int j=i; j<soLuong+i; j++)
				printf("%d ", A[j]);
		}
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
	timPhanTuKhacNhau (A,n);
}
