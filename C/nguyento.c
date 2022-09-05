#include<stdio.h>
int main(){
	int n, a[100], tmp ;
	int count=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=0; i<n;i++){
		for (int j=2; j<=a[i]/2; j++){
			if(a[i]%j!=0){
				tmp=a[i];
				count ++;
				printf("%d ",tmp);
			}
		}
	}
	if (count!=0){
	}
	else{
		printf("no prime in the array");
	}
}


