#include<stdio.h>
#include<string.h>
int main(){
	char a[200];
	scanf ("%[^\n]s", &a);
	for (int i=0; i<200; i++){
		if (a[i]==' '){
			a[i]=a[i+1];
		}	
	}
	printf ("%s", a);
} 
