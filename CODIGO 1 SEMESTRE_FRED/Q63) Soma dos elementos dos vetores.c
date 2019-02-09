#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {  
               int vetor1[10];
               int vetor2[10];
               int soma[10];
               int i;
               
               for(i=0;i<10;i++){
                printf("Informe o elemento da posi\207\306o %d:",i);
                 scanf("%d",&vetor1[i]);
                printf("Informe o elemento da posi\207\306o %d:",i);
                 scanf("%d",&vetor2[i]);
                  
                 }
                   
                 for(i=0;i<10;i++){
		   
                  soma[i]=vetor1[i]+vetor2[i];
                 printf("A soma para elemento %d foi: %d \n", i, soma[i]);}
                 
                 system("pause");
                 
                 
	return 0;
}
