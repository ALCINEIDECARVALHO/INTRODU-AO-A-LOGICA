#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float litros;
	float precocombustivel;
	float valorpago;
	float valor;
	int tipocombustivel;
	
	
	
	printf("Informe a quantidade de litros de combustivel vendido\n");
	  scanf("%f",&litros);
	  
	printf("Informe o tipo de combustivel\n");
	 scanf("%d",&tipocombustivel);
	 
	 switch(tipocombustivel){
	 	case 1:precocombustivel=2.70;break;
	 	case 2:precocombustivel=1.90;break;
	 }
	    valor=litros*precocombustivel;
	 
	 if(litros<=25&&tipocombustivel==1)
	  {valor*=0.98;
          valorpago=valor;
	  }
	 
	 else if(litros>25&&tipocombustivel==1)
	  { valor*=0.96;
	     valorpago=valor;
	  }
	 
	 else if(litros<=25&&tipocombustivel==2)
	  {valor*=0.97;
	    valorpago=valor;
	  }
	 else if(litros>25&&tipocombustivel==2) 
	 {valor*=0.95;
         valorpago=valor;
	 }
	 
	 printf("O valor a ser pago R$ %.2f",valorpago);
	
	  
	
	  
	
	return 0;
}
