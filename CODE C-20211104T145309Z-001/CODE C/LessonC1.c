//                               PHAN I: BAI TAP LAP TRINH C CO BAN
//******************************************************************************************************
//*  Hello */
//#include<stdio.h>
//main()
//{
//printf("Hello C" );
//}
//****************
////bt1. Nhap vao 2 so va tinh tong cua chung  
//#include <stdio.h>  
//main( ) 
//{ 
//int a, b, t; 
//printf("Input a= "); 
//scanf("%d", &a); 
//printf("Input b= "); 
//scanf("%d", &b); 
//t=a+b;
//printf("Sum of %d & %d is %d.\n", a, b, t);  
//}
//***********************************************
// mo rong 1. Chuong trinh nhap vao ban kinh hinh tron. Tinh chu vi va dien tich hình tron (hoi %.2f.\n)
//#include <stdio.h> 
//#define  PI  3.14
//main() 
//{
//	float R,C,S; 
//	printf("Ban kinh hinh tron R= "); 
//	scanf("%f", &R); 
//	C=2*PI*R;
//	S=R*R*PI;
//	printf("Chu vi hinh tron C = %g\n",C ); 
//	printf("Dien tich hinh tron S = %g\n",S ); 
//} 
// ****************ghi chu:************************************************************
////%f ap dung cho kieu float
////%lf ap dung cho double 
////%g  ap dung cho kieu float va double
////%8.2f: danh 8 o nho de viet chu so do, trong do 2 o nho de viet phan thap phan

//,1 o nho de viet dau cham, 5 o nho de viet phan nguyen
////neu do dai phan nguyen nho hon 5 thi no se viet dau cach vao truoc so do,
////con neu do dai so phan nguyen lon hon 5 thi no se tu dong day sang ben phai 
//va luc do, do dai co the lon hon 8

//********************************************************
// mo rong 2: Nhap vao 5 so, tinh gia tri tong, tich va trung binh cong cua chung
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	float n1, n2, n3, n4, n5, s, p, a;
//	printf("Input n1: ");
//	scanf("%f", &n1);
//	printf("Input n2: ");
//	scanf("%f", &n2);
//	printf("Input n3: ");
//	scanf("%f", &n3);
//	printf("Input n4: ");
//	scanf("%f", &n4);
//	printf("Input n5: ");
//	scanf("%f", &n5);
//	s = n1+n2+n3+n4+n5;// thuat toan
//	p = n1*n2*n3*n4*n5;
//	a = (n1+n2+n3+n4+n5)/5;
//	printf("the Sum is  %0.2f\n", s);// in ra
//	printf("the Product is %0.2f\n", p);
//	printf("the Average is %0.2f\n", a);
//	}
//*****************************************************************************
//bt2: nhap vao 2 so, in ra su so sanh cua a va b****************************** 
//#include<stdio.h>
//main()
//{
//float a, b;
//printf("input: a= "); 
//scanf("%f", &a);
//printf("input: b= ");
//scanf("%f", &b);// khai bao
//	if (a>b) printf ("Output: a > b");
//	else if (a==b) printf ("Output: a = b");
//	else printf("Output: a < b");
//}
//***************************************************
// bt3. tim max cua 2 so a va b *********************
//#include<stdio.h>
//main()
//{
//	int    a, b, max;
//	printf("a= ");
//	scanf("%d", &a);
//	printf ("b= ");
//	scanf("%d", &b);// khai bao
//		max = a;
//		if ( b > max )    max = b;
//		printf("\nMax of a and b is %d", max);	 
//}
// cach khac**************************************
//#include<stdio.h>
//main()
//{
//	int    a, b, max;
//	printf("a= ");
//	scanf("%d", &a);
//	printf ("b= ");
//	scanf("%d", &b);
//		if (a>b) printf("Max is a= %d", a);
//		else if (a<b) printf("Max is b= %d", b);
//		else printf("a=b");
//}
//********************************************************OK"

//bt.3 a. nhap 3 so a, b, c, tinh gia tri min, max va tb
//#include<stdio.h>
//main()
//{
//	float a, b, c, min, max, tb;// khai bao
//	printf("a= ");
//	scanf("%f", &a);
//	printf("b= ");
//	scanf("%f", &b);
//	printf("c= ");
//	scanf("%f", &c);
//	tb=(a+b+c)/3; // khai bao
//		if (a>b &&a>c) printf("max= %0.2f\n", a);// thuat toan tim max
//		else if (b>c) printf("max= %0.2f\n", b);
//		else printf("max= %0.2f\n", c);
//		
//		if (a<b &&a<c) printf("min= %0.2f\n", a);// thuat toan tim min
//		else if (b<c) printf("min= %0.2\n", b);
//		else printf("min= %0.2f\n", c);
//			printf("tb= %0.2f\n", tb);
//}
 //*************************************************************
//bt3.b Nhap 3 so a, b, c, tra ve ket qua: a=max, b=min, c=tb (bai chua)
//#include<stdio.h>
//main()
//{
//	float a, b, c, min, max, tb;
////	printf("input a, b, c=");
////	scanf("%f%f%f", &a, &b, &c);
//	printf("input a= ");
//	scanf("%f", &a);
//	printf("input b= ");
//	scanf("%f", &b);
//	printf("input c= ");
//	scanf("%f", &c);// khai bao
//	max = a;
//	if (max<b) max = b;
//	if (max<c) max = c;
//	min=a;
//	if(min > b) min = b;
//	if(min > c) min = c;
//	tb = (a+b+c)/3;
//	a = max;
//	b = min;
//	c = tb;
//	printf("\nOUTPUT\n");
//	printf("a = %0.2f, b = %0.2f, c = %0.2f", a, b, c);
//	}
//**************************************************
//bt3.c Nhap 3 so a, b, c, tra ve ket qua: a=max, b=min, c=tb
//#include<stdio.h>
//main()
//{
//	float a, b, c, min, max, tb;
//	printf("input a= ");
//	scanf("%f", &a);
//	printf("input b= ");
//	scanf("%f", &b);
//	printf("input c= ");
//	scanf("%f", &c);
////	max = a;
////	if (max<b) max = b;
//max=a>b?a:b;// cach viet khac
//max=max>c?max:c;
//	if (max<c) max = c;
//	min=a;
//	if(min > b) min = b;
//	if(min > c) min = c;
//	tb = (a+b+c)/3;
//	a = max;
//	b = min;
//	c = tb;
//	printf("\nOUTPUT\n");
//	printf("a = %0.2f, b = %0.2f, c = %0.2f", a, b, c);
//*******************************************
//BT4.a. khai vao 4 so, tim  gia tri so lon nhat  (dung lenh if else )
//#include<stdio.h> 
//main()
//{
//int a,b,c,d;
//printf ("input a= ");
//scanf("%d", &a);
//printf ("input b= ");
//scanf("%d", &b);
//printf ("input c= ");
//scanf("%d", &c);
//printf ("input d= ");
//scanf("%d", &d);// khai bao
//if (a>b && a>c && a>d) printf ("max:a");// thuat toan
//if (b>a && b>c && b>d) printf ("max:b");
//if (c>b && c>a  &&c>d) printf ("max:c");
//if (d>a && d>b && d>c) printf ("max:d");
//} 
///*****************************************
//BT14.b. Tim max trong 4 so  dung if else if 
//#include<stdio.h>  
//main()
//{
//int a,b,c,d;
//printf ("input a= ");
//scanf("%d", &a);
//printf ("input b= ");
//scanf("%d", &b);
//printf ("input c= ");
//scanf("%d", &c);
//printf ("input d= ");
//scanf("%d", &d);
//	if (a>b && a>c&& a>d) printf ("a");
//	else if (b>a&& b>c&& b>d) printf ("b");
//	else if (c>b&& c>a&& c>d) printf ("c");
//	else if (d>a&&d>b&& d>c) printf ("d");
//	else
//printf ("not");
//	}
//*************************************************************
//BT17.  tim so lon nhat va so nho nhat cua 4 gia tri khai vao  _OK
// #include<stdio.h> // khai bao ban dau 
//main()
//{
//int a,b,c,d, max, min;
//printf ("input a= ");
//scanf("%d", &a);
//printf ("input b= ");
//scanf("%d", &b);
//printf ("input c= ");
//scanf("%d", &c);
//printf ("input d= ");
//scanf("%d", &d);
//
//if (a>b && a>c && a>d) printf ("max= %d\n", a);
//if (b>a && b>c && b>d) printf ("max= %d\n", b);
//if (c>a && c>b && c>d) printf ("max= %d\n", c);
//if (d>a && d>c && d>b) printf ("max= %d\n", d);
//// else printf("not");
//if (a<b && a<c && a<d) printf ("min= %d", a);
//if (b<a && b<c && b<d) printf ("min= %d", b);
//if (c<a && c<b && c<d) printf ("min= %d", c);
//if (d<a && d<c && d<b) printf ("min= %d", d);
//}
//**********************************************************
//BT5. nhap 3 so a, b, c, Xet dieu kien tam giac********** 
//#include<stdio.h>  
//main()
//{
//int a,b,c;
//printf ("input a= ");
//scanf("%d", &a);
//printf ("input b= ");
//scanf("%d", &b);
//printf ("input c= ");
//scanf("%d", &c);
//	if (a>0&&b>0&&c>0&&(a+b)>c&&(b+c)>a&&(c+a)>b) 
//	printf ("ABC is a triangle");
//	else
//	printf ("ABC is not a triangle");
//	}
//************************
// BT5.b: Xet dieu kien tam giac**********tinh chu vi va dien tich _ok
//#include<stdio.h>  
//#include<math.h>
//main()
//{
//float a,b,c,p,p1,s;
//printf ("input a= ");
//scanf("%f", &a);
//printf ("input b= ");
//scanf("%f", &b);
//printf ("input c= ");
//scanf("%f", &c);
//p1=a+b+c;
//p=p1/2;
//s=sqrt(p*(p-a)*(p-b)*(p-c));
//if (a>0&&b>0&&c>0&&(a+b)>c&&(b+c)>a&&(c+a)>b){
//printf("\nOUTPUT\n");
//printf ("ABC is a triangle");
//printf("\nThe perimeter of the triangle is %0.2f ", p1);
//printf("\nThe triangle area is %0.2f ", s);
//} 
//else {
//printf("\nOUTPUT\n");
//printf ("ABC is not a triangle");
//    }
//}
//*********************************************************************
 //bai tap 6: nhap vao so giay, in ra so nam,thang, ngay, gio, giay (gia su moi thang co 30 ngay)
