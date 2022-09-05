//nhap vao mot danh sach n sinh vien gom cac thong tin
//1. masv int
//2. ho ten String
//3. diem tong ket float
//hien ds sv
//sx theo hoten, masv, diem
//su dung mang song song gom 3 mang song song
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
int nhapN();
void nhap(int n, int masv[100], char hoten[100][31], float diem[100]);
void hien(int n, int masv[100], char hoten[100][31], float diem[100]);
void sortmasv(int n, int masv[100], char hoten[100][31] ,float diem[100], int ord);
void sorthoten(int n, int masv[100], char hoten[100][31], float diem[100], int ord);
void sortdiem(int n, int masv[100], char hoten[100][31], float diem[100], int ord);
void swap(int n, int masv[100],char hoten[100][31], float diem[100],int vt);
void menu();
int checkmasv(int n, int A[],int x);
int main(){
	int n;
	int masv[100];
	float diem[100];
	char hoten[100][31];
	int chon=0,ord;	
	do{
		system("cls");//clear screen
		menu();
		printf("\nLua chon chuc nang:");
		scanf("%d",&chon);
		switch (chon){
			case 1: n=nhapN();	break;
			case 2:	nhap(n,masv,hoten,diem);break;
			case 10:hien(n,masv,hoten,diem);break;
			case 3:	sorthoten(n,masv,hoten,diem,0);break;
			case 4: sortmasv(n,masv,hoten,diem,0);break;
			case 5:	sortdiem(n,masv,hoten,diem,0);break;
			case 6:	sorthoten(n,masv,hoten,diem,1);break;
			case 7:	sortmasv(n,masv,hoten,diem,1);break;
			case 8:	sortdiem(n,masv,hoten,diem,1);break;			
		}
		printf("\nNhan mot phim bat ky de quay tro lai menu");getch();
		//system("pause");
	} while (chon!=0);
	
}
void swap(int i, int masv[100],char hoten[100][31], float diem[100],int vt){
		char max[50]="";
		int tmpma;
		float tmpdiem;
			strcpy(max,hoten[i]); //hoandoi
			strcpy(hoten[i],hoten[vt]);
			strcpy(hoten[vt],max);	
								
			tmpma=masv[i];
			masv[i]=masv[vt];
			masv[vt]=tmpma;
			
			tmpdiem=diem[i];
			diem[i]=diem[vt];
			diem[vt]=tmpdiem;
};
int checkmasv(int n, int A[],int x){
	if (n==0) return -1;
	for (int i = 0 ; i<n;i++)
		if (A[i]==x) return i;//
	return -1;
};
int nhapN(){
	int n;
		printf("\nNhap vao so N = ");scanf("%d",&n);
	return n;
}
void menu(){
		printf("\n=====Menu======");
		printf("\n\t1. Nhap N ");
		printf("\n\t2. Nhap danh sach sv");
		printf("\n\t3. Sap xep theo ho ten (tang dan)");
		printf("\n\t4. Sap xep theo ma sv (tang dan)");
		printf("\n\t5. Sap xep theo Diem (tang dan)");
		printf("\n\t6. Sap xep theo ho ten (giam dan)");
		printf("\n\t7. Sap xep theo ma sv (giam dan)");
		printf("\n\t8. Sap xep theo Diem (giam dan)");
		printf("\n\t9. Them sinh vien");
		printf("\n\t10. Hien thi mang");
		printf("\n\t0. Thoat ct");
}
void nhap(int n, int masv[100], char hoten[100][31] ,float diem[100]){
	int ma;
	for (int i = 0; i< n ; i++){
		printf("\nNhap thong tin cho sinh vien thu %d",i+1);
		fflush(stdin);
		
		
		do{		
			printf("\nmasv:");	scanf("%d",&ma);
			if (checkmasv(i,masv,ma)>=0) printf("\n ma sv da ton tai");		
		}while (checkmasv(i,masv,ma)>=0);
		masv[i]=ma;
		
		
		fflush(stdin);
		printf("\nHo ten:");scanf("%[^\n]s",hoten[i]);	
  		fflush(stdin);					
		printf("\nDiem:");scanf("%f",&diem[i]);		
	}
};
void hien(int n, int masv[100], char hoten[100][31] ,float diem[100]){
	printf("\n\t  Ma sv \t    Ho ten \tDiem");
	for (int i = 0 ; i < n; i++){
		printf("\n\t%5d \t%20s \t%5.3f",masv[i],hoten[i],diem[i]);
	}
	printf("\n");
};

