/* bai so 28
yeu cau nhap mot mnang va chen mot phan tu vao mang  */
#include<stdio.h>
void sapxep(int n,int a[]);
void nhap(int *n,int a[]);
void hien(int n,int a[]);
int kiemtra(int num,int n ,int a[]);
void chen(int x, int n, int a[]);
void nhap(int *n,int a[]){
	int i=0;
	do{
		printf("\nNhap phan tu thu %d ",i+1);
		scanf("%d",&a[i]);
		i++;
	} while (a[i-1]!=0);
	*n=i-1;
}
void hien(int n,int a[]){
	for (int i=0;i<n;i++) printf("%d, ",a[i]);
}
void sapxep(int n , int a[]){
	int j,x;
	for (int i=0;i<n;i++){
		j=i;
		x=a[i];
		while(j>0 && x<a[j-1]){
			a[j]=a[j-1];
			j--;
		}
		a[j]=x;
	}
}
int kiemtra(int num,int n ,int a[]){
	for (int i=0;i<n;i++)
		if (num==a[i]) return i;
	return 0;
};
void chen(int x, int n, int a[]){
	int i,j;
	i=n-1;
	while (i>0 && a[i]>x) i--;
	j=n;
	while (j>i+1) {
		a[j]=a[j-1];
		j--;
	}
	a[j]=x;	
};
int main(){
	int n,num;
	int a[80];
	int vt;
	nhap(&n,a);
	printf("\nCac phan tu vua nhap la:");
	hien(n,a);	
	sapxep(n,a);
	printf("\nMang sau khi sap xep la:");
	hien(n,a);
	printf("\nNhap vao mot so nguyen bat ky:");
	scanf("%d",&num);
	vt=kiemtra(num,n,a);
	if (vt) printf("\n %d da ton tai trong mang",num);
	else printf("\n%d chua co trong mang",num);
	chen(num,n,a);
	n++;
	printf("\nMang sau khi chen them %d la: ",num);
	hien(n,a);
}

