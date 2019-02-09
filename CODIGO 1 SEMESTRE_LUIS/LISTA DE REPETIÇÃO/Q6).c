#include <stdio.h>
#include <stdlib.h>
#define TAM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {             float num,maior,menor,i;
                          maior=INT_MIN;
                          menor=INT_MAX;
                          
                          for(i=0;i<TAM;i++)
		        {
                            printf("Informe os numeros: ");
                             scanf("%f",&num);
                              if (num>maior)
                                   maior=num;
                              else if (num<menor)  
			         menor=num;
		   }
		         printf("O menor numero \202:%.2f e o maior \202:%.2f\n",menor,maior);
		         
		        system("pause"); 
                             
	return 0;
}
