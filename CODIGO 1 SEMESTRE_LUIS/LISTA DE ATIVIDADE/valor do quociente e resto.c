#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {    int dividendo;
                int divisor;
                int quociente;
                int resto;
                
                printf("Informe o dividendo e o divisor\n");
                   scanf("%d %d",&dividendo,&divisor);
                   
                   quociente=dividendo/divisor;
                   resto=dividendo%divisor;
                   
                printf("O quociente da divisao e %d.O resto e %d \n",quociente,resto);
                
                system("pause");
	return 0;
}
