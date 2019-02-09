#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	             int num,soma;
	             
	               do{
		      
	                  printf ("Informe o n\243mero\n");
	                    scanf("%d",&num);
	                    
	                  soma=soma+num;
	                
	         }
	             while(num!=0);
		    
		     printf ("O somat\242rio dos n\243meros digitados  \202:%d\n",soma);
		     
		     system("pause");
		  		  
	return 0;
}
