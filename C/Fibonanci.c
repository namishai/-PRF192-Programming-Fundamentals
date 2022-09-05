#include <stdio.h>
int Fibonacci(int n){
    if(n==1||n==0||n==2||n==3) 
		return n;
    else 
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int kiemtraFibonacci(int n){
	 int ok = 0;
	 for (int i = 0; i < n; i++){		
		int kiemtra = Fibonacci(i); 
		if (n == kiemtra){
			ok = 1;	
		}			 	
	}
		if (ok==1) {
		
		printf ("%d la so trong day Fibonacci va la phan tu thu ", n);
		}
		else {
			printf ("%d khong phai so Fibonacci.", n);
		}
}
int main(){
	int N;
	N=Fibonacci(N);
	printf ("nhap vao so N:");scanf ("%d",&N);
	kiemtraFibonacci(N);
}

