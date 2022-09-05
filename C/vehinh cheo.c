#include<math.h>
#include<stdio.h>
int main(){
    int n,m;
	scanf("%d%d",&n,&m);
    for(int i = 0 ; i < n ; i++){
    //	printf("*");
    	if (i == n-1){
    		for(int j = 0 ; j < m ; j++){
    				printf("*");
			}
		}else {
    		for(int j = 0 ; j < m -3 ; j++){
    			printf(" ");
			}
    		
    		printf("  *");
		}printf("\n");
	}
}
