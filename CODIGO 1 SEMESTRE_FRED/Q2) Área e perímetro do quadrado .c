#include <stdio.h>
#include <stdlib.h>
main() 
{
	float lado;
	float area;
	float perimetro;
	
	printf ("Informe o valor do lado do quadrado\n");
	scanf ("%f", &lado);
	area = lado*lado;
	perimetro = 4*lado;
	
	printf("A area do quadrado e %f\n",area); 
	printf("O perimetro do quadrado e %f\n", perimetro);
	
	system("pause");
}
