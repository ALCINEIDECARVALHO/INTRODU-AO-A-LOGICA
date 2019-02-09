#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {             float salario,soma,media,cont,menor,maior;
                              soma=media=cont=0;
                              maior=INT_MIN;
                              menor=INT_MAX;
                              

                        do{
                        	  printf("Informe os salarios\n");
                        	    scanf("%f",&salario);
                        	    
                        	    soma=soma+salario;
                        	    cont=cont+1;
                        	    media=soma/cont;
                        	    
                        	   if (salario>maior)
                                   maior=salario;
                              else if (salario>0 &&salario<menor)  
			         menor=salario;
                        	    
		      }
		      
		      while(salario!=0);
		      
		        
                              
		      
		        printf("A m\202dia de salario \202:R$%.2f\n",media);
		        printf("O menor salario \202:%.2f e o maior salario \202:%.2f\n",menor,maior);
		        
		        system("pause");
	return 0;
}
