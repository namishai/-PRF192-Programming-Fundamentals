#include<stdio.h>
#include<conio.h>
int main()
{    
    int a[50];
    int i;
    
    for(i=0;i<50;i++)
    {
        scanf("%d",&a[i]);
    }    
    printf("\nMang vua nhap la:");
    for(i=0;i<50;i++)
    {
        printf("%5d",a[i]);
    }
    getch();
}

