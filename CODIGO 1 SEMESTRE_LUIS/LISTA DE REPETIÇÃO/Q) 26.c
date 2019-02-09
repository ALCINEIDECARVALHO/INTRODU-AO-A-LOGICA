#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	           float peso,maior,menor;
                     int contp;
                         contp=0;
                     maior=INT_MIN;
                     menor=INT_MAX;    
	           
	              do{
	              	printf("Informe o peso de cada boi: ");
	              	  scanf("%f",&peso);
             	    
             	              contp=contp+1;
             	              
             	               if (peso>maior)
                                   maior=peso;
                                 if (peso>0 && peso<menor)  
			         menor=peso;  	
		     }
		     
		     while(peso!=0);
		        printf("Existem %d bois\n",contp);
		         printf("O maior peso \202:%.2f\n",maior);
		         printf("O menor peso \202:%.2f\n",menor);
		         
		         system("pause");
	           
	           
	return 0;
}
