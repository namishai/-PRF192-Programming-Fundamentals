#include <stdio.h>
int main(){
	int a, *c;
	scanf ("%d", &a);
	printf ("a = %d",&a);
	printf ("\na = %d",a);
	
	c = &a;
	c++;
	printf	("\nc = %d", c);
	printf	("\nc = %d", *c);

}