//#include<stdio.h>
//main()
//{
//	int n;
//	printf(" input so giay n=");
//	scanf("%d", &n);//khai bao
//	printf(" %d nam ", n/31104000);
//	n=n%31104000;
//	printf(" %d thang ", n/2592000);
//	n=n%2592000;
//	printf(" %d ngay ", n/86400);
//	n=n%86400;
//	printf("%d gio ", n/3600);
//	n=n%3600;
//	printf("%d phut ", n/60);
//	
//	printf("%d giay ", n%60); 
//	}
 //*********************************************************
// Bai tap 7: doi tien:co cac menh gia  thong dung 500k, 200k, 100k....1k. doi so tien theo menh gia sao cho so to tien it nhat(khong dung array)
////a.cach 1: Ap dung bai tren (Chi Hai) 7. 
//#include<stdio.h>
//main()
//{
//   int n;
//   printf("nhap so tien don vi Nghin dong:");
//   scanf("%d,",&n);
// printf("so to 500k-%d to\n",n/500);
// n=n%500;
// printf("so to 200k-%dto\n", n/200);
// n=n%200;
// printf("so to 100k-%dto\n", n/100);
// n=n%100;
// printf("so to 50k-%dto\n", n/50);
// n=n%50;
// printf("so to 20-%dto\n", n/20);
// n=n%20;
// printf("so to 10k-%dto\n", n/10);
// n=n%10;
// printf("so to 5k-%dto\n", n/5);
// n=n%5;
// printf("so to 2k-%dto\n", n/2);
// n=n%2;
// printf("so to 1k-%dto\n", n/1);
//}
//*******************************************
//  cach 2-   
//#include<stdio.h>
//#include<math.h>
//#include<conio.h>
//main()
//{ 
//int n;
//int s1,s2,s3,s4,s5,s6,s7,s8,s9;
//	printf("Input n (nghin dong): ");
//	scanf("%d", &n);
//	printf("\nOUTPUT: \n");
//	scanf("d",&n);// khai bao
//	s1=n/500;// so to co menh gia 500k
//	s2=(n%500)/200;// so to menh gia 200k
//	s3=(n-s1*500-s2*200)/100; //so to menh gia 100k
//	s4=(n-s1*500-s2*200-s3*100)/50;//so to menh gia 50k
//	s5=(n-s1*500-s2*200-s3*100-s4*50)/20;// so to menh gia 20k
//	s6=(n-s1*500-s2*200-s3*100-s4*50-s5*20)/10;//so to menh gia 10k
//	s7=(n-s1*500-s2*200-s3*100-s4*50-s5*20-s6*10)/5;// so to menh gia 5k
//	s8=(n-s1*500-s2*200-s3*100-s4*50-s5*20-s6*10-s7*5)/2; // so to menh gia 2k
//	s9=(n-s1*500-s2*200-s3*100-s4*50-s5*20-s6*10-s7*5-s8*2);//so to 1k
//	printf("\nSo to menh gia 500k: %d", s1);
//	printf("\nSo to menh gia 200k: %d", s2);
//	printf("\nSo to menh gia 100k: %d", s3);
//	printf("\nSo to menh gia 50k: %d", s4);
//	printf("\nSo to menh gia 20k: %d", s5);
//	printf("\nSo to menh gia 10k: %d", s6);
//	printf("\nSo to menh gia 5k: %d", s7);
//	printf("\nSo to menh gia 2k: %d", s8);
//	printf("\nSo to menh gia 1k: %d", s9);
//}
//************************************************
//**********************************************
// cach 3 cua sv (le anh Bien) 8d
//#include<stdio.h>
//main()
//{
//	int n,t500,t200,t100,t50,t20,t10,t5,t2,t1;// so tien ban dau va so to cua cac menh gia
//	printf("nhap so tien:");scanf("%d",&n);
//	t500=n/500; if (t500>0) printf("\nso to 500k: %d",t500);
//	n=n-(t500*500);
//	t200=n/200; if (t200>0) printf("\nso to 200k: %d",t200);
//    n=n-(t200*200);
//	t100=n/100; if (t100>0) printf("\nso to 100k: %d",t100);
//	n=n-(t100*100);
//	t50=n/50; if (t50>0) printf("\nso to 50k: %d",t50);
//	n=n-(t50*50);
//	t20=n/20; if (t20>0) printf("\nso to 20k: %d",t20);
//	n=n-(t20*20);
//	t10=n/10; if (t10>0) printf("\nso to 10k: %d",t10); 
//	n=n-(t10*10);
//	t5=n/5; if (t5>0) printf("\nso to 5k: %d",t5);
//	n=n-(t5*5);
//	t2=n/2; if (t2>0) printf("\nso to 2k: %d",t2);
//	n=n-(t2*2);
//	if (n>0) printf("\nso to 1k: %d",n);
//}
// *********************************************
// cach 2: dung mang (trinh bay trong phan array).

//**************************************************
//BT8. giai phuong trinh bac 1  
//#include<stdio.h>
//main()
//{
//double a,b,x;
//	printf("a= ");
//	scanf("%lf", &a);
//	printf ("b= ");
//	scanf("%lf", &b);
//	x=-b/a;// phan chinh
// if (a!=0)printf("x= %0.3lf",x);
//else if (b!=0) printf("phuong trinh vo nghiem");
//else printf("Phuong trinh vo so nghiem");
//}
//*********************************************
//BT9. Bai toan giai phuong trinh bac 2  (ok)
//#include<stdio.h>
//#include<math.h>
//main()
//{
//float 	a, b, c, d, x, x1, x2;
//printf("a= ");
//scanf("%f", &a);
//printf ("b= ");
//scanf("%f", &b);
//printf ("c= ");
//scanf("%f", &c);
//d=b*b-4*a*c;
//x=-b/(2*a);
//x1=(-b+sqrt(d))/(2*a);
//x2=(-b-sqrt(d))/(2*a);// khai bao
//	if (d<0) printf("\nPhuong trinh vo nghiem");
//	else  if(d==0) printf("\nPhuong trinh co nghiem kep x1=x2=%0.2f",x);
//	else{
//		printf("\nPhuong trinh co 2 nghiem:");
//		printf("\n x1=%0.3f",x1);
//		printf("\n x2=%0.3f",x2);
//	}	
//}
//********************************
// cach 2:  Chi lam
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	float 	a, b, c, delta, x, x1, x2;
//	printf("a= ");
//	scanf("%f", &a);
//	printf ("b= ");
//	scanf("%f", &b);
//	printf ("c= ");
//	scanf("%f", &c);
//	delta = b*b-4*a*c;
//	if(delta<0){	
//		printf("Phuong trinh vo nghiem");
//				} else if (delta == 0){
//		printf("Phuong trinh co nghiem kep x1 = x2 = %.2lf",-b/(2*a));
//				} else {
//		printf("Phuong trinh co 2 nghiem phan biet\n");
//		printf("x1 = %.3lf\n",((-b+sqrt(delta))/(2*a)));
//		printf("x2 = %.3lf",((-b-sqrt(delta))/(2*a)));
//					}
//}
//*******************************************************
// BT 10.  nhap so nguyen n, kiem tra co bao nhieu so le
//#include<stdio.h>
//main()
//{
//int n, i, count=0;
//		printf("\nNhap n=");
//		scanf("%d", &n);
//		for(i=1; i<=n; i++)
//		if(i%2!=0) count++;
//		printf("\nCo %d so le tu 1 den n.",count);
//	}
//*******************************************************
// BT11 tinh giai thua- cach 1: dung vong lap don gian
//#include<stdio.h>
//main()
//{
//int n, i, fact=1;
//printf(" Input n= ");
//scanf("%d",&n);
//	for(i=1;i<=n; i++){
//		fact=fact*i;// gan tich giai thua
//	}
//printf("\nFact of %d is: %d", n, fact);
//}
// cach 2: ***********************************************
//#include<stdio.h>
//long fact (int n) // khai bao ham tinh giai thua
//{if (n==0) return 1;
//else return (n*fact(n-1));
//}
//int main()
//{
//	int m;
//	long factor;
//	printf ("\Input m=");
//	scanf("%d", &m);
//	factor=fact(m);
//	printf ("Fact of %d is %d", m, factor);
//}
// 
//***************************************************************
//****************************CAC BAI TOAN TINH TONG************************************
// 
//BT12. tinh tong cac so chia het cho 2 nhung khong chia het cho 3 tu 1 den n
//#include<stdio.h>
//main()
//{	
//int   n;
//printf("\nNhap n=");
//scanf("%d", &n);
//int   T=0;
//		for(int   i=1; i<=n; i++)
//		if(i % 2 == 0 && i % 3 != 0)
//		T = T + i;// gan tong
//printf("\nTong cac so thoa man dieu kien bai toan tu 1 den n la= %d", T);
//}
//BT13. tinh tong cac chu so cua mot so* 
// cach 1: don gian
//#include<stdio.h>
//main()
//{
//int n,m, tong=0;
//printf(" input n=");
//scanf("%d", &n);
//	m = n;// de giu nguyen n ban dau, thay doi m, 
//	while(m!=0){	  
//	tong=tong+m%10;// lay hang don vi
//	m=m/10;//lay hang chuc
//			//tong += m%10;
//			//m/=10; 
//		}
//printf("tong cac chu so co trong %d la %d", n, tong);
//}
//*********************************
//tinh tong cac chu so cua mot so
// cach 2: * dung ham
//#include<stdio.h>
//int sumDigit(int);
//main()
//{
//	int n;
//	printf ("input n= ");
//	scanf("%d", &n);
//	printf("\nSum of all digit in %d =%d", n, sumDigit(n)); 
//}
//int sumDigit(int n){
//	int sum =0;
//	while(n!=0){
//		sum+=n%10;//
//		n/=10;
//	}
//	return sum;
//}
//******************************************
//BT14. Xet tinh chan le va tinh tong cac chu so cua mot so* 
//cach 1: don gian-OK
//#include<stdio.h>
//main()
//{
//	int n,tong=0;
//	printf("Input n=");
//	scanf("%d", &n);
//	if (n%2==0) printf ("n la chan");
//	else printf ("n la le");
//	while(n!=0){	  
//	tong += n%10;
//	n/=10; 
//		}
//		printf("\nTong cac chu so trong n la %d", tong);
//}
// *********************************
// TA
//#include<stdio.h>
//main() {
//	int n,sum=0;
// 	printf("Input n=");
// 	scanf("%d", &n);
//	if (n%2==0) printf ("n is even");
//	else printf ("n is odd");
//	while(n!=0){
//	sum+= n%10;
//	n/=10;
//	}
//		printf("\nSum of all digit in n is : %d", sum);
//}
//*
//*********************************************************************
 // cach 2:  dung ham
