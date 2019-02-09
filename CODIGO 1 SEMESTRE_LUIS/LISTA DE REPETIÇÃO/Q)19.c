#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {        float num,media,soma,cont;
                         cont=media=soma=0;

                   do {
                   	
                         printf("Informe os numeros\n");
                            scanf("%f",&num);
                          soma=soma+num;
		        cont=cont+1;
		        media=soma/cont;
		 }
		 
		 while(num!=0);
		   printf(" A media dos n\243meros foi: %.2f, a soma foi: %.2f, a quantidade de numeros lidos foi: %.2f\n",media,soma,cont);
		   
		   system("pause");
	return 0;
}
