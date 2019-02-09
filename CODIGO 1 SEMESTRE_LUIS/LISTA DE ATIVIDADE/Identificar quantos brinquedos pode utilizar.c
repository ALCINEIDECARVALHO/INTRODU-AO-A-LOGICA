#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                 float altura;
                             int idade;
                             
                         printf("Informe a altura e a idade das crian\207as\n");
		         scanf("%f""%d",&altura,&idade);
			
		     if(altura>=1.5&&idade>=12)
		        printf("Pode andar na Barca Viking\n");
		     if(altura>=1.4&&idade>=14)
		         printf("Pode andar no Elevador of Death\n");  
	              if (altura>=1.7&&idade>=16)		 
		     	printf("Pode andar no Final Killer\n"); 
			     
	                system("pause");		         
	return 0;
}
