#include <stdio.h>
#include <string.h>

int main (){
	int N[10],n;
	do{
		scanf("%d",&n);
	} while (n<=10||n>=20);
	for (int i=0; i<n; i++){
		printf("N[%d]",i);scanf("%d",&N[i]);
	}
} 
