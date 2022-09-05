#include<stdio.h>
int main(){
	int x;
	char name[31],addr[50];
	printf("What is your name:");gets(name);
	printf("What is your age:");scanf("%d",&x);
	fflush(stdin);
	printf("where are you from:");gets(addr);
	printf ("\n\nName:%s.\nAge:%d.\nAddr:%s.", name, x, addr);
} 
