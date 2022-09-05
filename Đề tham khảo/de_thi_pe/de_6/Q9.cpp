#include <stdio.h>
#include <string.h>
int checkSymmetry(char *s) {
	int n = strlen(s);
	
}
int main() {
	char str[100];
	printf("input string c: ");
	gets(str);
	int status = checkSymmetry(str);
	if(status == 0){
		printf("Khong la chuoi doi xung");
	} else{
		printf("la chuoi doi xung");
	}
	

}



