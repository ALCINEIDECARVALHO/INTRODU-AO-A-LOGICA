#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                 float a,b,c;
                             float f1,f2,f3,f4;
				 
				 printf ("Informe os numeros\n");
				  scanf("%f %f %f",&a,&b,&c);
				  
				  f1=(a*b)/c;
				  f2=(a*a)+b+5*c;
				  f3=a*b*c+c+b+(c/3)*5-1;
				  f4=(a*b*c)*(a*b*c)*(a*b*c)/2;
				  
				  printf("\n");
				  printf("o resultado das quatros formulas sao: %.2f,%.2f,%.2f,%.2f\n",f1,f2,f3,f4);
				  
				  system("pause"); 

	return 0;
}
