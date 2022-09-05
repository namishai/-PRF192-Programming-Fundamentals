#include <stdio.h> 
void line(); // Khai bao prototype 
void line()// Ham in 1 dong dau
{ 
int i; 
for(i = 0; i < 14; i++) 
printf("* "); 
printf("\n"); 
} 
main() 
{ 
line(); 
printf("* Chuc mung nam moi 2020! *\n"); 
line(); 
}

