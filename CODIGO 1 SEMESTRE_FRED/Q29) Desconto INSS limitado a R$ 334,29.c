#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float salario;
	float desconto;
	
	printf("Informe o salario do funcionario\n");
         scanf("%f",&salario);
         
         desconto= salario* 0.11;
         
	if (desconto>334.29)
	  printf("O salario do funcionario eh %.2f.O desconto de INSS eh R$ 334,29.\n",salario);
	  
	else 
	  printf ("O salario do funcionario eh %.2f.O desconto de INSS eh R$ %.2f\n",salario,desconto); 
	 
 	 system("pause");
	return 0;
}