//#include<stdio.h>;
//int check (int);
//int sumDigit(int);
//int check(int n){
//	if (n%2==0) return 1; 
//	else return 0;
//}
//int sumDigit(int n){
//	int sum =0;
//	while(n!=0){
//		sum+=n%10;
//		n/=10;
//	}
//	return sum;
//}
//main()
//{
//	int n;
//	printf ("input n= ");
//	scanf("%d", &n);
//	if (check(n)==1) printf("even");
//	else printf("odd");
//	printf("\nSum of all digit in %d =%d", n, sumDigit(n)); 
//}
//*******************************************************
// cach 3:  
//#include<stdio.h>
//int check (int);
//int sumDigit(int);
//main()
//{
//	int n;
//	printf ("input n= ");
//	scanf("%d", &n);
//	if (check(n)==1) printf("even");
//	else printf("odd");
//	printf("\nSum of all digit in %d =%d", n, sumDigit(n)); 
//}
//int sumDigit(int n){
//	int sum =0;
//	while(n!=0){
//		c
//	}
//	return sum;
//}
//int check(int n){
//	if (n%2==0) return 1; 
//	else return 0;
//}
//**********************************************************************************************


// ********************************** CAC BAI TAP VE SO NGUYEN TO******************************
//BT15 1. nhap so nguyen n, 
// a. kiem tra xem co phai so nguyen to ko? 
// b. neu phai, in ra la SNT, neu khong phai snt, in ra cac uoc so cua no.  	
// c. in ra tong tat ca cac uoc so cua n
// d. in ra so luong cac cac uoc so cua n
// e. in ra cac SNT tu 2 den n
// f. in ra n SNT
// g. in ra 3 SNT lon hon n
// h. in ra 2 SNT, mot so lon hon va mot so nho hon n ( truong hop n la SNT va truong hop n khong phai la SNT)..
// i. in ra 4 SNT, 2 so lon hon va 2 so nho hon n
// k. nhap n, in ra cac SNT (co 3, 4 chu so) ma co tong cac chu so chia het cho 5
//******************************************
// bai 13 a.XET TINH NGUYEN TO cua so n?- 

//**********************************
// cach 1: don gian , so phep tinh lon, khong can them bien
//#include<stdio.h>
//main()
//{
//	int n, i;
//	printf("Input n= ");
//	scanf("%d", &n);
//	printf(" \nOUTPUT: \n");
//		for(i=2; i<n; i++){ 
//		if(n%i ==0) break;
//		}
//		if (i==n)printf("n la SNT");  
//		else   printf("n khong phai la SNT");							
//}
//**************************************************
// cach 2 : don gian, them bien check
//#include<stdio.h>
//main()
//{
//	int n, i, check=0;// bien check dung de danh dau SNT
//	printf("Input n= ");
//	scanf("%d", &n);
//	printf(" \nOUTPUT: \n");
////phan chinh
//		for(i=2; i<n; i++){ 
//		if(n%i ==0) check=1;}
//		if(check==0 && n!=1)  printf("n la SNT");
//		else   printf("n khong phai la SNT");					
//}
//***************************************************
// BT16 nhap n, liet ke cac uoc so cua no  
//#include<stdio.h>
//#include<math.h>
//main()
//{
//int n, i ;
//	printf("Input n= ");
//	scanf("%d", &n);
//	printf("\nOUTPUT: \n");	
//	printf ("\nCac uoc so cua n la:");
//		for(i=1 ; i<=n; i++){   
//		if(n%i==0)	printf("\n %d", i );
//	}	
//	}
//*******************************************
//bai lam 15( tong hop 2 bai tren)  Kiem tra n co phai so NT hay khong, in cac uoc so  cua n, 
// cach 1- ( tong hop 2 bai tren) , chay lau  
//#include<stdio.h>
//main()
//{
//	int n, i;
//	printf("Input n= ");
//	scanf("%d", &n);
//	printf(" \nOUTPUT: \n");
//		for(i=2; i<=n; i++){ 
//		if(n%i ==0) break;
//		}
//		if (i==n)printf("n la SNT");  
//		else   printf("n khong phai la SNT");
//	printf ("\nCac uoc so cua n la:");
//	for(i=1 ; i<=n; i++) 
//		if(n%i==0)	printf("\n %d", i );	
//}
//*******************************************************************
// cach 2:  chay bang n, chay lau - OK-ro rang
//#include<stdio.h>
//main()
//{
//int n, i,check =0;
//	printf("Input n= ");
//	scanf("%d", &n);
//	printf(" \nOUTPUT: \n");	
//		for(i=2; i<n; i++){ 
//		if(n%i==0) check=1;
//		}
//		if (check==0) printf("%d la so nguyen to \n",n);
//		else
//		printf("%d khong phai la so nguyen to \n",n);
//		if (check==1){
//			printf ("\nCac uoc so cua n la:");
//						for(i=1; i<=n; i++){
//						if(n%i==0) 
//						printf("\n %d", i);
//					}			 
//		}					 
//}
//******************************************************
//cach 3:  chay bang n/2,  ********************
//#include<stdio.h>
//main()
//{
//int n, i,check =0;
//	printf("Input n= ");
//	scanf("%d", &n);
//	printf(" \nOUTPUT: \n");	
//		 	for(i=2; i<n/2; i++){ 
//			if(n%i==0) check=1;
//		}
//		if (check==0) printf("%d la so nguyen to \n",n);
//		else
//		printf("%d khong phai la so nguyen to \n",n);
//		if (check==1){
//			printf ("\nCac uoc so cua n la:"); 
//						for(i=1; i<=n/2; i++){// vi tu n/2 den n khong co uoc so cua n
//						if(n%i==0) 
//						printf("\n %d", i);
//					}
//						printf("\n %d", n);	 // them uoc chinh la n
//		}				 
//}
//***********************************
 //cach 4: thay n bang can bac 2 cua n
//#include<stdio.h>
//#include<math.h>
//main()
//{
//	int n, i,check =0;
//	printf("Input n= ");
//	scanf("%d", &n);
//	printf(" \nOUTPUT: \n");
//		for(i=2; i<=sqrt(n); i++){ 		
//			if(n%i==0) check=1;
//		}
//		if (check==0) printf("%d la so nguyen to \n", n);
//		else
//		printf("%d khong phai la so nguyen to \n",n);
//		if (check==1){
//			printf ("\nCac uoc so cua n la: ");
//					for(i=1; i<sqrt(n); i++){    // neu de dau i<=sqrt(n) se sinh ra uoc kep
//						if(n%i==0) 
//						printf("\n %d  %d", i, n/i);		 
//											}
//					if (i==sqrt(n))	printf("\n %d", i);// neu khong co se bo sot uoc neu n la so chinh phuong
//					}						 
//}
//*****************************************************
// cach 5: chay theo buoc lon 5 hoac 6 (lam trong bai toan sau)

//**********************************************************OK********************************************

