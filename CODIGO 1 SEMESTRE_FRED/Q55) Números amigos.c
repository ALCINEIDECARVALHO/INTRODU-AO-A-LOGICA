#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {  
                 
                 int num;
                 int ndois;
                 int i;
                 int j;
                 int soma1=0;
                 int soma2=0;
                 
                 
                 
                 printf ("Informe o primeiro numero\n");
                   scanf("%d",&num);
                 printf ("Informe o segundo numero\n");
                   scanf("%d",&ndois);
                 
                   
                 for (i=1;i<num;i++) 
             	       if (num%i==0)         	    
			      soma1=soma1+i;		      	
           
                for (j=1;j<ndois;j++) 
                	if (ndois%j==0)         	    
			      soma2=soma2+j;
		  
		  
		  if (soma1==ndois && soma2==num)
		    printf(" %d \202 %d  s\306o n\243meros amigaveis\n",num,ndois);
		    
		   else
		     printf ("%d \202 %d n\306o s\306o amigaveis\n",num, ndois);  
	return 0;
}
