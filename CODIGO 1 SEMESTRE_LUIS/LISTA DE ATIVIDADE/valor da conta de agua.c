#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                   int consumoagua,preco;


                          printf("Informe o consumo de agua mensal\n");
                            scanf("%d",&consumoagua);
                                 
                          
                          if(consumoagua<=10)
                           printf("O valor da sua conta \202 R$ 7,00\n");
                          else if(consumoagua>10&&consumoagua<=30)
		        {
		        
                             preco=7+(consumoagua-10);
                             printf("O valor da sua conta \202 R$ %d\n",preco);
                          }
                           else  if(consumoagua>=31&&consumoagua<=100)
			{
                             preco=27+((consumoagua-30)*2);
                             printf("O valor da sua conta \202 R$ %d\n",preco); 	
			} 
			      
                           else if(consumoagua>=101) 
			{
                             preco=167+((consumoagua-100)*5);
                             printf("O valor da sua conta \202 R$ %d\n",preco); 	
			} 	
                           	
			system("pause");
                            
	return 0;
}
