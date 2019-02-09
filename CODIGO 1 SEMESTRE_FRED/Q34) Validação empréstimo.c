#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {    
                float rendamensal;
                float valoremprestimo;
                int numeroprestacao;
                float valorprestacao;
                float limiteemprestimo;
                float limiteprestacao;
               
                
                
                printf("Informe o valor da sua renda mensal\n");
                  scanf("%f",&rendamensal);
                printf("Informe o valor do emprestimo\n");
                  scanf("%f",&valoremprestimo);
                printf("Informe o numero de prestacoes que deseja pagar\n");
                  scanf("%d",&numeroprestacao);
                  
                 
		    valorprestacao=valoremprestimo/numeroprestacao;
		    limiteemprestimo=rendamensal*10;
                  limiteprestacao=rendamensal*0.30;
                  
                  
                  
               if(valoremprestimo>=limiteemprestimo&&valorprestacao>=limiteprestacao) 
		 
		   printf("Emprestimo pode ser concedido\n");
		   
		  else 
		  
		  printf ("Emprestimo naum concedido\n");
                  
                  
                
	
	
	
	return 0;
}
