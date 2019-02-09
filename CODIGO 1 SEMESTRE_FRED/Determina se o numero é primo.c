#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
               int num;
		 int i;
		 int cont;
		 
		 printf("Informe um numero\n");
		         scanf("%d",&num);
		   	    
		 
		  for(i=1 ; i<=num ; i++){
		  	if(num%i==0 && i!= num || num==1)
		  	    cont=cont+1;		     
		       }
		  	
			if (cont==2)  	
	  		printf ("O n\243mero \202 primo\n");
	  			  
		 	else 
	 		 printf ("O n\243mero n\306o \202 primo\n");
		 				  
		  system("pause");
				   	 	
	return 0;
}
