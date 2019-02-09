#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {        char frase[50];

                 printf("Informe uma frase\n");
                   gets(frase);
                 
	        printf("O tamanho do texto \202: %d \n",strlen(frase));
	        
	        
	        system("pause");
	        
	return 0;
}
