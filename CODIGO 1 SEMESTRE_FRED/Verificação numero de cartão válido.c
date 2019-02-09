#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	  int num;
	  int m,c,d,u;
	  int inv;
	  int novefora;
	  int soma1;
	  int resul1;
	  int resul2;
 
 	  
	  printf("Informe um numero de quatro digitos\n");
	   scanf("%d",&num);
	   
	   m=num/1000;
	   c=num%1000/100;
	   d=num%100/10;
	   u=num%10;
	   
	   inv=u*1000+d*100+c*10+m;
     	   
	   m=inv/1000;
	   c=inv%1000/100;
	   d=inv%100/10;
	   u=inv%10;
          soma1=c*2;
	   
	   if(soma1<=9)
	      resul1=m+c*2+d+u*2;
     
          else if (soma1>9)
   	     
           {
	    novefora=soma1-9;
	     resul2=m+novefora+d+u*2; 
	       
           }
           
           
	     
        int resto1;
        int resto2;
        
        resto1=resul1%10;
        resto2=resul2%10;
	 
	 
       if(resto1>0)
        printf("%d.Numero invalido\n",resul1);
       else if (resto2>0)
       printf("%d.Numero invalido\n",resul2);
       
       else
       printf("%d.Numero divisivel por 10.Numero valido\n",resul2,resul1);
        
        
        system("pause");
        
	  	     
    
    
	     
 
           
	return 0;
}
