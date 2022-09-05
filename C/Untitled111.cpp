#include <stdio.h>

int Input();
int Output(int input, int j);

int main(){
	int loop = Input();
	for(int i = 0; i< loop ; i++){
		int n;
		n = Input(); 
		int k;
		k = Input();
		int output;
		output = Output(n,k);
		printf("%d",output);
	}
} 

int Input(){
	int n;
	scanf("%d", &n);
	return n;
}

int Output(int input, int j){
	int count = 0;
	while(input){
		input = input - j;
		count++;
	}
	return count;
}
