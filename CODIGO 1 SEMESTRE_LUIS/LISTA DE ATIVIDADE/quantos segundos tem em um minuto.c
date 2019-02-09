#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {        int min;
                    int seg;
		      
		      printf("Informe os minutos \n");
		         scanf("%d",&min);
			  
			  seg=60*min;
		      printf("\n");	   
		      printf("Em %d minutos existem %d segundos \n",min,seg);
		      
		      system("pause"); 
	return 0;
}
