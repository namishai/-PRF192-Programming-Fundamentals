#include <stdio.h>
#include <string.h>

int main(){
	int tong=0, n,trungbinh, count = 0;
	do{
		printf("Nhap vao N:");scanf("%d",&n);
	}while(n<0||n>100);
	for (int i=0; i<n; i++){
		if (i%2!=0){
		count++;
		tong=tong+i;
		}
	}
	trungbinh=tong/count;
	printf("%d",trungbinh);
} 
