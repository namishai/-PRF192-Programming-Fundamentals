nhap chuoi va sap xep cac chu cai theo bANG CHU CAI

#include <stdio.h>
#include <string.h>
 
int main (void) {
   char string[] = "VietTuts.VN";
   char temp;
 
   int i, j;
    
    
   int size = strlen(string);
 
   printf("Chuoi truoc khi sap xep: %s \n", string);
 
   for (i = 0; i < size-1; i++) {
      for (j = i+1; j < size; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
    
   printf("\nChuoi sau khi sap xep %s \n", string);
   return 0;
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
nhap va sap xep cac chuoi theo thu tu chu cai trong C.


#include<stdio.h>
#include<string.h>
 
int main() {
   char s[4][20];
   char t[20];
   int i, j;
   int size = 4;
 
   printf("\nNhap 4 chuoi bat ky: \n");
   for (i = 0; i < size; i++) {
      scanf("%s", s[i]);
   }
   // sap xep chuoi
   for (i = 1; i < size; i++) {
      for (j = 1; j < size; j++) {
         if (strcmp(s[j - 1], s[j]) > 0) {
            strcpy(t, s[j - 1]);
            strcpy(s[j - 1], s[j]);
            strcpy(s[j], t);
         }
      }
   }
 
   printf("\nSap xep thu tu cua cac chuoi:");
   for (i = 0; i < size; i++) {
      printf("\n%s", s[i]);
   }
   return(0);
}


//nhap ky tu va sap xep no theo bang chu cai alphabet.

#include<stdio.h>
#include<string.h>
int main() {
	char a[4], c;
	int i, j;
	for(i =0; i<4; i++) {
		printf("a[%d]", i);
		fflush(stdin);
		a[i]=getchar();
	}
	for(i=0; i<4; i++) {
		for(j=i+i; j<4; j++) {
			if(a[i]>a[j]) {
				c = a[i];
				a[i]=a[j];
				a[j]=c;
			}			
		}
		printf("%c", a[i]);
	}
}



.//Nhap 1 ky tu va tim vi tri do trong chuoi.

#include<stdio.h>
#include<string.h>
void timkitu(char str[],char c){
	int count=0,d;
	int i,dodai=strlen(str);
	for(i=0;i<dodai;i++){
		if(str[i]==c){
			count++;
			break;
		}
	}
	if(count==0){
		printf("-1");
	}else{
		printf("%d", i);
	}
}
int main(){
	char str[100],c;
	printf("xau do la : ");
	gets(str);
	printf("chu cai can tim la : ");
	scanf("%c",&c);
	timkitu(str,c);
	return 0;
}

//xoa chuoi trong chuoi.

#include<stdio.h>
#include<string.h>
#define max 100

char XoaTu(char s[],char s1[]) {
	int len=strlen(s);
	int len2=strlen(s1);
	int i, count = 0;
	for(i=0; i<len; i++) {
		if((s[i]==s1[0]) && (s[i+len2-1]==s1[len2-1])) {
			int j;
			for(j=i; j<len; j++) {
				s[j]=s[j+len2];
			}
//			s[j+len2]='\0';
//			break;
			count++;
		}
		s1[len-len2*count+1] = '\0';
	}
	printf("Chuoi ky tu sau khi cat: %s",s);
}

int main() {
	char s[max];
	char s2[max];
	int a[max];
	printf("Nhap xau: ");
	gets(s);
	printf("Nhap tu muon xoa: ");
	gets(s2);
	XoaTu(s,s2);

}

//xoa ky tu trong chuoi 
#include<conio.h>
#include<stdio.h>
#include<string.h>
char xoa(char s1[100], char x) {
	int i, j, count=0;
	int n = strlen(s1);
	for(i=0; i<n; i++) {
		if(s1[i] == x) {
			for(j=i; j<n; j++) {
				s1[j] = s1[j+1];
			}
			count++;
		}
	}
	s1[n-count+1] = '\0';
	printf("%s", s1);
}
int main() {
	char s1[100], x;
	printf("nhap chuoi: ");
	gets(s1);
	printf("nhap ki tu xoa: ");
	scanf("%c", &x);
	xoa(s1, x);
	return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////
bai tap chuyen hoa bo dau cach vs tab thua.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//remove redundant spaces in a string s
void removeRedSpaces(char s[]) {
	int n,low, up, i, j;
	char x[100];
	n = strlen(s);
	i=0;
	j=n-1;
	while(i<n && s[i]==' ') i++;
	low = i;
	while(j>0 && s[j]==' ') j--;
	up = j;
	if(low>up) {
		strcpy(s,"");
		return;
	}
	strcpy(x,"");
	i = low;
	j=0;
	while(i<=up) {
		while(i<up && s[i]==' ') i++;
		while(i<=up && s[i]!=' ') x[j++] = s[i++];
		if(i<=up) x[j++] = ' ';
	}
	x[j] = '\0';
	strcpy(s,x);
}

void removeRedtab(char s[]) {
	int n,low, up, i, j;
	char x[100];
	n = strlen(s);
	i=0;
	j=n-1;
	while(i<n && s[i]=='\t') i++;
	low = i;
	while(j>0 && s[j]=='\t') j--;
	up = j;
	if(low>up) {
		strcpy(s,"");
		return;
	}
	strcpy(x,"");
	i = low;
	j=0;
	while(i<=up) {
		while(i<up && s[i]=='\t') i++;
		while(i<=up && s[i]!='\t') x[j++] = s[i++];
		if(i<=up) x[j++] = ' ';
	}
	x[j] = '\0';
	strcpy(s,x);
}

//Enter data for a string s
void input(char s[]) {
	printf("Enter a string s:\n");
	fflush(stdin);
	gets(s);
	removeRedSpaces(s);
	removeRedtab(s);
}

//Display a string s
void display(char s[]) {
	printf("%s\n",s);
}
void split(char s[], char a[][10], int *n) {
	int j=0;
	int i;
	for(i=0; i<= strlen(s); i++)
		if(s[i]==' '||s[i]=='\0') {
			a[*n][j]='\0';
			*n=*n+1;
			j=0;
		} else {
			a[*n][j]=s[i];
			j++;
		}
}

void upper(char s[]) {
	int i,n=strlen(s);
	for( i=0; i<n; i++)
		if (s[i]>= 97 && s[i]<= 122)
			s[i]=s[i]-32;
}
//--------------------------------------------------------
void fun( char s[] ) { // Complete this function
	// Write your statements here
	char a[10][10];
	int n=0;
	split(s,a,&n);
	printf("number of word=%d\n",n);
}

int main() {  // Do not edit this function
	// system("cls");
	char s[100];
	input(s);
	removeRedSpaces(s);
	printf("\nThe original string:\n");
	display(s);
	printf("\nThe string after processing:\n");
	fun(s);
	display(s);
//OUTPUT for marking:
	printf("\nOUTPUT:\n");
	display(s);
	printf("\n");
	system ("pause");
	return(0);
}






