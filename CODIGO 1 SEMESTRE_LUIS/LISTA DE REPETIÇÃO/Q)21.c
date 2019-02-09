#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {        char sexo;
                     int contr,contb,conts;
                       contr=contb=conts=0;


                  do {
                  	printf("Informe a sexo dos alunos\n");
                  	  scanf("%c",&sexo);
                  	  
                  	  fflush(stdin);
                  	if ( sexo== 'F'|| sexo=='f')
			   contr=contr+ 1;
			  fflush(stdin);
			  
			if(sexo=='m'||sexo=='M')
			   contb=contb+1;
			   fflush(stdin);
			   
                           if((sexo!='m')&&(sexo!='f')&&(sexo!='M')&&sexo!='F')
			   conts=conts+1;      
		}
		
		while( sexo!='z');
		   printf("O n\243meros de alunos \202: %d .O numeros de alunas \202: %d. N\243meros de digita\207\745es erradas \202: %d \n",contb,contr,conts);

                   system("pause");

	return 0;
}