void sorthoten(int n, int masv[100], char hoten[100][31], float diem[100], int ord){
	char max[31];
	int vt;
	int tmpma;
	float tmpdiem;
	//n=n-1;//VI MANG XUAT PHAT TU 0 NEN KO CO PHAN TU  HOTEN[N]
	for (int i = n-1;i>=0;i--){		
		strcpy(max,hoten[0]); //max = hoten[0]
		vt=0;
		for (int j=1;j<=i;j++){
		if (ord==0){			
			if (strcmp(hoten[j],max) > 0 ){
				strcpy(max,hoten[j]);
				vt=j;
			}
		}
		else{ //ord==1
				if (strcmp(hoten[j],max) <0 ){
				strcpy(max,hoten[j]);
				vt=j;
			}
		}
		swap(i,masv,hoten,diem,vt);
		/*	strcpy(max,hoten[i]); //hoandoi
			strcpy(hoten[i],hoten[vt]);
			strcpy(hoten[vt],max);	
								
			tmpma=masv[i];
			masv[i]=masv[vt];
			masv[vt]=tmpma;
			
			tmpdiem=diem[i];
			diem[i]=diem[vt];
			diem[vt]=tmpdiem;*/
		}
	}
};

void sortmasv(int n, int masv[100], char hoten[100][31] ,float diem[100], int ord){
	printf("\nchuong trinh sap xep theo ma sinh vien");
	char max[31];
	int maxmsv;
	int vt;
	int tmpma;
	float tmpdiem;
	//n=n-1;//VI MANG XUAT PHAT TU 0 NEN KO CO PHAN TU  HOTEN[N]
	for (int i = n-1;i>=0;i--){		
	//	strcpy(max,hoten[0]);
		maxmsv=masv[0];
		vt=0;
		for (int j=1;j<=i;j++){
			if (ord==0){			
				if (masv[i] > maxmsv ){
					maxmsv=masv[i];
					vt=j;
				}
			}
			else{ //ord==1
				if (masv[i] < maxmsv ){
					 maxmsv=masv[i];
					vt=j;
				}
			}
		}
		swap(i,masv,hoten,diem,vt);
		/*	strcpy(max,hoten[i]);
			strcpy(hoten[i],hoten[vt]);
			strcpy(hoten[vt],max);	
								
			tmpma=masv[i];
			masv[i]=masv[vt];
			masv[vt]=tmpma;
			
			tmpdiem=diem[i];
			diem[i]=diem[vt];
			diem[vt]=tmpdiem;	*/	
	}
};
void sortdiem(int n, int masv[100], char hoten[100][31], float diem[100], int ord){
	printf("\nChuong trinh con thuc hien sap xep theo diem");
		char max[31];
	int maxdiem;
	int vt;
	int tmpma;
	float tmpdiem;
	//n=n-1;//VI MANG XUAT PHAT TU 0 NEN KO CO PHAN TU  HOTEN[N]
	for (int i = n-1;i>=0;i--){		
	//	strcpy(max,hoten[0]);
		maxdiem=diem[0];
		vt=0;
		for (int j=1;j<=i;j++){
			if (ord==0){			
				if (diem[i]> maxdiem ){
					maxdiem=diem[i];
					vt=j;
				}
			}
			else{ //ord==1
				if (diem[i]< maxdiem ){
					maxdiem=diem[i];
					vt=j;
				}
			}
		}
	swap(i,masv,hoten,diem,vt);
	/*	strcpy(max,hoten[i]);
		strcpy(hoten[i],hoten[vt]);
		strcpy(hoten[vt],max);	
							
		tmpma=masv[i];
		masv[i]=masv[vt];
		masv[vt]=tmpma;
		
		tmpdiem=diem[i];
		diem[i]=diem[vt];
		diem[vt]=tmpdiem;*/
	}
};
