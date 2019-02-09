#include <stdio.h>
#include<stdlib.h>


 main() {
	float lado1;
	float lado2;
	float lado3;
	float perimetro;
	
	printf("Informe o valor do primeiro lado do triangulo\n");
	scanf("%f", &lado1);
	printf("Informe o valor do segundo lado do triangulo\n");
	scanf("%f", &lado2);
	printf("Informe o valor do terceiro lado do triangulo\n");
	scanf("%f", &lado3);
	perimetro=lado1+lado2+lado3;
	printf("O valor do perimetro do triangulo e %f\n",perimetro);
	
    system("pause");
}
