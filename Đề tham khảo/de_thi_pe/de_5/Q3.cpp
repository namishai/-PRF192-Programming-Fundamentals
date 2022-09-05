#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* replaceWord(const char* s, const char* oldW,
                  const char* newW) {
	int i = 0;
	int newWlen = strlen(newW);
	int oldWlen = strlen(oldW);
	char *result = (char *)malloc(100);

	int check = 0;
	while (*s) {
		if (strstr(s, oldW) == s && check == 0) {
            strcpy(&result[i], newW);
			i += newWlen;
			s += oldWlen;
			check = 1;
		} else
			result[i++] = *(s++);
	}
	return result;
}
int main() {
	char str[] = "tren tinh ban duoi tinh yeu";
	char c[] = "tinh";
	char d[] = "yeu";
	printf("Old string: %s\n", str);
	char *result = replaceWord(str, c, d);
	printf("New String: %s\n", result);
	free(result);
	return 0;

}

