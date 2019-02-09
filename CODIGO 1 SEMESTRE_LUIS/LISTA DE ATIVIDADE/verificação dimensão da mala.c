#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {       
                    float largura,comprimento,altura;
                    
                    printf("Informe a largura,comprimento e altura da mala\n");
                       scanf("%f" "%f" "%f",&largura,&comprimento,&altura);
                    
		  if(largura<=45&&comprimento<=56&&altura<=25)
		    printf("Mala aceita\n");
		    
		  else 
		    printf("Mala n\706o aceita\n");
		    
		  system("pause");      
	return 0;
}
