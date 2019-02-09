#include <stdio.h>
#include <stdlib.h>
main()
{
	float raio;
	float area;
	float perimetro;
	float pi;
	pi=3.14;
	
	printf("Informe o valor do raio da circunferencia\n");
	scanf("%f", &raio);
	area= pi*(raio*raio);
	perimetro= 2*pi*raio;
	printf("O valor da area e %f\n",area);
	printf("O valor do perimetro e %f\n",perimetro);	
	
	system("pause");	
}
