#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {  
                  char email[]= "alcineide.a@hotmail.com";
                  char senha[]= "casa";
                  char senha2[30];
                  int cont=0;
                  
                 
                   
                 do 
	          {
	          	
	                  printf("Email: %s\n",email);
                           printf("Senha: ");
                           gets(senha2);
			
			if (!strcmp(senha,senha2)==0){
		            printf("Senha incorreta\n");		
			   cont++;			
			}
			
	     }
                  
                 while (!strcmp(senha,senha2)==0);
                   printf("Senha correta,voc\210 errou a senha %d vezes",cont++);
	
	system ("pause");
	           
	return 0;
}
