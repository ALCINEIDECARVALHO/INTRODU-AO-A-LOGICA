#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                     float valorgasto;
                                 float valortotal;
                                 float garcom;
                                 
                                 printf("Informe o valor que foi gasto\n");
                                   scanf("%f",&valorgasto);
                                   
                                 garcom=valorgasto*0.10;
                                 valortotal=valorgasto+garcom;
				      
				    printf("O valor gasto foi R$%.2f,o valor do servi\207o R$%.2f,totalizado R$%.2f\n",valorgasto,garcom,valortotal);
				    
				    system("pause");    
	return 0;
}
