#include <stdio.h>
int fx(int a,int b);
int main(){
	FILE *fp;
	int n,m;
	char s[50];
	fp=fopen("D:/file.text","r+");
	fscanf(fp,"%d%d",&n,&m);
	fscanf(fp,"%[^\n]\n",&s);
	fprintf(fp,"%d",fx(n,m)); 
	
} 
int fx(int a, int b){
	return a*b;
}
