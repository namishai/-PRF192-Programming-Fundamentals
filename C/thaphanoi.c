
#include<stdio.h>
void chuyendia(int n,int cot1, int cot2, int cot3){
    int a=1,b=2,c=3;
	if(n==1){
        printf("\t%d---->%d\n",cot1,cot3);
        return;
    }
    chuyendia(n-1,cot1,cot3,cot2);
    chuyendia(1,cot3,cot2,cot3);
    chuyendia(n-1,cot2,cot1,cot3);
    }
int main(){
    int a=1,b=2,c=3;
	int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    chuyendia(n,a,b,c);
}
