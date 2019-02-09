#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {       char string[30];
                   char string1[30];
                   
                   
                   printf("Informe a primeira string.\n");
                      gets(string);
                      
                   printf ("Informe a segunda string\n");
		    gets(string1);
		    
		 
		  if (strcmp(string,string1)==0)
		     printf("String s\706o iguais\n");
		     
		  else 
		    printf("String diferentes\n");
		    
		    system("pause"); 
		       
                   
		    
	return 0;
}
