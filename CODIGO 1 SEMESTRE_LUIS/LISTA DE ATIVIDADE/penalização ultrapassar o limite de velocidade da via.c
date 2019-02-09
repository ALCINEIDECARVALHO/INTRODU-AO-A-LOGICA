#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {             float vvia,vcarro,limite1,limite2;


                      printf("Informe a velocidade m\240xima da via naquele momento\n");
                       scanf("%f",&vvia);
                      printf("Informe a velocidade do carro\n");
                       scanf("%f",&vcarro);
                       
                      limite1=(vvia*0.20)+vvia;
                      limite2=(vvia*0.50)+vvia;
                      
		    
		    if(vcarro>vvia){
		         if(vcarro<=limite1)
		    	 printf("Multa de R$ 85,13, perdeu 4 pontos na carteira\n");
		         else if(vcarro>limite1&&vcarro<=limite2)
			 printf("Multa de R$ 127,69, perdeu 5 pontos na carteira\n");
			else if(vcarro>limite2)
			 printf("Multa de R$ 574,62, perdeu 7 pontos na carteira\n"); 
		   }
		   
		   system("pause");
                                                                            
                       
                
	return 0;
}
