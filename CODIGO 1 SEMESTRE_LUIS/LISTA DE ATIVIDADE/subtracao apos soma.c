#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {             float a,b,c,d;
                         float soma,subtracao;
                         
                         printf("Informe dois numeros \n");
                            scanf("%f %f",&a,&b);
                            
                            soma=a+b;
                            
                         printf("O valor da soma foi %.2f \n",soma);
                         printf("\n");
                         
                         printf("Informe o terceiro numero. \n");
                          scanf("%f",&c);
                          
                         subtracao=soma-c;
                         printf("O resultado foi %.2f \n",subtracao);
                         
                         system("pause");
                         
	return 0;
}
