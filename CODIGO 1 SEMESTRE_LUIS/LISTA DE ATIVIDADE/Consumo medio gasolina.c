#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                      float distancia;
                                  float litros;
                                  float consumo;
                                  
                                  printf(" Informe a distancia percorrida e o total de combustivel gasto \n");
                                    scanf("%f %f",&distancia,&litros);
                                    
                                    consumo=distancia/litros;
                                    
                                   printf("O consumo medio de gasolina foi de %.2f \n",consumo);
					
					system("pause"); 
	return 0;
}
