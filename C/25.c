#include <stdio.h>
int main(){
    int i;
	int a,b,c,d,e,f;
	printf (" ") ;
    for(a=1;a<10;a++)
      for(b=0;b<10;b++)
        for(c=0;c<10;c++)    
            for(d=0;d<10;d++)
                for(e=0;e<10;e++)    
                    for(f=0;f<10;f++)
                    {
                    if((a+b+c)==(d+e+f))
                    
                    
                    printf("so can tim la: %d%d%d%d%d%d\n",a,b,c,d,e,f);
                    }
} 
