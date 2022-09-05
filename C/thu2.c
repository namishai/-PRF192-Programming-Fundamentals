#include <stdio.h>
int main(){
	char s[100];
	int i, k;

	printf("Nhap vao xau tuy y: ");
	scanf("%[^\n]s", &s);
	while(s[i]!= '\0'){
		if(s[i] ==' ' && s[i+1] == ' '){
			k=i;
			while(s[k+1]!='\0'){
				s[k]=s[k+1];
				k++;
				s[k]='\0';
			
			}
				i--;
		}
		i++;
	}
	printf("%s", s);
}
