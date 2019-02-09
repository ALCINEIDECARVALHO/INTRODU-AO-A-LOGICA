#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {            char estadocivil;
                        int conts,contc,contv,contvalido,continvalido;
                        conts=contc=contv=contvalido=continvalido=0;
                        
                        do{
                        	
                      	  printf("Informe o estado civil\n");
                      	    scanf("%c",&estadocivil);
                      	    
                      	    fflush(stdin);
                      	  if (estadocivil=='s')  
                      	    conts=conts+1;
                      	  if(estadocivil=='c') 
			      contc=contc+1; 
			  if(estadocivil=='v')
			     contv=contv+1;
			  if(estadocivil!='s'&& estadocivil!='c'&&estadocivil!='v')
			     continvalido=continvalido+1;
		          if(estadocivil=='s'|| estadocivil=='c'|| estadocivil=='v') 
			     contvalido=contvalido+1; 
		      }
	               while(estadocivil!='f');
	                 printf("Quantidade de solteiros:%d\n",conts);
	                 printf("Quantidade de casados:%d\n",contc);
	                 printf("Quantidade de viuvos:%d\n",contv);
	                 printf("Quantidade de digita\207\706o valida:%d\n",contvalido);
	                 printf("Quantidade de digita\207\706o invalida:%d\n",continvalido);
	                 
	                 system("pause");
	                 
	   	               
	               return 0; 
	
	
}
