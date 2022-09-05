#include <stdio.h>
void hoandoi(int *a,int *b);
int main(){
	int x,y;
	x=4;y=7;
	printf("\nX = %d Y = %d",x,y);
	
	hoandoi(&x,&y);
	printf("\nX = %d Y = %d",x,y);
}
void hoandoi(int *a,int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
