#include<stdio.h>
int main(){
	int w, h;
	int s, v;
	do{
		scanf("%d %d",&w,&h);
	}while (w<=0||h<=0);
	printf("%d",(w+h)*2);
	printf("\n%d",w*h);
} 
