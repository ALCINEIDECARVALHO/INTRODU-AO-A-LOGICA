#include <stdio.h>
#include <stdlib.h>
main()
{
    float altura;
    float raio;
    float volume;
    float pi=3.14;

    printf ("Informe a altura da lata de oleo\n");
    scanf ("%f",&altura);
    printf("Informe o raio da lata de oleo\n");
    scanf("%f",&raio);
    volume=altura*pi*(raio*raio);
    printf("o volume da lata de oleo e %f\n",volume);
    
    system("pause");

}
