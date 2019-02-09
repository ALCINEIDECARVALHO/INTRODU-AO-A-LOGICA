#include <stdio.h>
#include <stdlib.h>
#define TAM 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main()
{
                 float num, menor = INT_MAX, i=0;
  
                  for( i = 0; i < TAM; i++ ){
    
                   printf("Digite um numero:");
                     scanf("%f",&num);
     
               if(num < menor) 
                  menor = num;
    
  }

  printf (" O maior valor \202: %.2f\n",menor);
  
  system("pause");
  
  return 0;
  
}
