#include <stdio.h>
#include <math.h>
#include <conio.h>
int nhapN();//Nhap vao so N> 0
int Fibonacci(int n);//Tim so Fibonancci thu n Fn = Fn-1 + Fn-2
int kiemtraFibonacci(int n);//Kiem tra so n có thuoc day Fibonacci hay khong Neu dung thi no thuoc phan tu thu may
int tongN(int n); // tong cac so tu 1 - N dung de quy
int giaithua(int n);//tinh giai thua N (su dung de quy)
int nguyento(int n); //kiem tra so n co la nguyen to hay khong (ham tra ve 1 neu dung)
int hoanhao(int n); //kiem tra n co la so hoan hao hay khong (ham tra ve 1 neu dung)
void allNguyenTo(int n); // in tat ca cac so nguyen to < n
void allHoanHao(int n); // in tat ca cac so hoan hao < n
void chuyendia(int n , char a, char b, char c);//Bai toan thap Ha Noi
int main(){
 
int chon;
do{	
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

    switch(chon) {
    	case 0 : break;
    	
    	
    	case 1:{                                  
    		int n;
    		printf("\nVui long nhap vao N > 0: ");
    		nhapN(n);
break;
}


case 2:{
   int i,n,d=0;
   printf("\n\tn = ");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
       if(n==Fibonacci(i)){
    d++;                
}
       
   if(d==1) printf("\t%d thuoc day fibonacci",n);
else printf("\t%d khong thuoc day fibonacci",n);
   			if(d==1) 
       			printf("\n\tSo Fibonacci thu %d la: %d", n, kiemtraFibonacci(n));
break;		      
}


case 8:{ 
    long long  n,sum;
    printf("Nhap N: ");
    scanf("%d", &n);
    for ( int number = 1;number  <= n;number++){		    
        sum =0;
        for (int i = 1 ; i <= number;i++)
            if (number%i==0)
                sum+=i;
       				 if (sum/2.0 == number)
            			printf("\n%d ",number);
    }
break;
}


case 5:{
    		   int i, num;
   int result;

   printf("\tNhap mot so bat ky: ");
   scanf("%d", &num);
   			
   result = tongN(num);
   printf("\n\tTong cac so tu 1 toi %d la: %d", num, result);
 
   			   
break;
}


case 3:{
int n;
    		printf("\n\tNhap n = ");
   	 		scanf("%d", &n);
    		if(n < 2){
        	printf("\n\t%d khong phai so nguyen to", n);
        	return 0;
    	}
    		int count = 0;
    		for(int i = 2; i <= sqrt(n); i++){
        	if(n % i == 0){
            count++;
        }
    }
    	if(count == 0){
       		 printf("\n\t%d la so nguyen to", n);
   			 }else{
       				 printf("\n\t%d khong phai so nguyen to", n);
    				}
break;
}


case 6:{
long long i;
printf("\tNhap n: ");
scanf("%d" , &i);
    		printf("\tGia tri giai thua cua %d la %lld\n", i, tinhgiaithua(i));
   			
break;
}


case 7:{
int i, n;
    printf("\tNhap n = ");
    scanf("%d", &n);
    printf("\tTat ca cac so nguyen to nho hon %d la: \n", n);
    if (n >= 2) {
        printf("%d ", 2);}
    for (i = 3; i < n; i+=2) {		        
            printf("%d ", i);}
break;
}


case 4:{
int n;
  		printf("\tNhap n: ");
    	scanf("%d",&n);
    	if((n) )
        	printf("\t%d la so hoan hao.",n);
    			else
        			printf("\t%d khong phai la so hoan hao.",n);
    	
break;
}


case 9 :{
    char a='A', b='B', c='C';
    int n;
    printf("Nhap n:",n);
    scanf("%d", &n);
    chuyendia(n,a,b,c);
break;
}
}}while (chon!=0);
 
return 0;		
}
 
 
 
int nhapN(int n){                                                               //Nhap vao so N> 0
scanf("%d" , &n);
if(n > 0){
printf("\tSo N ban vua nhap la: %d" , n);
}else printf("Vui long nhap N > 0 ");
return n;
 
}
 
 
 
int Fibonacci(int n);															//Tim so Fibonancci thu n Fn = Fn-1 + Fn-2
int Fibonacci(int n){
    if(n==1||n==0||n==2||n==3) return n;//fb la fibonacci
    return Fibonacci(n-2)+Fibonacci(n-1);
}
 
 
 
int kiemtraFibonacci(int n){														//Kiem tra so n có thuoc day Fibonacci hay khong Neu dung thi no thuoc phan tu thu may
    if (n == 1 || n == 2)
        return 1;
    return kiemtraFibonacci(n - 1) + kiemtraFibonacci(n - 2);
}
 
 
 
int tinhgiaithua(unsigned long long i){                                         //tinh giai thua N (su dung de quy)
   if(i <= 1){
    return 1;
   	}
   return i * tinhgiaithua(i - 1);
}
 
 
 
 
int check(int n){																//kiem tra so n co la nguyen to hay khong
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
   		}
    if(sum==n) return 1; 
    return 0;
}
 
 
 
 
void chuyendia(int n , char a, char b, char c){									//Bai toan thap Ha Noi
    	if(n==1){
        	printf("\t%c ====== %c  \n", a , c);
        return;
    	}
    chuyendia(n-1,a,c,b);
    chuyendia(1,a,b,c);
    chuyendia(n-1,b,a,c);
}
 
 
 
 
void allNguyenTo(int n) {                    									// in tat ca cac so nguyen to < n                   
    if (n < 2) {
    
    } 
    int i;
    int can = (int) sqrt(n);
    for (i = 2; i <= can; i++) {
        if (n % i == 0) {
           
        }
    }
   
}
 
 
 
 
int tongN(int num) {															//tong cac so tu 1 - N dung de quy
   int res;
   if (num == 1) {
      return (1);
   } else {
      res = num + tongN(num - 1);
   }
   return (res);
}

