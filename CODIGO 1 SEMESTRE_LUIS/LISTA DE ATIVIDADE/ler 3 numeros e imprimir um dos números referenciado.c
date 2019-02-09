#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                int num,ndois,ntres;

                         printf("Informe tr\210s n\243meros\n");
                          scanf("%d""%d""%d",&num,&ndois,&ntres);
                          
                        if(num==ndois&&num==ntres) 
		      {
                          printf("\n");
		        printf("1\n");
		        }
		      else if(num!=ndois&&num!=ntres&&ndois!=ntres)
		      {
		      
                          printf("\n"); 
		        printf("2\n");
	                }
		      else if(num==ndois||num==ntres||ndois==ntres)
		       {
                          printf("\n"); 
		        printf("3\n"); 
         	       }
         	       
         	       system("pause");
	return 0;
}
