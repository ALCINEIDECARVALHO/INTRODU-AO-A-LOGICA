#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {           float a,b,area1,area2;

                      printf("Informe os valores dos raios do primeiro e segundo circulo\n");
                       scanf("%f""%f",&a,&b);
                       
                       area1=(3.14*(a*a));
                       area2=(3.14*(b*b));
                       
                     if(area1<area2)
			 printf("A area maior \202 do segundo circulo medindo %.2f\n",area2);
			else if(area1>area2)
			 printf("A area maior \202 do primeiro circulo medindo %.2f\n",area1);  
			else if(area1==area2)  
			 printf("Os circulos possuem a mesma area,sendo %.2f\n",area1);  
			 
		 system("pause");	 
	return 0;
}
