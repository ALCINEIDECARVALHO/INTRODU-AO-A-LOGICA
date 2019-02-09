#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {     float a,b;

               printf("Informe dois n\243meros\n");
	       scanf("%f""%f",&a,&b);
	       
	     if(a>b)
	     {
	       printf("O valor %.2f \202 maior que %.2f\n",a,b);
	       printf("O valor %.2f \202 menor que %.2f\n",b,a);
               }
	     if (a<b) 
	     {
                printf("O valor %.2f \202 maior que %.2f\n",b,a);
	       printf("O valor %.2f \202 menor que %.2f\n",a,b);
               }    
	      
	     if (a!=b) 
	        printf("O valor %.2f \202 diferente de %.2f\n",a,b);
	        
	     if(a==b) 
	       printf("O valor %.2f \202 igual %.2f\n",a,b); 
	       
	     if(a>=b)   
	       printf("O valor %.2f \202 maior ou igual a %.2f\n",a,b);
	     if(a<=b)
	      printf("O valor %.2f \202 menor ou igual a %.2f\n",a,b);  
	      
	    system("pause");  
	          
	return 0;
}