// BT16. nhap n, in ra cac so nguyen to tu 1 den n  (dung lenh for, gioi han chay tu 1=n/2)
//#include<stdio.h>
//main()
//{	
// int   n, i, j, check;
//		printf("\nNhap n=");
//		scanf("%d", &n);
//		printf("\nCac so nguyen to tu 1 den n la: ");
//			for(i=1; i<=n; i++){
//			check = 0;
//			for(j=1; j<= i/2; j++)
//			if(i % j == 0) check++;// check tang moi lan khi i chia het cho j
//			if(check == 1)// i chi chia het cho j khi j bang 1
//			printf("%5d", i);//  so 5 quy dinh khoang cach cua i
//		}
//}
//********************************
// mo rong: in ra cac so NT nho hon n va co tong cac chu so chia het cho 5
//#include<stdio.h>
//#include<math.h>
//int main() 
//{
//int i,j,a,b,check,n;
//printf("\nNhap n= ");
//scanf("%d",&n);
//printf("Cac so nguyen to co tong chu so chia het cho 5: ");
//	for(i=1;i<n;i++) {// thay doi gioi han cua i (10 ----99, 100-----999....)
//	//for(i=100;i<999;i++) {
//	check=0;
//	for(j=1;j<=i/2;j++)
//	if(i%j==0) check++;
//		a=i;
//		b=0;
//	while(a!=0) {
//	b=b+a%10;
//	a=a/10;
//	if(check==1&&b%5==0) printf("%5d",i);
//				}
//					}
//}
//}
//**************************************
//mo rong:  in ra n SNT co tong cac chu so chia het cho 5
//#include<stdio.h>
//int check(int a){
//int i;
//	if(a<2) return 0;
//	for(i=2;i<a;i++){
//	if(a%i==0) return 0;
//	}
//	return 1;
//	}
//int checkD5(int a){
//int b, sum = 0;
//	while(a!=0)	{
//	b = a%10;
//	a = a/10;
//	sum = sum + b;
//				}
//	if(sum%5==0){
//	return 1;
//				}
//	return 0;
//	}
//main()
//{
//int n, count;
//printf("input n = ");
//scanf("%d", &n);
//int i;
//	for(i=1;i>0;i++){
//	if(check(i)==1){
//	if(checkD5(i)==1){
//printf("%d ", i);
//count++;
//					}
//					}
//if(count==n) break;
//					}
//}
//***************************OK******************************************OK****************
 //BT 17.  nhap vao  n, in ra n so nguyen to dau tien
//cach 1: don gian, dung lenh for va while_OK
//#include<stdio.h>
//#include<math.h>
//int checkPrime(int k) {
//    int i;								
//    int m = sqrt(k);
//    for (i = 2; i <= m; i++) {  // check so nguyen to theo uoc so 2 den k
//        if (k % i == 0) return 0;
//    						}
//    return 1;
//					}		
//main() 
//{
// int n;
//    printf("Nhap n = ");
//    scanf("%d", &n);
//    printf("%d so nguyen to dau tien la: \n", n);
//    int count = 0; 									// dem tong so nguyen to
//    int i = 2;  									// tim so nguyen to bat dau tu so 2
//	while (count < n) {
//        if (checkPrime(i))  {
//            printf("%d ", i);
//            count++;
//        					}
//        	i++;
//    				 }
//}
//******************************************************************************
// cach 2: thay doi buoc chay trong vong for, tiet kiem so phan tu phai xet (OK)
//#include<stdio.h>
// 	int snt(int n){
// 	for (int i=2; i*i<=n;i++)
// 	if (n%i==0) return 0; //kiem tra tu 2 den can bac 2 cua n, neu co uoc so (chia het cho i) thi n khong phai la SNT
//	//neu qua vong for khong co uoc so nao tu 2 den can bac 2 cua n thi n la so nguyen to
// 	return 1;
// 	}
//main()
//{
//	int n, j, count; 
//	int arr[10]={2,3};
//	scanf("%d", &n);
// 	if (n<=2){ 
//	j=0;
// 	for (j=0;j<n;j++) printf("%d, ", arr[j]);
// 	 		}
//	else{
//		j = 5;
//		count =2;
//		printf("2, 3, ");// in ra 2 so nguyen to la 2 va 3  
//		for (j=5;count<n;j+=6){// loai boi so cua 2 va 3
//			if (snt(j)==1) {// hoac if(snt(j)!=0){ 
//				printf("%d, ",j);// 5 11 17 23 29
//				count++;
//			}
//			if (count==n) break;
//			if (snt(j+2)){// viet tat
//				printf("%d, ",j+2);// xet 7 13 19 25 31
//				count++;
//			}
//		}
// 	}
//}	
//*****************************************************************
// cach3 : thuat toan tiet kiem. dung lenh do while *************OK********************************************
// #include<stdio.h>
// 	int snt(int n){
// 	for (int i=2; i*i<=n;i++)
// 	if (n%i==0) return 0; //kiem tra tu 2 den can bac 2 cua n, neu co uoc so (chia het cho i) thi n khong phai la SNT
//	//neu qua vong for khong co uoc so nao tu 2 den can bac 2 cua n thi n la so nguyen to
// 	return 1;
// 	}
//main()
//{
//	int n, x, count; 
//	int arr[10]={2,3};
//	scanf("%d", &n);
// 	if (n<=2){ x=0;
// 		do{ 
//	 		printf("%d, ", arr[x]);
// 			x++; 			
// 		}
// 		while(x<n); 
//		 }
//	else{
//		x = 5;
//		count =2;
//		printf("2, 3, ");// in ra 2 so nguyen to la 2 va 3 khi x<n
//		do{
//			if (snt(x)){
//				printf( "%d, ", x);
// 				count++;
// 			}
// 			if(count==n) break;
//	 		if(snt(x+2)) {
//	 			printf("%d, ", x+2);
//	 			count++;
//			}
// 			if (count==n) break;
// 			x +=6;
// 			}
//			while(1);
// 	   } 
//}
//*************************************************************	

 
// bai tap 17: Nhap vao n, in ra n so nguyen to dau tien (thuat toan tiet kiem), dung lenh do while
//#include<stdio.h>
// #include<math.h>
//int snt(int n){
// 	int i,m;
// 	m = (int)sqrt(n);
// 	if (n<2) return 0;
// 	if (n==2 || n==3 || n==5) return 1;
// 	if (n%2==0 || n%3==0) return 0;
// 	for(i =5; i<=m;i+=6)// buoc nhay theo 6
// 	if (n%i==0||n%(i+2)==0) return 0;
// 	return 1;
// }
//main(){
//	int count, n, x;
//	int arr[10]={2,3};
//	scanf("%d", &n);
// 	if (n<=2){x=0;
// 		do	{ printf("%d, ", arr[x]);
// 			x++; 			
// 			}
// 		while(x<n); 		
//			}
//	else{ x = 5;
//		count =2;
//		printf("2, 3, ");
//		do{
//			if (snt(x)){
//				printf( "%d, ", x);
// 				count++;
// 			}
// 			if(count==n) break;
//	 		if(snt(x+2)) {
//	 			printf("%d, ", x+2);
//	 			count++;
//			}
// 			if (count==n) break;
// 			x +=6;
// 		} 
//		while(1);
// 	}
//}
//*************************************************

// Bai 17. viet n so nguyen to dau tien (dung thuat toan chay nhanh hon, giai bang ham)
//#include<stdio.h>
//#include<math.h>
//int snt(int n){
// 	int i,m;
// 	if (n<2) return 0;
// 	if (n==2 || n==3 || n==5) return 1;
// 	if (n%2==0 || n%3==0) return 0;
// 	m = (int)sqrt(n); 
//	i+=6;//  buoc nhanh hon
//	while (i<=m)
// 			//for(i =5; i<=m;i+=6)
// 	if (n%i==0||n%(i+2)==0) return 0;
// 	return 1;
// }
//main(){
//	int count, n, x;
//	int arr[10]={2,3};
//	scanf("%d", &n);
// 	if (n<=2){
// 		x=0;
// 		do{ 
//	 		printf("%d, ", arr[x]);
// 			x++; 			
// 		}
// 		while(x<n); 		
//	}
//	else{
//		x = 5;
//		count =2;
//		printf("2, 3, ");
//		do{
//			if (snt(x)){
//				printf( "%d, ", x);
// 				count++;
// 			}
// 			if(count==n) break;
//	 		if(snt(x+2)) {
//	 			printf("%d, ", x+2);
//	 			count++;
//			}
// 			if (count==n) break;
// 			x +=6;
// 		}while(1);
// 	}
//}

//******//// BT18.  (bai tap ve nha, da chua)  tim so nguyen to tu lon hon n va gan n nhat? 
// *******************************

