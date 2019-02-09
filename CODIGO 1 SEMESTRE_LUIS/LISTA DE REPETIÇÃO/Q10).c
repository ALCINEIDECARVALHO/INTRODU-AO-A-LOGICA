#include <stdio.h>
#include <stdlib.h>
#define TAM 8

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                float pesomaior,pesomenor,alturamaior,alturamenor,idademaior,idademenor,peso,altura,idade,i;
                                  pesomaior=alturamaior=idademaior=INT_MIN;
                                  pesomenor=alturamenor=idademenor=INT_MAX;	

                        for(i=0;i<TAM;i++){
                        	printf("Informe o peso,altura e idade das pessoas\n");
                        	   scanf("%f""%f""%f",&peso,&altura,&idade);
                        	   
                        	if (peso>pesomaior)
			      pesomaior=peso;
                         	if(altura>alturamaior)
		             alturamaior=altura;
			if(idade>idademaior)
			    idademaior=idade;
		         if (peso<pesomenor)
                               pesomenor=peso;
                         	if(altura<alturamenor)
		             alturamenor=altura;
			if(idade<idademenor)
			    idademenor=idade;    
			                
		      }
		      
		      printf("O maior peso \202:%.2f,menor peso: %.2f,maior altura:%.2f,menor altura:%.2f,maior idade:%.2f,menor idade:%.2f",pesomaior,pesomenor,alturamaior,alturamenor,idademaior,idademenor);
		             
	
	          system("pause");
	
	
	return 0;
}
