#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {      float num,media,soma,cont;
                          media=soma=cont=0;

                  do{
                  	
                  	printf("Informe os numeros\n");
                  	   scanf("%f",&num);
                  	  
			  soma=soma+num;
			  cont=cont+1;
			  media=soma/cont;
		}
		
		while(num!=0);
		  printf("A m\202dia dos n\243meros lidos \202:%.2f\n",media);
		  
		  system("pause");
	return 0;
}
