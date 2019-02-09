#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {            int a,b,c,aux;

                      printf("Informe tr\210s numeros\n");
                       scanf("%d""%d""%d",&a,&b,&c);
                      
		     if(a > b)
		     {
                        aux = a;
                        a = b;
                        b = aux;
                         }   
                      if(b > c)
		    {
                       aux = b;
                       b = c;
                       c = aux;
                       }
                       
		     if(a > b)
		     {
                        aux = a;
                        a = b;
                        b = aux;
                       }
            printf("\n%d - %d - %d\n\n",a,b,c); 
            system("pause"); 
	return 0;
}
