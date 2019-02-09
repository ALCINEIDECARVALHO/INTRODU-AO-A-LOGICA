#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	      char sexo,olhos,cabelos;
	      int cont;
	       cont=0;
	      
	          do{
		 
	         printf("Informe o sexo da pessoa: ");
	            scanf("%c",&sexo);
	             fflush(stdin);
	          printf("Informe a cor dos olhos da pessoa: ");
	            scanf("%c",&olhos);   
	            fflush(stdin);
	          printf("Informe a cor dos cabelos da pessoa: ");
	            scanf("%c",&cabelos);   
	            
	            fflush(stdin);
	            if(sexo=='F'&&olhos=='C'&&cabelos=='L')
	               cont=cont+1;
	            
	          }
	          
	          while(sexo!='B');
	               printf("Existem %d pessoas do sexo feminino com olhos claros e cabelos louros\n",cont);
             

	return 0;
}
