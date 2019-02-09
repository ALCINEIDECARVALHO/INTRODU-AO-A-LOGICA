#include <stdio.h>
#include <stdlib.h>
#define TAM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	              float i,num,soma,media,cont;
	              soma=0;
	              media=0;
	              
	              for(i=0;i<TAM;i++){
		     
	                printf("Informe os numeros: ");
	                  scanf("%f",&num);
	                    
	                  
	               if(num>0){
               	        soma=soma+num;
	                if(num>0)	
		         cont=cont+1;
			media=soma/cont;	       		        
                   }
		         
		         
          	}
        	             printf("A soma entre os numeros positivos s\706o: %.2f e a m\202dia \202:%.2f\n",soma,media);
        	             
        	             system("pause");
	                 
		         
	              
	return 0;
}
