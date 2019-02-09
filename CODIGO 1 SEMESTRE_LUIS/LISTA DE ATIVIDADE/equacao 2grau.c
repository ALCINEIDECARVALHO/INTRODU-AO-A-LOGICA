#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                  float a,b,c,x1,x2,delta,sqrtdelta;

                               printf("Informe os valores de a,b e c\n");
                               scanf("%f" "%f" "%f",&a,&b,&c);
                               
                               delta=(b*b)-(4*a*c);
                               sqrtdelta=sqrt(delta);
                               
                               if(delta>=0) {
				         x1=(-b+sqrtdelta)/2;
				         x2=(-b-sqrtdelta)/2;
				    printf(" O valor de delta  e sua raiz \202:%.2f e  %.2f,a primeira raiz \202:%.2f e a segunda raiz \202:%.2f",delta,sqrtdelta,x1,x2);     
				   
				   }
				  else if(delta<0) {
				         
				    printf(" N\706o existe raizes reais\n");     
				   
				   }
				  
				 
				  system("pause");
                               
                               
                               

	return 0;
}
