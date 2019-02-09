#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {      
	        char nome[45];
	        char nome2[45];
	        
	        printf("Informe a primeira string:  ");
	          gets(nome);
	         printf("Informe a segunda string:  ");
		   gets(nome2);
		   
		strcpy(nome,nome2);
		
		printf("%s %s \n",nome,nome2);
		
		system ("pause");
	return 0;
}
