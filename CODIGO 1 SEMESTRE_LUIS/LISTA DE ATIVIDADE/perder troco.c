#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                    int notas;
                                int troco;
				    int quatcafe;
				    
				    printf("Informe a quantidade de dinheiro que colocou na maquina\n");
                                    scanf("%d",&notas);
				        
				    if (notas%5>0)
				     printf("valor invalido\n");
				    
				    else 
				      { quatcafe=notas/7;
                                     troco=notas%7;
                                     
                                      printf(" Voc\210 beber\240 %d xicaras de caf\202 e peder\240 R$ %d de troco\n",quatcafe,troco);
								    }			     
				  
			system("pause");	       
	return 0;
}
