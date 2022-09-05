#include <stdio.h>
#include<string.h>
int main(){
	int n[1000],b[1000],d[1000],c[1000],count=0;
	FILE *fp, *eng, *spn;
	char s[50][1000];
	char a[50][1000]; 
	fp = fopen("E:\\(PRF192)Programming Fundamentals\\TEXT\\ball.txt","r");
	do{
		fscanf(fp,"%[^;];%d;%[^;];%d;%d;%d%*c",&s[count],&n[count],&a[count],&b[count],&d[count],&c[count]);
		printf("\n%15s %15d %15s %15d %15d %15d",s[count],n[count],a[count],b[count],d[count],c[count]);
		count++;
	}while(!feof(fp));
	fclose(fp);
	eng = fopen("E:\\(PRF192)Programming Fundamentals\\TEXT\\ENG.txt","w");
	int tmp=0;
	char q[50][1000];
	printf("\n%d",eng);
	for(int t=0;t<20;t++){
		for (int i=0; i<20;i++){
			for(int j=0; j<20;j++){
				if (n[i]<n[j]){
					tmp=n[i];
					n[i]=n[j];
					n[j]=tmp;
					
					tmp=b[i];
					b[i]=b[j];
					b[j]=tmp;
					
					tmp=d[i];
					d[i]=d[j];
					d[j]=tmp;
					
					tmp=c[i];
					c[i]=c[j];
					c[j]=tmp;
					
					strcpy(q[i],a[i]);
					strcpy(a[i],a[j]);
					strcpy(a[j],q[i]);
				}
			}
		} 
		fprintf(eng,"\n%d; %s; %d; %d; %d;",n[t],a[t],b[t],d[t],c[t]);
	}
	fclose(eng);
	spn = fopen("E:\\(PRF192)Programming Fundamentals\\TEXT\\SPN.txt","w");
	int tmp1=0;
	char q1[50][1000];
	printf("\n%d",spn);
	for(int t=20;t<40;t++){
		for (int i=20; i<40;i++){
			for(int j=20; j<40;j++){
				if (n[i]<n[j]){
					tmp1=n[i];
					n[i]=n[j];
					n[j]=tmp1;
					
					tmp1=b[i];
					b[i]=b[j];
					b[j]=tmp1;
					
					tmp1=d[i];
					d[i]=d[j];
					d[j]=tmp1;
					
					tmp1=c[i];
					c[i]=c[j];
					c[j]=tmp1;
					
					strcpy(q1[i],a[i]);
					strcpy(a[i],a[j]);
					strcpy(a[j],q1[i]);
				}
			}
		}
		fprintf(spn,"\n%d; %s; %d; %d; %d;",n[t],a[t],b[t],d[t],c[t]);
	}fclose(spn);
}