//// bai tap 19: nhap n, in ra n phan tu cua day FiBONACI: la day so ma so tiep theo la tong cua 2 so truoc no
// cach 1: dung lenh for don gian
//# include <stdio.h>
//# include<math.h>
//main()
//{
//	int n1=0,n2=1, n3, i,n;
//	printf( "number of Fibonaci n= ");
//	scanf(" %d", &n);
//	printf("\n%d %d",n1,n2);// in ra so 0 va 1
//	for (i=2; i<n; i++){ // vong lap bat dau tu 2
//		n3=n1+n2;
//		printf(" %d",n3);
//		n1=n2;
//		n2=n3;
//	}
//}
//***************************
// cach khac:  * nhap n, in n so fibonacci dung lenh do while
//#include<stdio.h>
//#include<math.h>
//int n;
//void NhapN(){
//	do{
//		printf("N = ");
//		scanf("%d",&n);
//	} while (n<0);
//}
//main(){
//	int i, a=-1, b=1, c;
//    NhapN();
//	for (i=1; i<=n; i++){
//		c=a+b;
//	    a=b;
//	    b=c;
//	    printf(" %d  ",c);	 
//	}
//} 
//*********************************
/// Bai 20 nhap n, in cac so fibonacci nho hon n*/
//#include<stdio.h>
//#include<math.h>
//int n;
//void NhapN(){
//	do{
//		printf("N = ");
//		scanf("%d",&n);
//	} while (n<0);
//}
//main(){
//	int a=-1, b=1, c;
//	NhapN();
//	while (a+b<n) {
//		c=a+b;
//	    a=b;
//	    b=c;
//		printf("%d   ",c);
//	} 
//}
//******************************************************
///*nhap n, tim  mot (hoac hai) so fibonacci gan nhat so voi n*/
//#include<stdio.h>
//#include<math.h>
//int n;
//void NhapN(){
//	do	{ printf("N = ");
//		scanf("%d",&n);
//		} while (n<0);
//			}	
//main(){
//	int arr[100];
//	int a=-1, b=1, c, i=-1;
//	NhapN();
//	while (c<n) {
//		i++;
//		c=a+b;
//		a=b;
//		b=c;
//		arr[i]=c;
//	}
//    printf("hai so fibonacci gan n nhat: %d    %d", arr[i-1],  arr[i]); 
//	//printf("so fibonacci gan n nhat:    %d", arr[i]);   	
//}
//**************************************************
// BAI 21: SO ARMSTRONG  : 
// kiem tra so Armstrong: la so co gia tri bang tong lap phuong cua cac chu so cua no, // sai dinh nghia
 //vi du 153=1+27+5*5*5.
//# include<stdio.h>
//main()
//{
//	int n,r,temp, sum=0;
//	printf(" input n= ");
//	scanf("%d",&n);
//	temp=n;
//	while (n>0){
//		r=n%10;
//		sum=sum+(r*r*r);
//		n=n/10;
//		}
//	if(temp==sum)
//		printf ("\n n is an Armstrong number");
//	else
//		printf ("\n n is not an Armstrong number");
//		}
//******************************************************************
//9: N so Armstrong dau tien 
//#include <stdio.h>
//int check(int x)
//{
//	int res=0,dem=0;
//	int y=x;
//	while (y)
//	{
//		++dem;
//		y/=10;
//	}
//	y=x;
//	while (y)
//	{
//		int i,tg=1;
//		for(i=1;i<=dem;i++) tg*=y%10;
//		res+=tg;
//		y/=10; 
//	}
//	return (res==x);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i=0;
//	printf("%d so Amstrong dau tien la:",n );
//	int dem=0;
//	while (dem<n)
//	{
//		if (check(i)) 
//		{
//			++dem;
//			printf("%d ",i);	
//		}
//		++i;
//	}
//	return 0;
//}
//**********************************************
// bai 22: in ra cac so Armstrong tu 1 den n va so luong cac so Armstrong do
// cach lam don gian// sai ve dinh nghia
//#include<stdio.h>   
//main()  
//{  
// int i, n, tram, chuc, donvi, count = 0;  
// printf("input: ");  
// scanf("%d",&n);  
// for(i=1;i<n;++i)
// {  
//    donvi = i % 10;
//    chuc  = (i / 10) % 10;
//    tram  = i / 100;
//    if (donvi * donvi * donvi + chuc * chuc * chuc + tram * tram * tram == i)
//    {
//       printf ( "  %d",i);
//       count++;
//    }
// } 
// printf ("\n so cac so armstrong tu 1 den n la %d ",count); 
//} 
//*************************************************
//Bai 23:  
// nhap vao so n, tim va in ra n so Armstrong dau tien// xem lai dinh nghia
//#include <stdio.h>
//#include <math.h>
//int main () {
//printf("Enter the number of amstrong numbers: ");
//int n;
//scanf("%d", &n);
//int i = 1;
//int count = 0;
//int sum = 0;
//while (1) {
//if (isAmstrong(i)) {
//count++;
//printf("%d ", i);
//sum += i;
//}
//if (count == n) break;
//i++;
//}
//printf("\nThe sum of all %d amstrong numbers is: %d ", n, sum);
//return 0;
//}
//int isAmstrong(int number) {
//int r, temp, sum = 0;
//temp = number;
//while (number > 0) {
//r = number % 10;
//sum = sum + (r * r * r);
//number /= 10;
//}
//if (temp == sum) {
//return 1;
//} else {
//return 0;
//}
//}
/* So Fibonacci */

// 1: N so Fibonaci dau tien
//#include <stdio.h>
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,a=1,b=1;
//	printf("%d so fibonaci dau tien la: 1 1 ",n );
//	for(i=3;i<=n;i++) 
//	{
//		printf("%d ",a+b);
//		int tg=b;
//		b=a+b;
//		a=tg;
//	}
//	return 0;
//}

// 2: In ra cac so Fibonacci co 3 chu so
//#include <stdio.h>
//long long f[100];
//int main() 
//{
//	printf("cac so fibonacci co 3 chu so la: ");
//	int i;
//	f[1]=1;
//	for(i=2;i<=50;i++)
//	{
//		f[i]=f[i-1]+f[i-2];
//		if (f[i]>=100 && f[i]<=999) printf("%lld ",f[i]);
//	} 
//	
//	return 0;
//}


// 3: In ra so Fibonacci thu N
//#include <stdio.h>
//long long f[100];
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	printf("So fibonacci thu N la : ");
//	int i;
//	f[1]=1;
//	for(i=2;i<=n;i++) f[i]=f[i-1]+f[i-2];
//	printf("%lld", f[n]);
//	return 0;
//}

//4: Cho so N tim so fibonacci thu n-1 va thu n+1
//#include <stdio.h>
//long long f[100];
//int main() 
//{
//	
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i;
//	f[1]=1;
//	for(i=2;i<=50;i++) f[i]=f[i-1]+f[i-2];
//	
//	printf("so fibonacci thu n-1 la: %lld\n",f[n-1]);
//	printf("so fibonacci thu n+1 la: %lld ",f[n+1]);
//	return 0;
//}

// 5: Kiem tra so N co thuoc day so Fibonacci khong

//#include <stdio.h>
//long long f[100];
//int main() 
//{
//	
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i;
//	f[1]=1;
//	int check=0;
//	for(i=2;i<=50;i++) 
//	{
//		f[i]=f[i-1]+f[i-2];
//		if (f[i]==n) check=1;
//	}
//	if (check) printf("N co thuoc day Fibonacci");
//	else printf("N khong thuoc day Fibonacci");
//	return 0;
//}


//6: Tinh tong cac so Fibonacci tu 1-> N.
//#include <stdio.h>
//long long f[100];
//int main() 
//{
//	
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i;
//	long long tong=1;
//	f[1]=1;
//	for(i=2;i<=n;i++) 
//	{
//		f[i]=f[i-1]+f[i-2];
//		tong+=f[i];
//	}
//	printf("Tong cua cac so Fibonacci tu 1->n la %lld",tong );
//	return 0;
//}

//7: Dem so luong so Fibonacci trong khoang [a,b].
//#include <stdio.h>
//long long f[100];
//int main() 
//{
//	
//	int a,b;
//	printf("Input A ");
//	scanf("%d",&a);
//	printf("Input B ");
//	scanf("%d",&b);
//	int i,dem=0;
//	f[1]=1;
//	for(i=2;i<=50;i++) 
//	{
//		f[i]=f[i-1]+f[i-2];
//		if (f[i]>=a && f[i]<=b) ++dem;
//	}
//	printf("So luong so Fibonacci trong khoang [%d,%d] la %d",a,b,dem);
//	return 0;
//}

//8: In ra 3 so Fibonacci lon hon N
//#include <stdio.h>
//long long f[100];
//int main() 
//{
//	
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	
//	int i,vt=0;
//	f[1]=1;
//	for(i=2;i<=50;i++) 
//	{
//		f[i]=f[i-1]+f[i-2];
//		if (f[i]>n) if (vt==0) vt=i;
//	}
//	printf("3 so Fibonacci lon hon N la: %d %d %d",f[vt],f[vt+1],f[vt+2]);
//	return 0;
//}



/* So Armstrong*/


//9: N so Armstrong dau tien 
//#include <stdio.h>
//int check(int x)
//{
//	int res=0,dem=0;
//	int y=x;
//	while (y)
//	{
//		++dem;
//		y/=10;
//	}
//	y=x;
//	while (y)
//	{
//		int i,tg=1;
//		for(i=1;i<=dem;i++) tg*=y%10;
//		res+=tg;
//		y/=10; 
//	}
//	return (res==x);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i=0;
//	printf("%d so Amstrong dau tien la:",n );
//	int dem=0;
//	while (dem<n)
//	{
//		if (check(i)) 
//		{
//			++dem;
//			printf("%d ",i);	
//		}
//		++i;
//	}
//	return 0;
//}



//10: Kiem tra mot so co phai so Armstrong khong 
//#include <stdio.h>
//int check(int x)
//{
//	int res=0,dem=0;
//	int y=x;
//	while (y)
//	{
//		++dem;
//		y/=10;
//	}
//	y=x;
//	while (y)
//	{
//		int i,tg=1;
//		for(i=1;i<=dem;i++) tg*=y%10;
//		res+=tg;
//		y/=10; 
//	}
//	return (res==x);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	if (check(n)) printf("N la so Armstrong");
//	else printf("N khong phai la so Armstrong");
//	return 0;
//}


