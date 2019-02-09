#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {             int casa,canal,cont1,cont2,cont3;
                               cont1=cont2=cont3=0;

                 do{
                 	    printf("Informe o numero da casa e do canal de TV\n");
                 	       scanf("%d""%d",&casa,&canal);
                 	       
                 	       if (casa==0)
                 	           cont1=cont1+1;
                 	        if(canal==0) 
                             cont2=cont2+1;  
		        if(canal==2)
		            cont3=cont3+1;
                 	       
	        }
	        
	        while(casa>=0);
	              printf("Existem %d residencia fechada\n",cont1);
	              printf("Existem %d TV desligadas\n",cont2);
                      printf("Existem %d TV sintonizadas no canal 2\n",cont3);
                      
                   system("pause");   

                          
	return 0;
}
