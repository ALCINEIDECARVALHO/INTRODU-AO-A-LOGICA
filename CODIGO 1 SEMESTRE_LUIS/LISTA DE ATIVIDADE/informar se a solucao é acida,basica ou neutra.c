#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {              float ph;

                        printf("Informe o nivel de PH da solu\207\706o\n");
                          scanf("%f",&ph);
                          
                        if(ph==7)
			    printf("Solu\207\706o neutra\n");
			   else if(ph>=0&&ph<7)
			     printf("Solu\207\706o acida\n");  
			   else if(ph>7&&ph<=14)
			     printf("Solu\207\706o b\240sica\n");
			     
			    system("pause");
	return 0;
}