//11: Tim so Armstrong thu N
//#include <stdio.h>
//int check(int x)
//{
//	int res=0,dem=0;
//	int y=x;
//	while (y)
//	{
//		++dem;
//		y/=10;
//	}
//	y=x;
//	while (y)
//	{
//		int i,tg=1;
//		for(i=1;i<=dem;i++) tg*=y%10;
//		res+=tg;
//		y/=10; 
//	}
//	return (res==x);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int dem=0,i=0;
//	while (dem<n)
//	{
//		if (check(i)) ++dem;
//		if (dem==n) printf("So armstrong thu N la: %d",i);
//		++i;
//	}
//	return 0;
//}


// 12: In ra cac so Armstrong co 3 chu so
//#include <stdio.h>
//int check(int x)
//{
//	int res=0,dem=0;
//	int y=x;
//	while (y)
//	{
//		++dem;
//		y/=10;
//	}
//	y=x;
//	while (y)
//	{
//		int i,tg=1;
//		for(i=1;i<=dem;i++) tg*=y%10;
//		res+=tg;
//		y/=10; 
//	}
//	return (res==x);
//}
//int main() 
//{
//	int i;
//	printf("Cac so Armstrong co 3 chu so la: ");
//	for(i=100;i<=999;i++) if (check(i)) printf("%d ",i);
//	
//	return 0;
//}

//13: Tim so Armstrong thu n-1 va n+1
//#include <stdio.h>
//int check(int x)
//{
//	int res=0,dem=0;
//	int y=x;
//	while (y)
//	{
//		++dem;
//		y/=10;
//	}
//	y=x;
//	while (y)
//	{
//		int i,tg=1;
//		for(i=1;i<=dem;i++) tg*=y%10;
//		res+=tg;
//		y/=10; 
//	}
//	return (res==x);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int dem=0,i=0,ok1=0,ok2=0;
//	while (dem<n+1)
//	{
//		if (check(i)) ++dem;
//		if (dem==n-1 && !ok1) {printf("So armstrong thu n-1 la: %d\n",i);ok1=1;}
//		if (dem==n+1 && !ok2) {printf("So armstrong thu n+1 la: %d\n",i);ok2=1;}
//		++i;
//	}
//	return 0;
//}

//14: In ra 3 so Armstrong lon hon N
//#include <stdio.h>
//int check(int x)
//{
//	int res=0,dem=0;
//	int y=x;
//	while (y)
//	{
//		++dem;
//		y/=10;
//	}
//	y=x;
//	while (y)
//	{
//		int i,tg=1;
//		for(i=1;i<=dem;i++) tg*=y%10;
//		res+=tg;
//		y/=10; 
//	}
//	return (res==x);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int dem=0,i=n+1;
//	printf("3 so Armstrong lon hon N la: ");
//	while (dem<3)
//	{
//		if (check(i)) 
//		{
//			++dem;
//			printf("%d ",i);
//		}
//		
//		++i;
//	}
//	return 0;
//}

//15: Tinh tong cac so Armstrong tu 1->N.
//#include <stdio.h>
//int check(int x)
//{
//	int res=0,dem=0;
//	int y=x;
//	while (y)
//	{
//		++dem;
//		y/=10;
//	}
//	y=x;
//	while (y)
//	{
//		int i,tg=1;
//		for(i=1;i<=dem;i++) tg*=y%10;
//		res+=tg;
//		y/=10; 
//	}
//	return (res==x);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int dem=0,i=0,tong=0;
//	while (dem<n)
//	{
//		if (check(i)) 
//		{
//			++dem;
//			tong+=i;
//		}
//		
//		++i;
//	}
//	
//	printf("tong cua cac so armstrong tu 1->N la: %d", tong);
//	return 0;
//}

//16: Dem so luong so Armstrong trong khoang [a,b]
//#include <stdio.h>
//int check(int x)
//{
//	int res=0,dem=0;
//	int y=x;
//	while (y)
//	{
//		++dem;
//		y/=10;
//	}
//	y=x;
//	while (y)
//	{
//		int i,tg=1;
//		for(i=1;i<=dem;i++) tg*=y%10;
//		res+=tg;
//		y/=10; 
//	}
//	return (res==x);
//}
//int main() 
//{
//	int a,b;
//	printf("Input A ");
//	scanf("%d",&a);
//	printf("Input B ");
//	scanf("%d",&b);
//	int i,dem=0;
//	for(i=a;i<=b;i++)
//	{
//		if (check(i))++dem;
//	}
//	printf("%d",dem);
//	return 0;
//}



/* Palindrome */

//17: Kiem tra mot so co phai Palindrome khong
//#include <stdio.h>
//int check(int x)
//{
//	int tg=0,y=x;
//	while (x)
//	{
//		tg=(tg*10)+x%10;
//		x/=10;
//	}
//	return (tg==y);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,dem=0;
//	if (check(n)) printf("N la so Palindrome");
//	else printf("N khong phai la so Palindrome");
//	return 0;
//}

// 18: Tim so Palindrome thu N
//#include <stdio.h>
//int check(int x)
//{
//	int tg=0,y=x;
//	while (x)
//	{
//		tg=(tg*10)+x%10;
//		x/=10;
//	}
//	return (tg==y);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i=0,dem=0;
//	while (dem<n)
//	{
//		if (check(i)) ++dem;
//		if (dem==n) printf("So Palindrome thu N la %d",i);
//		++i;
//	}
//	return 0;
//}
//*************************************************
//19: In ra N so Palindrome dau tien 
//#include <stdio.h>
//int check(int x)
//{
//	int tg=0,y=x;
//	while (x)
//	{
//		tg=(tg*10)+x%10;
//		x/=10;
//	}
//	return (tg==y);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i,dem=0;
//	printf("%d so Palindrome dau tien la: ",n);
//	while (dem<n)
//	{
//		if (check(i)) {printf("%d ",i);++dem;}
//		++i;
//	}
//	return 0;
//}

//20: In ra cac so Palindrome co 3 chu so
//#include <stdio.h>
//int check(int x)
//{
//	int tg=0,y=x;
//	while (x)
//	{
//		tg=(tg*10)+x%10;
//		x/=10;
//	}
//	return (tg==y);
//}
//int main() 
//{
//	int i,dem=0;
//	printf("Cac so Palindrome co 3 chu so la: ");
//	for(i=100;i<=999;i++) if (check(i)) printf("%d ",i); 
//	return 0;
//}

//21: In ra so Palindrome thu N-1 va N+1
//#include <stdio.h>
//int check(int x)
//{
//	int tg=0,y=x;
//	while (x)
//	{
//		tg=(tg*10)+x%10;
//		x/=10;
//	}
//	return (tg==y);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int dem=0,i=0,ok1=0,ok2=0;
//	while (dem<n+1)
//	{
//		if (check(i)) ++dem;
//		if (dem==n-1 && !ok1) {printf("So Palindrome thu n-1 la: %d\n",i);ok1=1;}
//		if (dem==n+1 && !ok2) {printf("So Palindrome thu n+1 la: %d\n",i);ok2=1;}
//		++i;
//	}
//	return 0;
//}

//22: In ra 3 so Palindrome lon hon N
//#include <stdio.h>
//int check(int x)
//{
//	int tg=0,y=x;
//	while (x)
//	{
//		tg=(tg*10)+x%10;
//		x/=10;
//	}
//	return (tg==y);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int i=n+1,dem=0;
//	printf("3 so Palindrome dau tien lon hon N la: ");
//	while (dem<3)
//	{
//		if (check(i)) 
//		{
//			printf("%d ",i);
//			++dem;
//		}
//		++i;
//	}
//	return 0;
//}

//23: Tinh tong cac Palindrome tu 1->N
//#include <stdio.h>
//int check(int x)
//{
//	int tg=0,y=x;
//	while (x)
//	{
//		tg=(tg*10)+x%10;
//		x/=10;
//	}
//	return (tg==y);
//}
//int main() 
//{
//	int n;
//	printf("Input N ");
//	scanf("%d",&n);
//	int dem=0,i=0,tong=0;
//	while (dem<n)
//	{
//		if (check(i)) 
//		{
//			++dem;
//			tong+=i;
//		}
//		
//		++i;
//	}
//	printf("Tong cac so Palindrome tu 1->N la: %d", tong);
//	return 0;
//}

//24: Dem so luong so Palindrome trong khoang [a,b]
//#include <stdio.h>
//int check(int x)
//{
//	int tg=0,y=x;
//	while (x)
//	{
//		tg=(tg*10)+x%10;
//		x/=10;
//	}
//	return (tg==y);
//}
//int main() 
//{
//	int a,b;
//	printf("Input A ");
//	scanf("%d",&a);
//	printf("Input B ");
//	scanf("%d",&b);
//	int i,dem=0;
//	for(i=a;i<=b;i++) if (check(i))++dem;
//	
//	printf("%d",dem);
//	return 0;
//}


