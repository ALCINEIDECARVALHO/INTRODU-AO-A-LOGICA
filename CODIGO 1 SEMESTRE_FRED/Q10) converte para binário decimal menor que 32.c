#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num;
	int bit1,bit2,bit4,bit8,bit16;
	int resto;
	bit1=bit2=bit4=bit8=bit16=0;
	
	printf("Informe o numero decimal menor que 32\n");
	 scanf("%d",&num);
	
	if (num<32)
        {
          resto=num;
	  
    
	if(resto-16>=0)
    	{
	  resto=resto-16;
	  bit16=1;	
    }
    
   		 	
       if(resto-8>=0) 
       {
  	  resto=resto-8;
  	  bit8=1;
  	  }
	   
	 	
    if (resto-4>=0)
        {
          resto=resto-4;
          bit4=1;
       }
	
	if(resto-2>=0)
    {
	resto=resto-2;
	bit2=1;
	 }
	 
	if (resto-1>=0)
	 {
	 resto=resto-1;
	 bit1=1; 
        }  
  
	printf("O numero informado foi %d corresponde em binario ao numero %d%d%d%d%d\n",num,bit16,bit8,bit4,bit2,bit1);
     } 

     else
       printf ("O numero digitado eh maior que 32.\n");

	system("pause");
	
	return 0;
}
