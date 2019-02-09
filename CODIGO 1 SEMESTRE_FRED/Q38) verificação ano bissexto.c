#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int ano;
	
	printf("Informe o ano\n");
	scanf("%d",&ano);
	
	if (ano%4==0&&ano%100!=00)
         printf("ano bissexto\n",ano);
       
       else if(ano%400==0&&ano%4==00)
	  printf("Ano bissexto\n",ano);
	 
	else if (ano%100==0)
	  printf("Ano naum bissexto\n",ano);
	  
	   
	else 
	printf("Ano naum bissexto\n",ano); 
	  
	  system("pause");
	return 0;
}