//********************************
// bai 24 : Kiem tra so Palindrom ( la so doc xuoi va nguoc la nhu nhau) vd 131, 232..*****************************************
//# include <stdio.h>
//# include<math.h>
//main()
//{
//	int n,r,sum,temp;
//	sum=0;
//	printf("Input n=");
//	scanf("%d", &n);
//	temp=n;
//	while (n>0){
//		r=n%10;
//		sum=(sum*10)+r;
//		n=n/10;
//		}
//	if (temp==sum) printf( "n is a Palindrome");
//	else printf( "n is not a Palindrome");
//}
//*****************************************************************************
// bai 25: nhap vao so n, in ra n so Palindrom dau tien.
//#include <stdio.h>
//#include <math.h>
//int main () {
//	printf("Enter the number of palindrome numbers: ");
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	int sum = 0;
//	while (1) {
//		if (isPalindrome(i)) {
//			count++;
//			printf("%d ", i);
//			sum += i;
//		}
//		if (count == n) break;
//		++i;
//	}
//	printf("\nThe sum of all %d palindrome numbers is: %d, number of palindrome: %d", n, sum, count);
//	return 0;
//}
//int isPalindrome(int number) {
//	int sum, temp, r;
//	sum = 0;
//	temp = number;
//	while (number > 0) {
//		r = number % 10;
//		sum = (sum * 10) + r;
//		number /= 10;
//	}
//	if (temp == sum) {
//		return 1;
//	} else {
//		return 0;
//	}
//}
//**********************************************************
//BT 26  in ra 2 so nho hon va 2 so NT lon hon n (Minh)
//#include<stdio.h>
//#include<math.h>
//int checkPrime(int a){
//int check=1; //Neu check = 1 nghia la snt, check = 0 nghia la khong phai snt
//if(a<2) check = 0; //moi so nho hon 2 deu khong phai so nguyen to
//else{
//for(int i=2;i<a;i++){// cho i chay tu 2, den nho hon a, vi du nhap a bang 10 thi i se chay tu 2 den 9, i ++ la i se tien dan tu 2 den 9.
//if(a%i==0){
//check = 0;
//break;
//}
//}
//}
//return check;
//}
//int main(){
//int n;
//printf("n = ");
//while(1){
//scanf("%d", &n);
//if(n>2) break;
//printf( " khong du SNT ");// truong hop khong du SNT
//}
//int count1=0;
//int count2=0;
//int i;
//// if(checkPrime(n)==0) printf("day khong phai so nguyen to\n");
////else{
//for (i=n-1;i>=2;i--){
//if (checkPrime(i)==1){
//count1++;
//printf("%d ", i);
//if (count1==2) break;// thay doi so luong SNT nho hon n
//}
//}
//for (i=n+1;i<10000;i++){
//if (checkPrime(i) ==1){
//count2++;
//printf("%d ", i);
//if (count2==2) break;// thay doi so luong SNT lon hon n
//}
//}
////}
//return 0;
//}

// *****************************************************************************
// BAI TAP TONG HOP: viet ra k so nho hon va q so lon hon n
//#include <stdio.h>
//#include <math.h>
//int isPrime(int number) {
//	int i;
//    int flag = 1;
//    for(i = 2; i <= sqrt(number); i++) {
//    	if (number % i == 0) {
//    		flag = 0;
//		}
//	}
//	return flag;
//}
//int isFibonacci(int number) {
//	int n1 = 1, n2 = 1;
//	if (number == n1) return 1;
//	int c = n1 + n2;
//	while (c <= number) {
//		if (c == number) return 1;
//		n1 = n2;
//		n2 = c;
//		c = n1 + n2;
//	}
//	return 0;
//}
//////*******************************
//int isPalindrome(int number) {
//	if (number < 0 || number % 10 == 0 && number != 0) {
//		return 0;
//	}
//	if (number < 10) return 1;
//	int reverseNum = 0;
//	while (number > reverseNum) {
//		int r = number % 10;
//		reverseNum = (reverseNum * 10) + r;
//		number /= 10;
//	}
//	return number == reverseNum || reverseNum / 10 == number;
//}
//////**************************
//int isAmstrong(int number) {
//	int temp = number, remainder, result = 0;
//	while (temp != 0) {
//		remainder = temp % 10;
//		result += remainder * remainder * remainder;
//		temp /= 10;
//	}
//	if (result == number) {
//		return 1;
//	}
//	return 0;
//}
////*******************************
//void primeKQ(int n, int k, int q) {
//	int countK = 0, countQ = 0;// k so nho hon n, q so lon hon n
//	int i, j;
//	for(i = n - 1; i >= 2; i--) {
//		if (isPrime(i)) {
//			printf("%d ", i);
//			countK++;
//		}
//		if(countK == k) break;
//	}
//	for(j = n + 1;; j++) {
//		if (isPrime(j)) {
//			printf("%d ", j);
//			countQ++;
//		}
//		if(countQ == q) break;
//	}
//}
////**********************************
//void palindromeKQ(int n, int k, int q) {
//	int countK = 0, countQ = 0;
//	int i, j;
//	for(i = n - 1; i >= 0; i--) {
//		if (isPalindrome(i)) {
//			printf("%d ", i);
//			countK++;
//		}
//		if(countK == k) break;
//	}
//	
//	for(j = n + 1;; j++) {
//		if (isPalindrome(j)) {
//			printf("%d ", j);
//			countQ++;
//		}
//		if(countQ == q) break;
//	}
//}
////***************************************
//void armstrongKQ(int n, int k, int q) {
//	int countK = 0, countQ = 0;
//	int i, j;
//	for(i = n - 1; i >= 1; i--) {
//		if (isAmstrong(i)) {
//			printf("%d ", i);
//			countK++;
//		}
//		if(countK == k) break;
//	}
//	for(j = n + 1;; j++) {
//		if (isAmstrong(j)) {
//			printf("%d ", j);
//			countQ++;
//		}
//		if(countQ == q) break;
//	}
//}
////***********************************
//void fibonacciKQ(int n, int k, int q) {
//	int countK = 0, countQ = 0;
//	int i, j;
//	for(i = n - 1; i >= 0; i--) {
//		if (isFibonacci(i)) {
//			printf("%d ", i);
//			countK++;
//		}
//		if(countK == k) break;
//	}
//	
//	for(j = n + 1;; j++) {
//		if (isFibonacci(j)) {
//			printf("%d ", j);
//			countQ++;
//		}
//		if(countQ == q) break;
//	}
//}
////***************************************
//int main() {
//	int n;
//	printf("Enter the number n: ");
//	scanf("%d", &n);
//	printf("\nWhat do you want?\n1.Find K prime numbers that less than N and Q prime numbers greater than N\n");
//	printf("2.Find K palindrome numbers that less than N and Q palindrome numbers greater than N\n");
//	printf("3.Find K armstrong numbers that less than N and Q armstrong numbers greater than N\n");
//	printf("4.Find K fibonacci that less than N and Q fibonacci numbers greater than N\n");
//	int input, k, q;
//	scanf("%d", &input);
//	printf("Enter the number K:\n");
//	scanf("%d", &k);
//	printf("Enter the number Q:\n");
//	scanf("%d", &q);
//	
//	switch(input) {
//		case 1:
//			printf("%d primes numbers that less than %d and %d prime numbers that greater than %d are:\n", k, n, q, n);
//			primeKQ(n, k, q);
//			break;
//		case 2:
//			printf("%d palindrome numbers that less than %d and %d palindrome numbers that greater than %d are:\n", k, n, q, n);
//			palindromeKQ(n, k, q);
//			break;
//		case 3:
//			printf("%d amstrong numbers that less than %d and %d armstrong numbers that greater than %d are:\n", k, n, q, n);
//			armstrongKQ(n, k, q);
//			break;
//		case 4:
//			printf("%d fibonacci numbers that less than %d and %d fibonacci numbers that greater than %d are:\n", k, n, q, n);
//			fibonacciKQ(n, k, q);
//			break;
//		default:
//			printf("Unsupported operations, return.");
//			return 0;
//	}	
//}
//******************************************************
// TIM UOC SO CHUNG LON NHAT VA BOI SO CHUNG NHO NHAT
//*************************
 
// bai 27: Tim USCLN cua 2 so ******************************
// thuat toan 1- thuat toan nay cham, giam dan tu so be ve, den khi cung la uoc cua m va n thi dung lai. 
//#include<stdio.h>
//main()
//{
//	int m,n,us;
//	printf(" n= ");
//	scanf(" %d",&n);
//	printf(" m= ");
//	scanf(" %d",&m );			
//	if (m>n) us=n; // chay tu so be cho nhanh hon
//	else us=m;
//			//us= m>n?n:m; //viet tat
//    us=n;
//	for (;; us--)
//		{
//		if(m%us==0 && n%us==0) break;
//		}
//		printf (" USCLN cua 2 so tren la %d", us);
//}
//**********************
// thuat toan 2(thuat toan Oclicd).// thuat toan nay nhanh hon, giam theo hieu cua so lon tru di so be (thuat toan Oclid).
//#include<stdio.h>
//main()
//{
//	int m,n,us;
//	printf(" n= ");
//	scanf(" %d",&n );
//	printf(" m= ");
//	scanf(" %d",&m );//
//		while (m!=n){
//		if (m>n) m=m-n;
//		else n = n-m;
//		}
//			printf (" USCLN cua 2 so la %d", n);
//}
//*******************************************************
//*****************************
// thuat toan 3 (thuat toan  Ole: dung phep chia lay phan du giua m va n, toc do nhanh hon)
//#include<stdio.h> 
//main()
//{
//	int m,n,us;
//	printf(" n= ");
//	scanf(" %d",&n);
//	printf(" m= ");
//	scanf(" %d",&m);
//while(m*n!=0){
//	if (m>n) m=m%n;
//	else n=n%m;
//	}
//		us = m==0?n:m;
//	printf("USCLN cua 2 so la %d", us);
//	}
//**************************************************************


