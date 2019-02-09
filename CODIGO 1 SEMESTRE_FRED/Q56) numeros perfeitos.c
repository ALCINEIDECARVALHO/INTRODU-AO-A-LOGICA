#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { 
                     int num;
                     int soma;
                     int i;
                     
                     printf ("Informe o n\243mero\n");
                      scanf("%d" ,&num);
                     
                     for(i=1;i<num;i++)
			   if (num%i==00)
                         soma=soma+i;
                         
      
                         
                     if (soma==num)
			  printf("%d, o n\243mero  \202 perfeito\n",num);
			  
			else
			  printf("%d, este n\243mero n\306o \202 perfeito\n",num);
			  
	  
			  
			  
			system("pause");
	
	
	return 0;
}
