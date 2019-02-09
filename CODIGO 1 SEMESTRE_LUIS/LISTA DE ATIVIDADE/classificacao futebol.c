#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {             int v1,e1,s1,saldopontos1;
                         int v2,e2,s2,saldopontos2;
                         
			    v1=e1=0;
			    v2=e2=0;
			    
			    printf("Informe o numero de vitorias,empates eo saldo de gol do Cormengo\n");
			     scanf("%d""%d""%d",&v1,&e1,&s1);
			    printf("Informe o numero de vitorias,empates eo saldo de gol do Flaminthians\n");
			     scanf("%d""%d""%d",&v2,&e2,&s2); 
			     
			     saldopontos1=(3*v1)+(1*e1);
			     saldopontos2=(3*v2)+(1*e2);
			     
			    if(saldopontos1>saldopontos2)
			       printf("O Cormengo est\240 melhor classificado com o saldo de pontos de %d\n",saldopontos1);
			     
			   else if(saldopontos1<saldopontos2)  
			     printf("O Flaminthians est\240 melhor classificado com o saldo de pontos de %d\n"),saldopontos2;
			    
			    else if(saldopontos1==saldopontos2) {
			    	if(s1>s2)
			    	 printf("O Cormengo est\240 melhor classificado com o saldo de gol de %d\n",s1);
			    	if(s1<s2) 
			          printf("O Flaminthians est\240 melhor classificado com o saldo de gol de %d\n",s2);
				if (s1==s2) 
				 printf("O Flaminthians  e o Cormengo est\706o empatados com o saldo de pontos de %d e saldo de gol de %d\n",saldopontos1,s1);    
			    }
			        
			     system("pause");  
			      
			       
			     
			     
                         
                         
                         
	return 0;
}
