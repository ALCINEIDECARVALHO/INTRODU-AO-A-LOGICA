#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {             char nome[30];
                         int i,tam;
                  
                  printf("Informe um nome\n");
                    gets(nome);
                    
                  tam=strlen(nome); 
                    
                 for(i=tam;i>=0;i--)   
                  printf("%c",nome[i]);
                  
                  
                  
	return 0;
}
