#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {   
                   int canal;
                   
                   printf("Informe o canal de televis\706o\n");
                     scanf("%d",&canal);
                     
                   switch(canal){
		     
		       case 2:
		           printf("SBT\n");
		           break;
			case 4:
			    printf("BAND\n");
			    break;
			case 6:
			    printf("REDETV!\n");
			    break;
			case 9:
			   printf("RECORD\n");
			   break;
		       case 13:
			   printf("GLOBO\n"); 
			   break;
			default:
			   printf("Canal invalido\n");
		    }
			   
			 system("pause");               	
			     
	return 0;
}
