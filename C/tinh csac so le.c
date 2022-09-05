#include<stdio.h>

int Q9(int n){
	for(int i = 2 ; i <= n/2 ;i++ ){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
	
}	

int main(){
	int n;
	scanf("%d",&n);

int a,b,c,sum = 0;
	for(int i = 101 ; i <= n ;i++ ){
	
		
	if(Q9(i)==1){
	    a = i % 100	; // 123 % 100 = a = 23
		b = a %  10 ; // 23 % 3 = 3 => b =3
		c = (a - b)/10 ;   //       => c = 2
		
	  //  printf("%d ",i);
	    sum = 1 + b +c;
	    if(sum == 5 || sum == 10 ){
	    	printf("%d " , i);
		}else printf("No solution");
	    
	    }	
		
	}
	


	
}
