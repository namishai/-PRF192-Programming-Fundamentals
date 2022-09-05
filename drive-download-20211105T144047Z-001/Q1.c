#include <stdio.h>
#define pi 3.14

int main()
{
	double r;
	double area;
	scanf("%lf", &r);
	area = r * r * pi;
	printf("%.2lf", area);
}
