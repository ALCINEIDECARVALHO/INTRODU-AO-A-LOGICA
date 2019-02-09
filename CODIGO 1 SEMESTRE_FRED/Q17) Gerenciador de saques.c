#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int saque;
	int nota100,nota50,nota20,nota10,nota5,nota2,nota1;
	
	printf("Informe o valor do saque\n");
         scanf("%d",&saque);
       
	nota100=saque/100;
	 saque=saque%100;
	
	nota50=saque/50;
	saque=saque%50; 
	
	nota20=saque/20;
	saque=saque%20;
	
	nota10=saque/10;
	saque=saque%10;
	
	nota5=saque/5;
	saque=saque%5;
	
	nota2=saque/2;
	saque=saque%2;
	
	nota1=saque/1;
	saque=saque%1;
      
      
      if (nota100>0)
      	  printf("%d notas de R$ 100,00.\n",nota100);
        
        if (nota50>0)  
        printf("%d notas de R$ 50,00.\n",nota50);
        
       if (nota20>0)  
        printf("%d notas de R$ 20,00.\n",nota20);
         
       if (nota10>0)  
        printf("%d notas de R$ 10,00.\n",nota10);
       
        
      if (nota5>0)
         printf("%d notas de R$ 5,00.\n",nota5);
         
         
       if (nota2>0)
         printf("%d notas de R$ 2,00.\n",nota2);
         
       if (nota1>0)
         printf("%d notas de R$ 1,00.\n",nota1);
      
        
      system("pause");
	return 0;
}
