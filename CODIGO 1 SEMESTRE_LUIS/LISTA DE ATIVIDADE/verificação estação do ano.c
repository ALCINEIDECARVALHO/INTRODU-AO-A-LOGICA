#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {   
                   int dia, mes;
                   
                   printf("Informe o dia e m\210s\n");
                     scanf("%d""%d",&dia,&mes);
                   
		 if(dia>31)
		   printf("data inv\240lida\n"); 
                   else if(mes==10||mes==11||dia>=21&&mes==9||dia<=20&&mes==12) 
                      printf("Primavera\n");
                   else if (mes==1||mes==2||dia>=21&&mes==12||dia<=20&&mes==3)
		    printf("Ver\706o\n");  
                   else if (mes==4||mes==5||dia>=21&&mes==3||dia<=20&&mes==6)   
                      printf("Outono\n"); 
		 else if (mes==7||mes==8||dia>=21&&mes==6||dia<=20&&mes==9)    	
	             printf("Inverno\n"); 
		 		   
          system ("pause");	 		   
	return 0;
}
