#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 # define TAM 10
 
int main() {   int vetor [TAM];
                int par;
                int i;
                
                for(i=0;i<TAM;i++){
		  		  
                  printf("Informe os elementos\n");
                  scanf("%d",&vetor[i]);
		      
		       if(vetor[i]%2==0)
                       par++;                  
           }
        printf("S\306o elementos do array %d n\243meros pares\n",par++);   
        
        system("pause");
		    
	return 0;
}