//***************************
// BT28. Tim boi so chung nho nhât
// cach 1: lam theo dinh nghia (don gian nhat, chay theo buoc 1 nen lau nhat)
//#include<stdio.h>
//main()
//{
//int   a, b, bs;
//printf ("input a= ");
//scanf("%d", &a);
//printf ("input b= ");
//scanf("%d", &b);
//	for (bs=a; bs<=a*b; bs++){
//	if (bs%a==0 && bs%b==0) printf("bs = %d",bs);
//							}
//}
// neu cho boi so chay tu so lon, thoi gian chay se nhanh hon
// thuat toan 1**// thuat toan nay  don gian, khong phai them bien, nhuoc diem la tang tung buoc nen cham.
//******************************************
// cach tuong tu
//#include<stdio.h>
//main()
//{
//int m,n,bs;
//printf ("input m= ");
//scanf("%d", &m);
//printf ("input n= ");
//scanf("%d", &n);
//bs= m;
//for(;;bs++)
//	{
//	if (bs%m==0 &&bs%n==0) break;
//	}
//	printf("BSCNN = %d", bs);
//}
//******************************
// cach 2: chay theo buoc a hoac b, so dong code ngan, khong quan tam a lon hay b lon*******************************
//#include<stdio.h>
//main(){
//	int   a, b, a1;
//printf ("input a= ");
//scanf("%d", &a);
//printf ("input b= ");
//scanf("%d", &b);
//	a1 = a;
//	while(a1 %b!=0)
//	a1 = a1+a;
//	printf("BSCNN = %d",a1);
//}
//(cach 2 chay theo buoc cua so lon, se nhanh hon)*******************************
//#include<stdio.h>
//main()
//{
//int   a, b, a1;
//printf ("input a= ");
//scanf("%d", &a);
//printf ("input b= ");
//scanf("%d", &b);
//	if (a>b){
//	a1 = a;
//	while(a1 %b!=0)
//	a1 = a1+a;}
//	else
//	{a1=b;
//	while(a1 %a!=0)
//	a1=b+a1;
//	}
//	printf("BSCNN = %d",a1);
//}
//*******************************************
// cach 3
//#include<stdio.h>
//main(){
//int a,b,a1,b1,solon,sobe;// phan biet so lon, so be, code dai
//printf ("input a= ");
//scanf("%d", &a);
//printf ("input b= ");
//scanf("%d", &b);
//if (a>b){
//	solon =a;
//	sobe = b;
//	a1 = a;
//}
//else {
//	solon =b;
//	sobe = a;
//	a1 = b;
//}
//while(solon%sobe!=0)
//solon = solon+a1;
//printf("Boi so chung nho nhat cua a va b la %d",solon);
//}
//sau vong while nay thi solon la boi so chung nho nhat cua 2 so
//*****************************************************************

//cach 4
//***// thuat toan nay nhan do tang theo buoc lon, nhuoc diem la can phai them bien step bang so lon
//#include<stdio.h>
//main()
//{
//int m,n,bs,step;
//printf ("input m= ");
//scanf("%d", &m);
//printf ("input n= ");
//scanf("%d", &n);
//bs=m>n?m:n;
//step=bs;
//for(;; bs+=step)
//{
//	if(bs%n==0&&bs%m==0)break;
//	}
//		printf("BSCNN = %d", bs);
//		}
//**************************
// bai 29: thuat toan 3******** ket hop ca tinh USCLN va BSCNN theo cong thuc***********************
//#include<stdio.h>
//main()
//{
//int m,n,m1,n1;
//printf ("input m= ");
//scanf("%d", &m);
//printf ("input n= ");
//scanf("%d", &n);
//m1=m;
//n1=n;
//while (m!=n){
//	if (m>n)
//	m=m-n;
//	else
//	n=n-m;
//	}
//	printf("USCLN cua 2 so %d va %d la %d \n", n1, m1, n);
//	printf("BSCNN = %d", n1*(m1/n));// thay doi thu tu thuc hien phep tinh de giam kich co cua so
//	}
//*************CAC BAI TOAN VE CHUOI SO****************************************
// BT30 (bai A01): nhap vao so nguyen n
 // tinh tong s=1+1/2+1/3+....1/n 
//#include<stdio.h>
//main()
//{
//int n,i;
//double s = 0;
//printf("Input n = ");
//scanf("%d",&n);
//	for (i=1; i<=n;i++){
//	s = s + 1.0/i;
//						}
//	printf("tong=%lf",s) ;
//}

// *************************
//BT31: tinh tong: s=1/2+2/3+...........n-1/n.
//#include<stdio.h>
//main()
//{
//int n,i;
//double s = 0;
//printf("Input n = ");
//scanf("%d",&n);
//	for (i=2; i<=n;i++){
//	s = s + (i-1.0)/i;
//						}
//	printf("tong=%lf",s) ;
//}
//******************************************************
// tinh tong sum=1+11+111+.......+1111 (n so 1)
//#include <stdio.h>
// main()
//{
//int n,i,tong, temp;
//tong =0;
//temp =1;
//printf("Enter n: ");
//scanf("%d",&n);
//	for(i=0; i<n; i++){ 
//		tong += temp;	// viet tat tong=tong+temp
//		temp = (temp*10)+1;		
//						}
//	printf("\ntong cua chuoi la: %ld\n",tong);
//}
//*************************************************
// MOT SO BAI TAP TOAN THAM KHAO
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
////Tinh S=1+2+3+...n
//main()	
//{
//int n, i;
//double S=0;
//printf("Enter n= ");
//scanf("%d",&n);
//	for(i=1;i<=n;i++){
//	S=S+i;
//					}
//	printf("Tong S = %0.2lf",S);
//}
//***********************************************
//Tinh S=1^2+2^2+3^2+...+n^2
//main()
//{
//int n, i;
//double S=0;
//printf("Enter n = ");
//scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		S=S+i*i;
//	}
//	printf("Tong S = %0.2lf",S);
//}
//**************************************
////Tinh S=1^2+2^3+3^4+...+n^(n+1)
//#include<stdio.h>
//#include<math.h>
//main()	
//{
//	int n, i;
//	double S=0;
//	printf("Enter n = ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		S=S+pow(i,i+1);
//					}
//	printf("Tong S = %0.2lf",S);
//}
//*******************************************
////Nhap x, n. Tinh S=x^1+x^2+...+x^n
//main()	{
//int n, i;
//double x,S;
//S=0;
//printf("Enter n = ");
//scanf("%d",&n);
//printf("Enter x = ");
//scanf("%lf",&x);
//	for(i=1;i<=n;i++)	{
//		S=S+pow(x,i);
//	}
//	printf("Tong S = %0.2fl",S);
//}
//****************************************
////Tinh S=1/1+1/1(1+2)+1/(1+2+3)+...+1/(1+2+...+n)
//main()	{
//	int n, i;
//float t=0,S=0;
//	printf("Enter n = ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		t=t+i;
//		S=S+(1/t);
//					}
//	printf("Tong S = %0.2f",S);
//}
//*****************************************
////Tinh S= 1/1!+1/(2!)+1/(3!)+...+1/(n!)
//main()	{
//int n, i;
//float S=0,t=1;
//printf("Enter n = ");
//scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		t=t*i;
//		S=S+1/t;
//					}
//	printf("Tong S = %0.2f",S);
//}
////************************************
////Tinh S=1-1/2+1/3-1/4+1/5-...+(/-)1/n
//int main()	{
//	int n, i;
//	float t,S;
//	S=1;
//	t=1;
//	printf("Enter n = ");
//	scanf("%d",&n);
//	for(i=2;i<=n;i++)	{
//		t=(-1)*t;
//		S=S+t/i;
//	}
//	printf("Tong S = %0.2f",S);
//}
//***********************************
////Nhap n,x. Tinh S=1+x^2/2!+x^4/4!+...+x^(2n)/(2n!)
//int main()	{
//	int n, i;
//	double x,t,S;
//	S=1;
//	t=1;
//	printf("Enter x = ");
//	scanf("%lf",&x);
//	printf("Enter n = ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)	{
//		t=t*2*i*((2*i)-1);
//		S=S+pow(x,2*i)/t;
//	}
//	printf("Tong S = %0.2fl",S);
//}
//**********************************************************************************

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
//**********************************************************************
// BT 42 chuyen doi tu so sang ky tu, dung while and swich case
//#include<stdio.h>  
//#include<conio.h>  
//main()  
//{  
//int n,sum=0,r;  
//printf("Nhap mot so bat ky = \n");  
//scanf("%ld",&n);  
//while(n>0)  
//{  
//r=n%10;  
//sum=sum*10+r;  
//n=n/10;  
//}  
//n=sum;  
//while(n>0)  
//{  
//r=n%10;  
//switch(r)  
//{  
//case 1:  
//printf("mot ");  
//break;  
//case 2:  
//printf("hai ");  
//break;  
//case 3:  
//printf("ba ");  
//break;  
//case 4:  
//printf("bon ");  
//break;  
//case 5:  
//printf("nam ");  
//break;  
//case 6:  
//printf("sau ");  
//break;  
//case 7:  
//printf("bay ");  
//break;  
//case 8:  
//printf("tam ");  
//break;  
//case 9:  
//printf("chin ");  
//break;  
//case 0:  
//printf("khong ");  
//break;   
//}  
//n=n/10;  
//}  
//getch();  
//} 
//***************************************

