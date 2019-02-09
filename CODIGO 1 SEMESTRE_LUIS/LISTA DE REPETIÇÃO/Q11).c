#include <stdio.h>
#include <stdlib.h>
#define TAM 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	             int i,cont,num;
	              cont=0;
	             
	             for(i=0;i<TAM;i++){
	               printf("Informe um numero: ");
	                scanf("%d",&num);
	               if(num<0)
		       cont=cont+1;
                      }
                      
                      printf("Existe %d numeros negativos acima.\n",cont);
                      
                      system("pause");
	return 0;
}
