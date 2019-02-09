#include <stdio.h>
#include <stdlib.h>
#define TAM 4


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {         int num,i,cont,jcont;
                          cont=0;
                        

                    for(i=0;i<TAM;i++)
		  {
		  
                      printf("Informe os numeros:");
                        scanf("%d",&num);
                      if(num>=10&&num<=20)
		      cont=cont+1;
                      if(num<10||num>20) 
                          jcont=jcont+1;
		    
		      }
		      
	           printf("Est\706o dentro do intervalo %d numeros e est\706o fora do intevalo %d numeros\n",cont,jcont);
		       
		        

                      
	return 0;
}
