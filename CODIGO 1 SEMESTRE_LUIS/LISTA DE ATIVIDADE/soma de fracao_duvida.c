
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {        int num1,den1,num2,den2,soma1,soma2,soma3,soma4;
                       
                       printf("Informe as duas fra\207\744es\n");
                         scanf("%d" "%d""%d""%d",&num1,&den1,&num2,&den2);
                        
		     if(den1==0||den2==0)
		       printf("Fra\207\744oes invalidas\n"); 
                         
                       else if (den1==den2) 
		     {
		         soma1=num1+num2;
		         printf("A soma \202: %d/%d",soma1,den1);
                       }
                       
                       else if(den1!=den2)
		     {
                            soma1=den1*den2;
			 soma2=den1*num2;
			 soma3=den2*num1;
			 soma4=soma2+soma3;
			 
			 printf("A soma \202: %d/%d",soma4,soma1);
			 
			                        	
                          	
                       	
		     }
                         
	return 0;
}
