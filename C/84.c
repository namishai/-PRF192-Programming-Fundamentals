#include <stdio.h>
#include <windows.h>
int main() {
    int a[100],n;
    int tmp;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("A[%d]=",i); scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i]<a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for (int i; i < n; i++){
        printf("\n%d",a[i]);
    }
    system("pause");
}
