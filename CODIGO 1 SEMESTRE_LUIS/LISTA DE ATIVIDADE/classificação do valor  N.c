#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {           int n;
                      
                      printf("Informe um numero\n");
                        scanf("%d",&n);
                        
                      if(n%2==0) 
		      printf("PAR\n");
		    if(n%2!=0)
		      printf("IMPAR\n");  
		    if(n>0) 
		       printf("POSITIVO\n");  
		    if (n<0) 
		       printf("NEGATIVO\n");
		    if (n==0)  
		       printf("NULO\n"); 
		       
		    system("pause");      
	return 0;
}
