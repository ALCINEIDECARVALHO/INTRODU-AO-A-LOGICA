#include <stdio.h>
#include <stdlib.h>
#define TAM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                 float salario,vt,vr,i;

                       for(i=0;i<TAM;i++){
                        printf("Informe o valor do salario\n");
		       scanf("%f",&salario);
		       
		        	vt=salario*0.02;
		        	vr=salario*0.03;
		      
		      printf("O funcionario ter\240 o desconto de vale transporte de %.2f e vale refei\207\706o de %.2f\n",vt,vr);
		        	
		     }
                       
                        system("pause");     
			   
	return 0;
}
