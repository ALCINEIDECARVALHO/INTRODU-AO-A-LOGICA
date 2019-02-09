#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	     	      int num;
	     	      int m,c,d,u;
	     	      
	     	      printf("Informe um numero\n");
	     	       scanf("%d",&num);
	     	       
	               m=num/1000;
			 c=num%1000/100;
			 d=num%100/10;
			 u=num%10;
			 
			 printf(" O numero invertido e:%d%d%d%d\n",u,d,c,m);
			 
			 system("pause");    	       
	return 0;
}
