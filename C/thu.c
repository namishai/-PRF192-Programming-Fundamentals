#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j;
	scanf("%d", &n);
	char s[100][100];
	char tmp[100];
	for(i=0;i<n;i++){
		fflush(stdin);
		gets(s[i]);
	}
	for (i=n-1;i>=0;i--) {
		for(j=0;j<i;j++){
			if (strlen(s[i]) > strlen(s[j])){
				strcpy(tmp, s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j], tmp);
				}
			}
		}			
	for (i=0; i<n; i++){
  		printf("%s\n ",s[i]);
	}	
}
