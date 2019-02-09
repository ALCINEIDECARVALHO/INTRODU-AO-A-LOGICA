#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {             int voto,cont1,cont2,cont3,cont4,cont5,cont6,cont7;
                         float porcetagem5,porcetagem6,soma;
                             cont1=cont2=cont3=cont4=cont5=cont6=cont7=0;

                   do 
		 {
                   	printf("Informe seu voto\n");
                   	  scanf("%d",&voto);
                   	          		 	 	
			if(voto==1){
			        
		            cont1=cont1+1;}
                           else if(voto==2)   {
			
		            cont2=cont2+1; }
                           else if(voto==3) {
			
		            cont3=cont3+1;}
			else if(voto==4){
			
		            cont4=cont4+1;} 
			else if(voto==5){
			
			   cont5=cont5+1;}
			else if(voto==6){
			
			  cont6=cont6+1;}
			
				 
			
			
			            
	          }
                   while(voto!=0);
                   
                       soma=cont1+cont2+cont3+cont4+cont5+cont6;
                       porcetagem5=cont5/soma;
                       porcetagem6=cont6/soma;
                               
                    printf("O total de voto do candidato 1 foi: %d\n",cont1);
		  printf("O total de voto do candidato 2 foi: %d\n",cont2); 
		  printf("O total de voto do candidato 3 foi: %d\n",cont3);
		  printf("O total de voto do candidato 4 foi: %d\n",cont4);
		  printf("O total de voto do nulos foi: %d\n",cont5);
		  printf("O total de voto do branco foi: %d\n",cont6);
	           printf("O total de votos foi: %.2f\n",soma);
		  printf("O total da porcetagem de votos nulos sobre total de votos: %.2f\n",porcetagem5);
                    printf("O total da porcetagem de votos brancos sobre total de votos: %.2f\n",porcetagem6);
                    
                    system("pause");
		  
		   
		   
		   
		   
	return 0;
}
