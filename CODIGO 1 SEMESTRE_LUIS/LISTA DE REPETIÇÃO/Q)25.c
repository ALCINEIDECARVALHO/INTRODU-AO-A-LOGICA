#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {        
                    float altura,media,soma,cont,media1,idade,soma1,cont1;
                      cont=media=soma=0;
                       cont1=media1=soma1=0;
                    
                    
                    do{
                          printf("Informe a idade\n");
                           scanf("%f",&idade);
                           
                           if(idade>0){
			
                            soma1=soma1+idade;
                             cont1=cont1+1;
			media1=soma1/cont1;}
                           
                           printf("Informe a altura\n");
                            scanf("%f",&altura);
                            
                            if(altura>0){
			 
                            soma=soma+altura;
                             cont=cont+1;
			 media=soma/cont;}
                             
		  }
		  
		  while(idade!=0);
		  
		      printf("A medias das idades \202: %.2f e a media da altura \202: %.2f\n",media1,media);
                    
	return 0;
}
