#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {    int num,cont,i;
                  cont=0;

            
              do {
              	
              	printf ("Informe os numeros\n");
              	  scanf("%d",&num);
              	  
              	   cont= cont+1;
              }
              while(num!=0);
	        printf("Foram lidos %d n\243meros\n",cont);   
	     
               system("pause");
	       
	return 0;
}
