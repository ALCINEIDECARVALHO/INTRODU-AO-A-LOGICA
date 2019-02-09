#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {  int dividendo;
              int divisor;
              int quociente;
              int resto;

              
              printf("Informe o dividendo\n");
                scanf("%d",&dividendo);
              printf("Informe o divisor\n");
                scanf("%d",&divisor);
                
             do {
	      
		quociente= dividendo/divisor;
		resto=dividendo-quociente*divisor;
		
		}while(resto<0); 
			
	printf ("%d %d ",quociente,resto);			
	
	return 0;
}
