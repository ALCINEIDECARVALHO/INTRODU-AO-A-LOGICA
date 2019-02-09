#include <stdio.h>
#include <stdlib.h>
#define TAM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {        float i, num,maior;
                     
                     maior=INT_MIN;
                     num=0;

                      for(i=0;i<TAM;i++)
		    {
                         printf("Informe os numeros\n");
                          scanf("%f",&num);
                         if (num>maior)
                           maior=num;
                        }
                        printf("O maior valor \202: %.2f\n",maior);
		      
		      system("pause"); 
          	
      

	return 0;
}
