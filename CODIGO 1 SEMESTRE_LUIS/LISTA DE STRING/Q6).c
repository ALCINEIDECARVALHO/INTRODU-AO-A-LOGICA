#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {            char string[30];
                        char string1[]= "enter";


                    do {
                    	printf("Informe uma string\n");
                    	  gets(string);
                    	  
		  }

		 while(!strcmp(string,string1)==0) ;
		 
		 
		 system("pause");
	return 0;
	
	
}
