
// **********************CAC BAI TOAN VE HINH*****************************************************
//BT32.a. ve hinh vuong dac  
//#include<stdio.h>  
//main()
//{
//	int i,j,n;
//	printf ("input n=");
//	scanf("%d", &n);
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//		printf("* ");
//		}
//		printf("\n");
//	}
//}
//*********************************************
//BT 32.b Ve hinh vuong rong
//#include<stdio.h>  
//main()
//{
//	int i,j,n;
//	printf ("input n=");
//	scanf("%d", &n);
//	for(i=0;i<n;i++)
//	{
//	for(j=0;j<n;j++)
//		{
//	if(i==0||j==0|| i==n-1||j==n-1) printf(" *");
//			//else if(i==n-1||j==n-1) printf(" *");
//	else printf("  ");	 
//		}
//			 printf("\n");
//	}
//}
//*********************************************************************************	
// Bai tap 33: ve tam giac chu
//#include<stdio.h>  
//// #include<conio.h>  
//main()
//{  
//    int kytu=65;  // 65 là ma ASCII cua chu cai A
//    int i,j,k,m;  
//    int n; 
//    printf(" n= ");
//    scanf("%d", &n);
//    
//    for(i=1;i<=n;i++)  
//    {  
//        for(j=n;j>=i;j--)  
//            printf(" ");  
//        for(k=1;k<=i;k++)  
//            printf("%c",kytu++);  
//            kytu--;  
//        for(m=1;m<i;m++)  
//            printf("%c",--kytu);  
//        printf("\n");  
//        kytu=65;  
//    }  
//   			//getch();  
//}  
// BT 34 ve tam giac so tu 1 den 9: ******************************************
//#include<stdio.h>  
//#include<conio.h>  
//main()  
//{  
//	int i,j,k,l,n;  
//	printf("input n= ");  
//	scanf("%d",&n); 
//for(i=1;i<=n;i++){  
//for(j=1;j<=n-i;j++){  
//printf(" ");  
//}  
//for(k=1;k<=i;k++)  {  
//printf("%d",k);  
//}  
//for(l=i-1;l>=1;l--){  
//printf("%d",l);  
//}  
//printf("\n");  
//} 
//}  
//*********************************************

// BT35.a. ve hinh tam giac dac
//#include<stdio.h>   
//main()
//{
//	int i,j,n;
//	printf ("input n=");
//	scanf("%d", &n);
//	for(i=0;i<n;i++)
//	{
//	for(j=0;j<n;j++)
//		{						
// //goc 3
//		if (i>=j) printf(" *");
//		else// co the bo qua
//		printf("  "); // co the bo qua
//		}
// printf("\n");
//	}
//}
//********************************************************
//35.b. bai toan ve tam giac dac bang so 1 
//#include<stdio.h>
//int n,i,j;
//main()
//{
//printf( "Input n= ");
//scanf("%d", &n);
//for (i=0; i<n; i++)
//	{
//	for(j=0;j<n;j++)
//		{
//		if(i+j<n)
//printf("%d", n-i);
//else printf(" ");
//		}
//printf("\n");
//	}
//}
//**************************************
// 35.c. bai toan ve hinh bang so 2
//#include<stdio.h>
//int n,i,j;
//main()
//{
//printf( "Input n= ");
//scanf("%d", &n);
//for (i=0; i<n; i++)
//	{
//	for (j=0; j<n;j++)
//		{	
//		if (i+j<n)
//		printf("%d", n-i);
//		//else printf(" ");// co the bo
//		}
//		printf("\n");
//	}
//}
//  35.d. ve tam giac dac dung cau lenh rut gon, cac goc khac nhau
//	#include<stdio.h>  
//	main()
//{
//	int i,j,n;
//	printf ("input n=");
//	scanf("%d", &n);
//	for(i=0;i<n;i++)
//	{
//	for(j=0;j<n;j++)
//		{
//		//printf("%c ",i<=j?'*':' ');// goc 1	
//		printf("%c ",i>=j?'*':' ');//	goc 2
//		//printf("%c ",i+j<=n-1?'*':' ');//goc 3
//		//printf("%c ",i+j>=n-1?'*':' ');//goc 4
//		}
//	printf("\n");
//	}
//}
//******************************************
// BT 36. bai toan ve tam giac can dac
//#include<stdio.h>
//int n,i,j;
//main()
//{
//printf( "Input n= ");
//scanf("%d", &n);
//for (i=0; i<n; i++)
//	{
//	for (j=0; j<2*n-1;j++)
//		{	
//		if (i+j>=n-1&&i+n>=j+1)
//		printf("*");
//		else printf(" ");// neu bo se ra tam giac vuong
//		}
//		printf("\n");
//	}
//}
//**********************************************************************************

