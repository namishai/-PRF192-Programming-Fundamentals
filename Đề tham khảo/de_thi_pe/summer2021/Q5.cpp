#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	//your code here
	int a[n];
	int i,j;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}

	//your output here
	printf("\nOUTPUT: \n\n");
	for(i=0; i< n; i++) {
		int count = 0;
		for(j=0; j<n; j++) {
			if(a[i] == a[j]) {
				count++;
			}
		}
		if(count == 1){
			printf("%d ",a[i]);
	    }
	}

}

