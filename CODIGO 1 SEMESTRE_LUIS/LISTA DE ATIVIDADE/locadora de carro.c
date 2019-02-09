#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                  
                              float km;
                              float dias;
                              float desconto;
				  float valortotal;
				  
				  printf("Informe a quantidades de dias e a quilometragem rodada\n");
				    scanf("%f" "%f", &dias,&km);
				    
				    valortotal=((30.00*dias)+(km*0.01));
				    desconto=valortotal-(valortotal*0.10);
				    
				 printf("O valor total que ser\240 pago \202  R$%.2f,com o desconto ficar\240 R$%.2f\n",valortotal,desconto);  
				 
		 system("pause");		 
				    
				    
				    
                          
	return 0;
}