//// 37. ve Tam giac rong, 
//#include<stdio.h>  
//	main()
//{
//	int i,j,n;
//	printf ("input n=");
//	scanf("%d", &n);
//	for(i=0;i<n;i++)
//	{
//	for(j=0;j<n;j++)
//{
//	//goc 1
//		if(i==0) printf(" *");
//		else if(i==j||j==n-1) printf(" *");
//	//	else if(i==j) printf(" *"); hinh tam giac ho)
//		else printf("  ");	
//}
//	printf("\n");
//	}
//}
//	goc 2*********************************
//		if(i==0) printf(" *");	
//		else if(j==0||i+j==n-1) printf(" *");
//		else printf("  ");
//		}
//	printf("\n");
//	}
//}		
	//	*****************************************
	//goc 3
//		if(j==0) printf(" *");
//		else if(i+j==n-1||i==0) printf(" *");
//		else printf("  ");
//		}
//	printf("\n");
//	}
//}
		//****************************************
// goc 4
//		if(i==n-1) printf(" *");
//		else if(i+j==n-1||j==n-1) printf(" *");
//		else printf("  ");
//	**************************************	
//		if(i==n-1) printf(" *");
//		else if(i+j==n-1||j==n-1) printf(" *");
//		else printf("  ");			
//*********************************
//CAC BAI VE HINH TONG HOP CO PHAN TICH
//****************************************************
////hinh chu nhat dac MxN.
//#include <stdio.h>
//int main()
//{
//	int m,n;
//	printf("Input M= ");
//	scanf("%d",&m);
//	printf("Input N= ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=m;i++)
//	{
//		for(j=1;j<=n;j++) 
//		printf("* ");
//		printf("\n");	
//	}
//}
//*************************************************************************
// hinh chu nhat rong MxN.
// cach 1
//#include <stdio.h>
//int main()
//{
//	int m,n;
//	printf("Input M= ");
//	scanf("%d",&m);
//	printf("Input N= ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=m;i++)
//	{
//		for(j=1;j<=n;j++) 
//		if (j==1 || i==1 || i==m || j==n) printf("* "); //  ve sao
//      else printf("  ");
//		printf("\n");	
// 	}
//}
//***************************
// cach 2
//#include <stdio.h>
//int main()
//{
//	int m,n;
//	printf("Input M= ");
//	scanf("%d",&m);
//	printf("Input N= ");
//	scanf("%d",&n);
//	int i,j;
//	for(j=1;j<=n;j++) printf("* ");// in hang dau tien
//	printf("\n");
//	for(i=2;i<=m-1;i++)
//	{
//        printf("* ");// in * dau tien cua hang
//        printf("%*c",2*n-4,' ');// in so luong dau cach
//        printf("* ");// in * cuoi cung cua hang
//        printf("\n");
//	}
//	for(j=1;j<=n;j++) printf("* ");// in hang cuoi cung
//}
//********************************************************************************
// tam giac vuong can dac 
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Input n ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++) // so hang cua tam giac
//	{
//		for(j=1;j<=i;j++)  	printf("* ");  // in ra so luong * cua hang
//		printf("\n");	
//	}
//}
//*********************************************************************
// tam giac vuong can rong
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)// i la so hang cua tam giac
//	{
//		for(j=1;j<=i;j++) 
//		if ((j==1 ||i==n || i==j)) printf("* ");    // cac vi tri cua *
//		else printf("  ");
//		printf("\n");	
//	}
//}
//*******************************************************************
// hinh chu Z co do dai N.
// Hinh(F) hinh chu Z nguoc
//#include <stdio.h>
//int main()
//{
//	int n;	
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++) 
//		if (i==1 || i==n || i==j) // cac vi tri cua *
//		printf("* "); 
//		else printf("  ");
//		printf("\n");	
//	}	
//}
//*****************************************************
// hinh Z xuoi
//Hinh(G)
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++) 
//		if (i==1 || i==n || j==n-i+1) // duong cheo la i+j=n+1
//		printf("* "); 
//		else printf("  ");
//		printf("\n");	
//	}	
//}
//***********************************************************
// Hình dông hô cát
//Hinh(H)
//#include <stdio.h>
//main()
//{
//	int n,i;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//	int j;
//	for(j=1;j<=n;j++)
//	if(i==1||i==n||j==i||j==n-i+1) // them 2 duong cheo
//	printf("* ");
//	else printf("  ");
//	printf("\n");
//	}
//}
//*************************************************************
// hinh chu nhat co hai duong cheo
//Hinh(I)
//#include <stdio.h>
//main()
//{
//	int n,i;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//	int j;
//	for(j=1;j<=n;j++)
//	if(i==1||i==n||j==i||j==n-i+1|| j==1||j==n) // them 2 hang doc
//	printf("* ");
//	else printf("  ");
//	printf("\n");
//	}
//}
//******************************************************************
//Hinh tam giac can nguoc
//Hinh(J)
//#include <stdio.h>
//main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i-1;j++) printf("  "); // so luong dau cach moi hang( 2*(i-1))
//		for(j=i; j<= 2*n-i; j++) printf("* "); // so luong dau * moi hang
//		printf("\n");
//	}
//}
//*********************************************************
// tam giac can xuoi cach 1
//Hinh(K)
//#include <stdio.h>
//main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i;j++) printf("  ");
//		for(j=1; j<= 2*i-1; j++)
//		printf("* "); 
//		printf("\n");
//	}
//}
//***************************************
// cach 2 nguoc lai so voi tam giac can nguoc
//#include <stdio.h>
//main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=n;i>=1;i--){
//		for(j=1;j<=i-1;j++) printf("  "); // so luong dau cach moi hang( 2*(i-1))
//		for(j=i; j<= 2*n-i; j++) printf("* "); // so luong dau * moi hang
//		printf("\n");
//	}
//}
//********************************************************
// 2 tam giac chap lai (hinh L)
//#include <stdio.h>
//main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){ // ve tam giac can xuoi
//		for(j=1;j<=n-i;j++) printf("  ");
//		for(j=1; j<= 2*i-1; j++)
//		printf("* "); 
//		printf("\n");
//	}
//	for(i=2;i<=n;i++){// ve tam giac can nguoc
//		for(j=1;j<=i-1;j++) printf("  ");
//		for(j=i; j<= 2*n-i; j++)
//		printf("* "); 
//		printf("\n");
//	}
//}
//***************************************************************
//Hinh(M) tam giac vuong can so
//#include <stdio.h>
//int main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++) // in ra gia tri cua j thay cho *
//		printf("%d ",j); 
//		printf("\n");	
//	}
//}
//***************************************************
//Hinh(N) tam giac vuon can so voi goc vuong o dinh tren phai
//#include <stdio.h>
//int main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i-1;j++) printf("  ");// in ra khoang trang
//		for (j=1; j<= n-i+1; j++)// in ra gia tri cua j
//		printf("%d ",j); 
//		printf("\n");	
//	}
//}
//********************************************
//Hinh(O) tam giac vuong can so tai goc duoi phai
//#include <stdio.h>
//int main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n-i+1;j++) printf("  ");// in khoang trang
//		for (j=i; j>=1; j--)// in gia tri j nguoc lai
//		printf("%d ",j); 
//		printf("\n");	
//	}
//}
//***************************************
//Hinh(P)
//#include <stdio.h>
//int main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		for (j=n-i+1; j>=1; j--)// in gia tri j nguoc lai
//		printf("%d ",j); 
//		printf("\n");	
//	}
//}
//*************************************
//Hinh(Q) tam giac so can doi xung
//#include <stdio.h>
//main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i;j++) printf("  ");// in ra khoang trang
//		for(j=1; j<=i; j++)	printf("%d ",j); // in j tang dan
//		for(j=i-1; j>=1;j--) printf("%d ",j); // in j giam dan
//		printf("\n");
//	}
//}
//**************************************
//Hinh(R) tam giac so can doi xung nguoc 
//#include <stdio.h>
//main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i-1;j++) printf("  ");// in ra khoang trong
//		for(j=1; j<= n-i+1; j++) printf("%d ",j); // in gia tri j tang dan
//		for(j=n-i; j>= 1; j--) printf("%d ",j); // in gia tri j giam dan
//		printf("\n");
//	}
//}
//********************************
//cach 2 nguoc lai voi bai tam giac can xuoi
//#include <stdio.h>
//main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=n;i>= 1;i--){ // chay nguoc lai so voi bai tam giac can xuoi
//		for(j=1;j<=n-i;j++) printf("  ");// in ra khoang trang
//		for(j=1; j<=i; j++)	printf("%d ",j); // in j tang dan
//		for(j=i-1; j>=1;j--) printf("%d ",j); // in j giam dan
//		printf("\n");
//	}
//}
//*****************************************
// Hinh S 
//#include <stdio.h>
//main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++) printf("%d ",j); // in gia tri j tang dan
//		for(j=1; j<= 2*n-2*i-1; j++) printf("  "); //in ra khoan trang
//		if (i != n){
//		    for(j=i; j>= 1; j--) printf("%d ",j); // in ra gia tri j giam dan
//	    }  
//	    else {
//	    	for(j=i-1; j>= 1; j--) printf("%d ",j);// tranh gia tri trung o hang cuoi
//		}
//		printf("\n");
//	}
//}
//*********************************************
// Hinh T 
//#include <stdio.h>
//main()
//{
//	int n,i,j;
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=n;i>= 1;i--){ // chay nguoc lai so voi bai xuoi
//		for(j=1;j<=i;j++) printf("%d ",j); // in gia tri tang cua j
//		for(j=1; j<= 2*n-2*i-1; j++) printf("  "); // in khoang trong
//		if (i != n){
//		    for(j=i; j>= 1; j--) printf("%d ",j); // in gia tri j giam dan
//	    }  
//	    else {
//	    	for(j=i-1; j>= 1; j--) printf("%d ",j);// in phan giam dan cua dong dau tien
//		}
//		printf("\n");
//	}
//}
//***************************************************
// Hinh U
//#include <stdio.h>
//main()
//{
//	int n,i,j,k;// i chay theo hang doc, j la gia tri cac con so, k la bien chay theo chieu ngang
//	printf("Input N ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for (j=1; j<= n-i; j++) printf("  "); // in khoang trang
//		j= i;// j gia tri trong hang cua tam giac
//		for (k=1; k<=i;k++){ // k la 1/2 hang cua tam giac
//		    if (j < 10) printf("%d ",j); 
//			else printf("%d ",j%10); // in ra cac so co 1 chu so
//			j++;
//		}
//		j= j-2;// de j sau khi in ra giam theo yeu cau
//		for (k=1; k<=i-1;k++){
//		    if (j < 10) printf("%d ",j); 
//			else printf("%d ",j%10); 
//			j--;
//		}
//		printf("\n");
//	}
//}
//**************************************************
//PascalTriangle1:  la Tam giac co moi hang bang he so cua (a+b)^n.
//#include <stdio.h>
//int a[100],b[100];
//int main()
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,j;
//	a[1]=1;
//	printf("  1\n");
//	for(i=2;i<=n;i++)
//	{
//		for(j=1;j<=i;j++) b[j]=a[j]+a[j-1]; // mang a luu gia tri cua dong truoc
//		// mang b luu gia tri cua hang hien tai
//		for(j=1;j<=i;j++) 
//		{
//			printf(" %2d",b[j]);
//			a[j]=b[j]; // mang a luu gia tri hien tai de in hang tiep theo
//		}
//		printf("\n");
//	}
//} 
//**********************************************************
//PascalTriangle2
//#include <stdio.h>
//int a[100],b[100];
//int main()
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	a[1]=1;
//	int i,j;
////for(j=1;j<=n-1;j++) printf("  "); // in dau cach cua dong dau tien
//	
//	printf("   1\n");
//	for(i=2;i<=n;i++)
//	{
////for(j=1;j<=n-i;j++) printf("  "); // in dau cach tao thanh tam giac can
//	
//		for(j=1;j<=i;j++) b[j]=a[j]+a[j-1];
//		for(j=1;j<=i;j++) {printf(" %3d",b[j]);a[j]=b[j];}
//		printf("\n");
//	}
//} 
 //Neu bo dong 396 va 391 thi thanh bai tam giac pascal vuong
//******************************************
//#include <stdio.h>
//main()
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,j;
//	// bai toan goc ben tren
//	for(i=0;i<=n-1;i++)
//	{
//		for(j=1;j<=(n-(i+1));j++) printf("    ");
//		 printf("%d",0);
//		
//		for(j=1;j<=i;j++) printf(" %3d",j);
//		for(j=i-1;j>=0;j--) printf(" %3d",j);
//		printf("\n");
//	}
//	//**************************
//	int mu[30];
//	mu[0]=1;
//	for(i=1;i<=30;i++) mu[i]=mu[i-1]*2; // so mu cua 2
//	for(i=0;i<=n-1;i++) // in ra tam giac co gia tri 2 mu j
//	{
//		for(j=1;j<=(n-(i+1));j++) printf("    ");// so dau cach
//		 printf("%d",mu[0]);
//		
//		for(j=1;j<=i;j++) printf(" %3d",mu[j]); // in ra so tang dan
//		for(j=i-1;j>=0;j--) printf(" %3d",mu[j]); // in ra so giam dan
//		printf("\n");
//	}
//}
//**************************************************
//tam giac pascal ( cach 3) : co gia tri cac hang la to hop cua hang thu i(tu 0 den n) tai cot thu j(tu 0 den i)
// cach khong dung mang
//#include <stdio.h>
//// tinh giai thua
//int giaithua(int n) {
//   int f;   
//   for(f = 1; n > 1; n--)
//      f *= n;
//   return f;
//}
//// tinh gia tri to hop C(i, j) = i!/(j! * (i-j)!)
//int tohop(int n,int r) {
//   return giaithua(n) / ( giaithua(n-r) * giaithua(r) );
//}
//
//int main() {
//   int n, i, j;
//   printf("Input N ");
//   scanf("%d",&n);
//    for(i = 0; i <= n; i++) {
//        for(j = 0; j <= i; j++)
//         printf(" %3d", tohop(i, j));
//
//      printf("\n");
//   }
//   return 0;
//}
//**************************************************
//#include <stdio.h>
//
//int mang(int n) {
//   int f;   
//   for(f = 1; n > 1; n--)
//      f *= n;
//   return f;
//}
//int pascal(int n,int r) {
//   return mang(n) / ( mang(n-r) * mang(r) );
//}
//
//int main() {
//   int n, i, j;
//   printf("Input N ");
//   scanf("%d",&n);
//   for(i = 0; i <= n; i++) {
//      for(j = 0; j <= n-i; j++)
//         printf("  ");
//      for(j = 0; j <= i; j++)
//         printf(" %3d", pascal(i, j));
//      printf("\n");
//   }
//   return 0;
//}
//*******************************************
// Bai so 38: Ve tam giac Fibonaci
//#include<stdio.h>  
//#include<conio.h>  
//main()  
//{  
//    int a=0,b=1,i,c,n,j;  
//    printf("input n= ");  
//    scanf("%d",&n);  
//    for(i=1;i<=n;i++) {  
//        a=0;  
//        b=1;  
//        printf("%3d",b);  
//        for(j=1;j<i;j++)  {  
//            c=a+b;  
//            printf("%3d",c);  
//            a=b;  
//            b=c;  
//        }  
//        printf("\n");  
//    }  
//} 
// ********************************************************
// BT 39 ve tam giac Pascal// xem http://vuontoanblog.blogspot.com/2013/02/fibonacci3.html
//# include <stdio.h>
//int factorial(int n){
//	int f;
//	for (f=1; n>1;n--)
//	f *= n;
//	return f;
//	}
//	int ncr(int n, int r){
//		return factorial(n)/(factorial(n-r) * factorial(r));
//		}
//		int main()
//		{
//			int n,i,j;
//			printf(" input n= ");
//			scanf("%d", &n);
//			printf (" Draw Pascal triangle:\n\n");
//			for (i=0; i<=n; i++){
//				for (j=0; j<n-i; j++)
//				printf("  ");
//for (j=0; j<=i; j++)
//printf (" %3d", ncr(i, j));
//printf("\n");
//}
//return 0;
//}

//***************************

//*********************************************************
//40.Bai toan ve hinh hoa thi bao quanh mot dong chu " chuc mung nam moi"
//#include <stdio.h> 
//void line(); // Khai bao prototype 
//void line()// Ham in 1 dong dau
//{ 
//int i; 
//for(i = 0; i < 14; i++) 
//printf("* "); 
//printf("\n"); 
//} 
//main() 
//{ 
//line(); 
//printf("* Chuc mung nam moi 2020! *\n"); 
//line(); 
//}
// TONG KET 41: cac bai toan ve hinh tong hop
//#include<stdio.h>
//main()
//{
//	int x, h, i, k;
//	printf("nhap do dai canh: ");
//	scanf("%d", &x);
////----------------------------------------------------------		
//    printf("\nhinh a:\n");
//	for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=h; i++) printf("* ");
//		printf("\n");
//	}
////----------------------------------------------------------	
//	printf("\nhinh b\n");
//	for(h=x; h>=1; h--)
//	{
//		for(i=h; i>=1; i--) printf("* ");
//		printf("\n");
//	}
////----------------------------------------------------------
//	printf("\nhinh c\n");
//	for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=x; i++)
//		{
//			if(i>=h) printf("* ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
////----------------------------------------------------------
//	printf("\nhinh d\n");
//	for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=x; i++)
//		{
//			if(i+h>=x+1) printf("* ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
////----------------------------------------------------------	
//	printf("\nhinh e\n");
//	for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=x; i++)
//		{
//			if(h==1 || i==1 || h==x || i==x) printf("* ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
////----------------------------------------------------------	
//	printf("\nhinh f\n");
//	for(h=x; h>=1; h--)
//	{
//		if(h==x || h==1)
//		{
//			for(i=1; i<=x; i++) printf("* ");
//			printf("\n");
//		}
//		else
//		{
//			for(k=x-h; k>=1; k--) printf("  ");
//		    for(i=1; i<=h; i++)
//		    {
//			   if(i==1) printf("* ");
//			   else printf("  ");
//		    }
//		    printf("\n");
//		}
//	}
////----------------------------------------------------------	
//	printf("\nhinh g\n");
//	for(h=1; h<=x; h++)
//	{
//		if(h==x || h==1)
//		{
//			for(i=1; i<=x; i++) printf("* ");
//			printf("\n");
//		}
//		else
//		{
//			for(k=x-h; k>=1; k--) printf("  ");
//		    for(i=1; i<=h; i++)
//		    {
//			    if(i==1 ) printf("* ");
//			    else printf("  ");
//		    }
//		    printf("\n");
//		}
//	}
////---------------------------------------------------------	
//	printf("\nhinh h\n");
//	int x2,h2;
//	if(x%2==0) x2=x/2;
//	else x2=x/2+1;
//	for(h=x2; h>=1; h--)
//	{
//		for(k=x2-h; k>=1; k--) printf("  ");
//		if(x%2==0) h2=h*2;
//	    else h2=h*2-1;
//		for(i=1; i<=h2; i++)
//		{
//			if(h==x2 || i==1 ||i==h2) printf("* ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
//	for(h=2; h<=x2; h++)
//	{
//		for(k=x2-h; k>=1; k--) printf("  ");
//		if(x%2==0) h2=h*2;
//	    else h2=h*2-1;
//		for(i=1; i<=h2; i++)
//		{
//			if(h==x2 || i==1 ||i==h2) printf("* ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
////----------------------------------------------------------	
//	printf("\nhinh i\n");
//	for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=x; i++)
//		{
//			if(h==1 || h==x || i==1 || i==x || i+h==x+1 || i==h) printf("* ");
//			else printf("  ");
//		}
//		printf("\n");
//	}
////----------------------------------------------------------	
//	printf("\nhinh j\n");
//	for(h=x; h>=1; h--)
//	{
//		for(k=x-h; k>=1; k--) printf("  ");
//		for(i=1; i<=h+h-1; i++) printf("* ");
//		printf("\n");
//	}
////----------------------------------------------------------	
//	printf("\nhinh k\n");
//	for(h=1; h<=x; h++)
//	{
//		for(k=x-h; k>=1; k--) printf("  ");
//		for(i=1; i<=h+h-1; i++) printf("* ");
//		printf("\n");
//	}
////----------------------------------------------------------	
//	printf("\nhinh l\n");
//	for(h=1; h<=x; h++) // h: bien theo chieu doc
//	{
//		for(k=x-h; k>=1; k--) printf("  ");// ve khoang trong; k: chay ngang, ve khoang trong
//		for(i=1; i<=h+h-1; i++) printf("* ");// i: phan tu chay ngang , ve cham
//		printf("\n");
//	}
//	for(h=x-1; h>=1; h--)// ve tiep nua duoi
//	{
//		for(k=x-h; k>=1; k--) printf("  ");
//		for(i=1; i<=h+h-1; i++) printf("* ");
//		printf("\n");
//	}
////----------------------------------------------------------
//    printf("\nhinh m\n");
//	for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=h; i++) printf("%d ", i);
//		printf("\n");
//	}
////----------------------------------------------------------
//    printf("\nhinh n\n");
//    for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=x; i++)
//		{
//			if(i>=h) printf("%d ", i-h+1);// gia tri cua phan tu thu i, dong h
//			else printf("  ");
//		}
//		printf("\n");
//	}
////----------------------------------------------------------
//    printf("\nhinh o\n");
//	for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=x; i++)
//		{
//			if(i+h>=x+1) printf("%d ", x-i+1);
//			else printf("  ");
//		}
//		printf("\n");
//	}
////----------------------------------------------------------
//    printf("\nhinh p\n");
//	for(h=x; h>=1; h--)
//	{
//		for(i=h; i>=1; i--) printf("%d ", i);
//		printf("\n");
//	}
////----------------------------------------------------------
//    printf("\nhinh q\n");
//    int var;// var: gia tri so
//	for(h=1; h<=x; h++)// h: bien theo chieu doc
//	{
//		for(k=x-h; k>=1; k--) printf("  ");// ve khoang trong theo chieu ngang
//		for(i=1; i<=h+h-1; i++) // bien theo chieu ngang, ve so
//		{
//			if(i<=h)
//			{
//				var = i;
//				printf("%2d", var);
//			}
//			else 
//			{
//				var--;
//				printf("%2d", var);
//			}
//			
//		}
//		printf("\n");
//	}
////----------------------------------------------------------
//    printf("\nhinh r\n");
//    for(h=x; h>=1; h--)
//	{
//		for(k=x-h; k>=1; k--) printf("  ");
//		for(i=1; i<=h+h-1; i++) 
//		{
//			if(i<=h)
//			{
//				var = i;
//				printf("%2d", var);
//			}
//			else 
//			{
//				var--;
//				printf("%2d", var);
//			}
//		}
//		printf("\n");
//	}
////----------------------------------------------------------
//    printf("\nhinh s\n");
//    for(h=1; h<=x; h++)
//	{
//		for(i=1; i<=x*2; i++)
//		{
//			if(i>=h+1 && i<=x*2-h-1 || i==x*2) printf("  ");// ve khoang trong
//			else 
//			{
//				if(i<=h) printf("%d ", i);
//				else printf("%d ", x*2-i);
//			}
//		}
//		printf("\n");
//	}
////----------------------------------------------------------
//    printf("\nhinh t\n");
//    for(h=x; h>=1; h--)
//	{
//		for(i=1; i<=x*2; i++)
//		{
//			if(i>=h+1 && i<=x*2-h-1 || i==x*2) printf("  ");
//			else 
//			{
//				if(i<=h) printf("%d ", i);
//				else printf("%d ", x*2-i);
//			}
//		}
//		printf("\n");
//	}
////---------------------------------------------------------
//    printf("\nhinh u\n");	
//	for(h=1; h<=x; h++)
//	{
//		var=h-1;// h: chay theo chieu doc, tu tren xuong
//		for(k=x-h; k>=1; k--) printf("  ");// k: ve khoang trong theo dong
//		for(i=1; i<=h+h-1; i++) // i: chay theo chieu ngang
//		{
//			if(i<=h)
//			{
//				var++;
//				if(var>=10) var=var-10; // gia tri var nho hon 10
//				printf("%d", var);
//			}
//			else
//			{
//				var--;
//				if(var<=-1) var=var+10;//
//				printf("%d", var);
//			}
//		}
//		printf("\n");
//	}
//}
