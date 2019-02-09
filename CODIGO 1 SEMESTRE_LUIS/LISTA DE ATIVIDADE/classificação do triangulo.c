#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {         float a,b,c;

                   printf("Informe o comprimentos dos lados do tri\203ngulo\n");
                    scanf("%f""%f""%f",&a,&b,&c);
                    
                   if (a!=b&&a!=c&&b!=c) 
                         printf("Tri\203ngulo escaleno\n");
                   else if(a==b&&a!=c|| a==c&&b!=a||a!=b&&b==c)  
		   printf("Tri\203ngulo is\242sceles\n");   
                   else if (a==b&&a==c&&b==c) 
		  printf("Tri\203ngulo  equil\240tero\n");
		  
		 system("pause");   
	return 0;
}
