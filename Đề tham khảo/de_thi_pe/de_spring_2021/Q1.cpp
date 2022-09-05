#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
	int n;
	scanf("%d",&n);
	int i;
	int mau = 1;
	float sum = 0;
	for(i=1; i<=n; i++){
		mau = mau * i;
		float pt =1.0* pow(i,2)/mau;
		sum = sum + pow(-1,i+1)* pt;
	}

	printf("\nOUTPUT: \n");
	printf("%f",sum);


}

