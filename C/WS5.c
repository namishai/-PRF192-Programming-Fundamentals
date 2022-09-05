#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>	
#include "limits.h"

int intputN() ;//Input 0 < n < 20;
void intputArr(int n,int a[]); //Intput n elements of array A
void showArr(int n, int a[]);// Show all elements of array A
void sort(int n,int a[], char c) ;// Sort array A c=0 Ascending; C=1 Descending
int check_x_in_Arr(int x, int n, int a[]); //return 0 if x not in array A, else return first position of x in array A.
void insert_x_to_Arr(int x, int n, int a[], int k);// Insert x into array A but keep A sorted
void delete_x(int x, int* n,int a[], int all);//all = 0 delete one x in array A. all=1 delete all x in array A
void  staticArr(int n, int a[]);//statistic A has how many different elements, how many times each element appears. 


int main(){
	int sel,vt,all;
	int n,a[20],x;
	char c;
	do{
		system("cls");
		printf("\n\t\tMenu");
		printf("\n\t1. Input N (0<N<20):");
		printf("\n\t2. Input array:");
		printf("\n\t3. Show array:");
		printf("\n\t4. Sort Array whith order A to Z");
		printf("\n\t5. Sort Array whith order Z to A");
		printf("\n\t6. Insert x to array");
		printf("\n\t7. Delete x in array");
		printf("\n\t8. Delete all x from array");
		printf("\n\t9. Static array");
		printf("\n\t\0. Quit");
		printf("\n\tChoose number:");scanf("%d",&sel);
		switch (sel){
			case 1:
				n=intputN();
				break;
			case 2:
				intputArr(n,a);
				break;
			case 3:
				printf ("\nArray was inputted:");
				showArr(n,a);
				printf("\n");
				system("pause");
				break;
			case 4:
	 			sort(n,a,0);
	 			printf("\nAfter sort arr is :");
				showArr(n,a);
				printf("\n");
				system("pause");
				break;	
			case 5:
	 			sort(n,a,1);
	 			printf("\nAfter sort arr is :");
				showArr(n,a);
				printf("\n");
				system("pause");
				break;
			case 6:
				printf("Input X:");scanf("%d",&x);
				insert_x_to_Arr(x,n,a,vt);
				printf ("After input X:");
				showArr(n,a);
				printf("\n");
				system("pause");
				break;
			case 7 :
				printf("Which :");scanf("%d",&x);
				delete_x(x,&n,a,0);
				showArr(n,a);
				printf("\n");
				system("pause");
				break;
			case 8 :
				printf("Which :");scanf("%d",&x);
				delete_x(x,&n,a,1);
				showArr(n,a);
				printf("\n");
				system("pause");
				break;
			case 9 :
				staticArr(n,a);
				system("pause");
				printf("\n");
				break;

		}
		 
	} while (sel!=0);
}
//Input 0 < n < 20;
int intputN() {	
	int n;
	do{
		printf("Input N (0<N<20):");scanf("%d", &n);
	} while (n<0 || n>20);
return n;
}
//Intput n elements of array A
void intputArr(int n,int a[]) {
	printf("\nInput array:");
	for (int i = 0; i < n; i++){
		printf ("\nA[%d]=", i);scanf("%d", &a[i]);
	}
}
// Show all elements of array A
void showArr(int n, int a[]){
//	printf ("so N la : %d",n); 
	for (int i=0; i < n; i++){
		printf ("%d, ",a[i]);
	}
}
// Sort array A c=0 Ascending; C=1 Descending
void sort(int n,int a[], char c){
	int max=0 ;
	for (int i = 0; i < n ; i++){
		for (int j = 0; j < n;j++){
			if (c==0){
				if (a[i]<a[j]){
					max=a[i];
					a[i]=a[j];
					a[j]=max;
				}
			}	
			else {
				if (a[i]>a[j]){
					max=a[i];
					a[i]=a[j];
					a[j]=max;
				}
			}
		}
	}
}
//return 0 if x not in array A, else return first position of x in array A.
int check_x_in_Arr(int x, int n, int a[]){
	for (int i=0; i < n; i++){
		if (x==a[i]){
			return i;	
		}
	}
	return 0;
}
// Insert x into array A but keep A sorted
void insert_x_to_Arr(int x, int n, int a[], int vt){
	printf ("Where you want to input X:");
	scanf("%d",&vt);
	int size = sizeof(a)/sizeof(a[0]);
	if (n==size){
		printf("Can not input because Arr is maximum!");
	}
	else {
	n++;
	for(int i=n-1; i>vt; i--){
		a[i]=a[i-1];
	}
	a[vt]=x;
	} 

}

//all = 0 delete one x in array A. all=1 delete all x in array A
void delete_x(int x, int* n, int a[], int all){
	int check =check_x_in_Arr(x, *n, a);
	if (all==0){
		for(int i=check; i<*n; i++){			
				a[i] = a[i+1];
			}
			*n=*n-1; 	
		}	
	if (all==1){
		int dem=0;
		for (int i=*n-1; i>=0; i--){
			if(a[i]==x){
				dem++;
				for(int j = i; j < *n; j++){
				a[j] = a[j+1];
				}
			}
		}
		*n=*n-dem ;
	}	
}
//statistic A has how many different elements, how many times each element appears. 
void staticArr(int n, int a[]){
	int b[10];
    int x = 1;
    b[0] = a[0];
    for(int i=1; i<n; i++){
        int dem=0;
        for(int j=0; j<x; j++){
            if(a[i] == b[j])
                dem++;
        }
        if(dem == 0){
            b[x] = a[i];
            x++;
        }
    }
    printf("It have %d different elements.\n",x);
	
	for(int i=0; i<n; i++){
    	int dem=1;
        if(a[i] != -1){
		    for(int j=i+1; j<n; j++){
        	   if(a[i]==a[j]){
			       dem ++;
			       a[j]=-1;
		       }
	       }
	       b[i]=dem;
		} 
    }
	for(int i=0; i<n; i++){
         if(a[i] != -1){
        	printf("%d element appears %d time.\n",a[i],b[i]);
		} 
         
    }    
}
