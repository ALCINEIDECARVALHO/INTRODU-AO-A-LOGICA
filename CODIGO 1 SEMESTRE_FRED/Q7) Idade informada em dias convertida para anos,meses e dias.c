#include <stdio.h>
#include <stdlib.h>

main() 
{
	int dias_informados;
	int anos;	
	int dias;
    int meses;
	int resto;
	
	printf("Informe sua idade em dias\n");
	scanf ("%d",&dias_informados);
	anos=dias_informados/365;
	resto=dias_informados%365;	
	meses= resto/30;
	dias=resto%30;
	if (dias<=0)
	
	printf("Sua idade e  %d anos %d meses \n",anos,meses);
	else
	
	printf("Sua idade e  %d anos %d meses %d dias \n",anos,meses,dias);
	
	system("pause");
	
	
}
