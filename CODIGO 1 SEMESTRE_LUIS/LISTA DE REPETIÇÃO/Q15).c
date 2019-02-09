#include <stdio.h>
#include <stdlib.h>
#define TAM 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {      
                       char tamanho;
                       int contP,contM,contG,contGG,i;
                       contP=contM=contG=contGG=0;
                       
                       for(i=0;i<TAM;i++)
                       {
                       	fflush(stdin);
                          printf("Informe o  tamanho das camisas: ");
                            scanf("%c",&tamanho);
                            
                        if(tamanho=='P'||tamanho=='p')
                            contP=contP+1;
                        if(tamanho=='M'||tamanho=='m')
                            contM=contM+1;
                        if(tamanho=='G'||tamanho=='g')
                            contG=contG+1;
	                if(tamanho=='H'||tamanho=='h') //coloquei H no lugar do GG porque char é somente um caractere,se usa-se GG teria que mudar o tipo da variavel para string.
                            contGG=contGG+1;
                            
		     }
		     
                       printf(" Existem %d camisas tamanho P\n",contP);
                       printf(" Existem %d camisas tamanho M\n",contM);
                       printf(" Existem %d camisas tamanho G\n",contG);
                       printf(" Existem %d camisas tamanho GG\n",contGG);
                       
                       system("pause");
	return 0;
	
	
}
