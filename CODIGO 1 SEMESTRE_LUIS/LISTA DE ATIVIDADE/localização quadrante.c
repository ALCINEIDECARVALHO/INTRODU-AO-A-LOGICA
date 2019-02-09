#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                 int x,y;

                    printf("Informe as coordenadas (X,Y)\n");
                     scanf("%d""%d",&x,&y);
                     
                     if(x>0&&y>0)
		     printf("Primeiro quadrante\n");
		   else if(x<0&&y>0) 
		     printf("Segundo quadrante\n"); 
		   else if(x<0&&y<0)  
		    printf("Terceiro quadrante\n"); 
                     else if(x>0&&y<0)
		     printf("Quarto quadrante\n"); 
		   system("pause");   

                      
             	return 0;
}
