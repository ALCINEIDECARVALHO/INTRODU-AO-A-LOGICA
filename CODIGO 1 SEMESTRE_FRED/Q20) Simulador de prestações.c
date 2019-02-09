#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	     float valormercadoria;
	     float valorentrada;
	     int valorparcela1;
	     float valorparcela2;
	     
	     printf("Informe o valor da mercadoria\n");
	      scanf("%f",&valormercadoria);
	   
	   
	     valorparcela1=valormercadoria/3;
	     
	     valorentrada=valormercadoria - 2* valorparcela1;
	     
	     valorparcela2=valorparcela1;
	     
	     
	     printf("O valor da entrada eh R$ %.2f,da primeira parcela eh R$ %d e a segunda parcela eh R$ %.2f\n",valorentrada,valorparcela1,valorparcela2);
	     
	     system("pause");
	   
	   
	   
	   
	   
	      
	    /*if (valormercadoria%3==0)  
	      {
	      valorentrada=valormercadoria/3;
	      valorparcela1=valorentrada;
	      valorparcela2=valorentrada;
            }
	    else  
	     {
	     valorentrada=valormercadoria/3+valormercadoria%3;
	     valorparcela1=valormercadoria-valorentrada;
	     valorparcela2=valorparcela1;}*/
	     
	     
	     
	     
	     
	     
	     
	     
	     
	return 0;
}
