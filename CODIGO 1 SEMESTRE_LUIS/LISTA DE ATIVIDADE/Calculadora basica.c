#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {             float a,b;
                         float soma,subtracao,divisao,multiplicacao;
                         
                         printf("Informe os dois numeros \n");
                           scanf(" %f %f",&a,&b);
                           
                         soma=a+b;
			    subtracao=a-b;
			    divisao=a/b;
			    multiplicacao=a*b;
			    
			    printf("\n");
			    
			    printf("A calculadora mostrou os seguintes resultados: soma= %.2f,subtracao= %.2f, divisao= %.2f, multiplcacao= %.2f \n",soma,subtracao,divisao,multiplicacao);
			    
			    system("pause");
                         
	return 0;
}
