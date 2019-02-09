#include <stdio.h>
#include <stdlib.h>
# define TAM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {            int i;
                        float media,soma,num;

                       for(i=0;i<TAM;i++){
                       	printf("Informe os numero\n");
                       	 scanf("%f",&num);
                       	 soma=num+soma;
                       
					   }
                        media=soma/TAM;
                         printf(" A soma foi %.2f e a media foi %.2f",soma,media);    
                             
                       system("pause");                                 
                            
                              
                              
	return 0;
}
