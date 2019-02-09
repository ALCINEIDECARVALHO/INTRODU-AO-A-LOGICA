#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	          int num;
	          int triangular;
	          int i;
	          
		  
		  
		   printf ("Informe um numero\n");
	            scanf ("%d",&num);
	            
	           
		    
		     for (i=1;i<num;i++){
		     
		     
  	  	       triangular= i*(i+1)*(i+2);
	              
			 if (triangular==num)
		        
		        printf("%d*%d*%d , esse numero \202 triangular\n",i,i+1,i+2);  

               	}
		 
		  
		  system ("pause");      
	              
	              
		         
		  
		         
	return 0;
}
