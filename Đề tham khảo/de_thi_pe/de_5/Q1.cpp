#include <stdio.h>
void swap(int &n1, int &n2){
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
int main(){
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	
	if(a < b){
		swap(a,b);
	}
	if(a < c){
		swap(a,c);
	}
	if(a < d){
		swap(a,d);
	}
	if(b > c){
		swap(b,c);
	}
	if(b > d){
		swap(b,d);
	}
	printf("After processing: a = %d, b = %d",a,b);
	

}

