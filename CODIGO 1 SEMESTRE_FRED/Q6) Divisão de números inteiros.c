#include <stdio.h>
#include <stdlib.h>

main() 
{
	int num1;
	int num2;
	int quociente;
	int resto;
	
	printf("Informe um numero\n");
	scanf("%d",&num1);
	printf("Informe outro numero\n");
	scanf("%d",&num2);
	quociente= num1/num2;
	resto=num1%num2;
	printf("O quociente da divisao e %d\n",quociente);
	printf ("O resto da divisao e %d\n",resto);
	
	system("pause");
	
}
