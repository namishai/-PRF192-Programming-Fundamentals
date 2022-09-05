#include <stdio.h>
#include <conio.h> 
#include <windows.h>
#include <math.h> 
int n;
int a=1,b=2,c=3;
int nhapN();//Nhap vao so N> 0
int Fibonacci(int n);//Tim so Fibonancci thu n Fn = Fn-1 + Fn-2
int kiemtraFibonacci(int n);//Kiem tra so n có thuoc day Fibonacci hay khong Neu dung thi no thuoc phan tu thu may
int tongN(int n); // tong cac so tu 1 - N dung de quy
int giaithua(int n);//tinh giai thua N (su dung de quy)
int nguyento(int n); //kiem tra so N co la nguyen to hay khong (ham tra ve 1 neu dung)
int hoanhao(int n); //kiem tra N co la so hoan hao hay khong (ham tra ve 1 neu dung)
void allNguyenTo(int n); // in tat ca cac so nguyen to < N
void allHoanHao(int n); // in tat ca cac so hoan hao < N
void chuyendia(int n,int cot1, int cot2, int cot3);//Bai toan thap Ha Noi
int main(){
	int chon;
	do{	
		system("cls");
		printf("\n\t\t   MENU          \n");
		printf("\n\t1. Nhap so nguyen (N > 0).");
		printf("\n\t2. Kiem tra so N co thuoc day Fibonacci hay khong?");
		printf("\n\t3. Kiem tra N co la so nguyen to hay khong");
		printf("\n\t4. Kiem tra N co la so hoan hao hay khong");
		printf("\n\t5. Tinh tong S = 1 + 2 +.. +N (dung De quy)");
		printf("\n\t6. Tinh Giai thua GT = 1*2*3*..*N (dung De quy)");
		printf("\n\t7. Hien thi cac so nguyen to nho hon N");
		printf("\n\t8. Hien thi cac so Hoan hao nho hon N");	
		printf("\n\t9. Bai toan thap Ha noi.");			
		printf("\n\t0. De thoat.\n");
		printf("\nMoi chon chuc nang (0->8): ");
		scanf("%d",&chon);				
		switch (chon){
			case 1:
				nhapN(n);
			break;
			case 2:
				kiemtraFibonacci(n);
				system("pause");
			break;
			case 3:
				nguyento(n);
				system("pause");
			break;
			case 4:
				hoanhao(n);
				system("pause");
			break;
			case 5:
				printf ("Tinh tong S la: %d", tongN(n));printf ("\n"); 	
				system("pause");			
			break;
			case 6:
				printf ("Giai thua GT la: %d", giaithua(n));printf ("\n"); 
				system("pause");
			break;
			case 7:
				allNguyenTo(n);
				system("pause");
			break;
			case 8:
				allHoanHao(n);
				system("pause");
			break;
			case 9:
				chuyendia(n,a,b,c);
				system("pause");
			break;
		} 
		}while (chon!=0);	
			
		
		return 0;
	}
	
int nhapN() {
	int n = -1;
	while(n <= 0) {
		printf("Nhap so nguyen n > 0: ");
		scanf("%d", &n);
	}
	return n;
}


int Fibonacci(int n){
    if(n==1||n==0||n==2||n==3) 
		return n;
    else 
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int kiemtraFibonacci(int n)
{
	int F1 = 0, F2 = 1,ok = 1;
	for(n; n >= F2; ok++)
	{
		if(n == F2)
		{
			printf("\n%d thuoc day Fibonacci va la phan tu thu %d.\n", n, ok);
			return 0;
		}
		int a= F2;
		F2 = F1 + F2;
		F1 = a;
	}
	printf("\n%d khong thuoc day Fibonacci.", n);
	printf ("\n"); 
}
int tongN(int n){
	if (n==0)
		return n;
	else 
		return n + tongN(n-1);
}

int giaithua(int n){
	if (n==1)
		return n;
	else return n * giaithua(n-1);
}

int nguyento(int n){
	int ok=1;
	for (int j = 2; j <= n/2; j++)
		if (n % j == 0){
			ok = 0;
		}
		if (ok==1){
			printf ("%d la so nguyen to.", n); 
		}
		else {
			printf ("%d khong phai la so nguyen to.", n);
		}
	printf ("\n");
}

int hoanhao(int n){
	int tong = 1;
	for  (int i = 2; i <= n/2; i++){
		if (n % i ==0){
			tong = i+tong;	
		}
	}
		if (tong == n){
			printf ("%d la so hoan hao.", n); 
		} 
		if (tong !=n){
			printf ("%d khong la so hoan hao.", n);
		}
	printf ("\n");
}

void allNguyenTo(int n){
	for (int i=2 ; i <= n; i++){
		int ok = 0;
		for(int j=2; j <= i/2;j++){
			if (i%j==0){
			ok =1;
			}
		}
	if (ok==0)printf ("%d, ",i); 
	}
	printf ("\n");
}

void allHoanHao(int n) {
	for  (int i = 2; i <= n; i++){  
		int tong = 1;
		for  (int j = 2; j <= i/2; j++){
			if (i % j ==0){
				tong = j+tong;	
			}
		}
		if (tong == i)
		printf ("%d, ", i);
	}
	printf ("\n");		
}

void chuyendia(int n,int cot1, int cot2, int cot3){
	if(n==1){
        printf("\t%d---->%d\n",cot1,cot3);
        printf ("\n");
		return;
    }
    chuyendia(n-1,cot1,cot3,cot2);
    chuyendia(1,cot3,cot2,cot3);
    chuyendia(n-1,cot2,cot1,cot3);
}

