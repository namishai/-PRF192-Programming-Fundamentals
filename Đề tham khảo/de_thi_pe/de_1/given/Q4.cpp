#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double triangleArea(double a, double b, double c)
 { // Write your statements here
	
	
   return 0; //This statement must be changed 
  }

int main() // DO NOT EDIT THE main FUNCTION
{system("cls");
  printf("\nTEST Q4 (2 marks):\n");
  double a, b, c, s;
  printf("Enter a = "); scanf("%lf",&a);
  printf("Enter b = "); scanf("%lf",&b);
  printf("Enter c = "); scanf("%lf",&c);
  s = triangleArea(a,b,c);
  printf("Area = %.2f\n",s);
  printf("\nOUTPUT:\n");
  printf("%.2f\n",s); 
  printf("\n");
  system ("pause");
  return(0);
}
