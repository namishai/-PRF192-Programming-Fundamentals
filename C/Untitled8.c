#include <stdio.h>
#include <string.h>

int main (){
	int N[10], n, tmp;
	do{
		scanf("%d",&n);
	} while (n<=10||n>=20);
	for (int i=0; i<n; i++){
		printf("N[%d]",i);scanf("%d",&N[i]);
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (N[j]<N[i]){
				tmp=N[i];
				N[i]=N[j];
				N[j]=tmp;
			}
		}
	}
		for (int i=0; i<n; i++){
		printf("%d",N[i]);}
} 
