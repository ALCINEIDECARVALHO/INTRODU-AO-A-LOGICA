#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {              
                     int dias,adicional;
                     float km,valortotal;
                     
                      
                     
                     printf("Informe a quantidade de dias e a quilometragem total\n");
                        scanf("%d""%f",&dias,&km);
                        
                     if (km<=100.99)  {
                         valortotal=dias*90;
                         printf("O valor total ser\240 R$%.2f\n",valortotal);
                       }
                     else if(km>100.99) {
                    	
                            adicional=(km-100);
                     	valortotal=((dias*90)+(adicional*12));
				printf("O valor total ser\240 R$%.2f\n",valortotal);
                     	
  		       }  
			      
                     system("pause");
	return 0;
}
