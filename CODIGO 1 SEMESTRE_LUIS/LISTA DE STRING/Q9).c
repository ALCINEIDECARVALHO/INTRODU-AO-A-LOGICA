#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {              char texto[30];
                           int i,cont,c;
                           cont=0;


                   printf("Informe um texto\n");
                       gets(texto);
                       
                      
                     for(i=0; texto[i] != '\0'; i++){

                      if(texto[i]==' ')

		       cont++;
                      
          }
                 printf(" A quantidade de palavras \202 : %d\n",cont+1);
                 
                 system("pause");


    return 0;
}     
                       
                       
                       
     
