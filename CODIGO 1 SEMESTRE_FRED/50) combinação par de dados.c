#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	     int dado1;
	     int dado2;
	     int num;
	     
	     printf("Informe um numero\n");
	       scanf("%d",&num);
	     
	     for(dado1=1;dado1<=6;dado1++)
               for(dado2=1;dado2<=6;dado2++)
	             if(dado1+dado2==num) 
	            printf ("%d--%d\t\n",dado1,dado2);
	            
	         system("pause");   
	
	
	
	return 0;
}
