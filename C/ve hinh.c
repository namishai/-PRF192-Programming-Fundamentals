#include<stdio.h>
int main()
{
    int n,i,j;
    n=7 ;
    for(i=0;i<=2*n;i++) printf("#");
    printf("\n");
    for(i=1;i<2*n;i++,printf("\n"))
    for(j=0;j<=2*n;j++)
    {
        if(j==0||j==2*n)printf("#");
        else if(i==j||i+j==2*n) printf("#");
        else printf(" ");
    }
    for(j=0;j<=2*n;j++) printf("#");
} 

