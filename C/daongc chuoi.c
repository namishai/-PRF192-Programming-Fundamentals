#include<string.h>
#include<stdio.h>
int main(){
	char s[50],s1[50];
	char max[50]="";
	int len=0;
	scanf("%[^\n]",&s);;
	len=strlen(s);	
	for (int i = 0; i< len;  i++){
		s1[len+i] = s[len-i-1];		
	}
	s1[2*len]='\0';	
	printf("S1 = %s",s1);
	int dem=0;
	for (int i = 0 ; i <= len ; i++) {
		if (s[i]=='a' || s[i]=='A') dem++;
	}
	printf("\nCo %d ki tu so",dem);
}
