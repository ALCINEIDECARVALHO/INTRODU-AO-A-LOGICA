#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                  float  massa;
                              float altura;
                              float imc;
                              
                              printf(" Informe a massa corporea e a altura da pessoa\n");
                               scanf("%f %f",&massa,&altura);
                               
                               imc=massa/altura;
                               
                            printf("\n");
				
				printf ("O indice de massa corporea e %.2f\n",imc);
				
				system("pause");   
	return 0;
}
