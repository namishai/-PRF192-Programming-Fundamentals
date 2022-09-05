#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "trinh the hoan trinh the hoan trinh the hoan";
	char str1[] = "le thi b le thi b";
	strcpy(str, str1);
    printf("Chuoi target: %s", str);

}

