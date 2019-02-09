#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {     char nome[30];
                 char nome2[30];
                 
                 printf("Informe uma nome:  ");
                   gets(nome);
                 printf("Informe o segundo nome:  ");
                    gets(nome2);
                    
                 printf(" %s\n\n",strcat(nome,nome2));
                 
                 system("pause");
                    
                    
	return 0;
}
