#include <stdio.h>
#include <stdlib.h>
#define TAM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {    
                 float compras,i,bonus;
                 
                 for(i=0;i<TAM;i++)
	        {
	        
                  
                  printf("Informe o valor das compras\n");
		 scanf("%f",&compras); 
                   
                     if(compras<=500000)
                       bonus=compras*0.10;
                     else if (compras>500000)  
                       bonus=compras*0.15;
                  
		printf("O bonus de compra foi %.2f\n",bonus);  
		 
            	}
            	
            	system("pause");

	return 0;
}
