#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {      char frase[45];

                printf("Informe uma string\n");
                   gets(frase);
                
	       printf("Reescrevendo a string: %s\n",strlwr(frase));
	       
	       system ("pause"); 
	return 0;
}
