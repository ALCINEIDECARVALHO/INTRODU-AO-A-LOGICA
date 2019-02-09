#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                 
                       char temperatura,C,F,K;
                       float Kelvin,Celsius,Fahrenheint;
                       
                       
                       printf("Informe a temperatura para convers\706o\n");
                        scanf("%c",&temperatura);
                      
		    switch(temperatura)
		    {
		    	case'C':
		    	{
		             printf("Informe o valor para convers\706o\n");
		             scanf("%f",&Celsius);		
		    	    Kelvin=Celsius+273;
		    	    Fahrenheint=(1.8*Celsius)+32;
		    	    
		    	  printf("O valor de %.2fC convertido para kelvin \202 %.2fK, e em fahrenheit \202 %.2fF\n",Celsius,Kelvin,Fahrenheint);
		    	  
		    	  break;        	
		         }
			
			case 'F':
			{
				
			    printf("Informe o valor para convers\706o\n");
		             scanf("%f",&Fahrenheint);		
		    	    Celsius=(Fahrenheint-32)/1.8;
		    	    Kelvin=((Fahrenheint+459.67)*5)/9;
		    	    
		    	    printf("O valor de %.2fF convertido para kelvin \202 %.2fK, e em Celsius \202  %.2fC\n",Fahrenheint,Kelvin,Celsius);
				
				break;
			}
			case 'K':
			{
				
			    printf("Informe o valor para convers\706o\n");
		             scanf("%f",&Kelvin);		
		    	    Celsius=(Kelvin-273);
		    	    Fahrenheint=1.8*(Kelvin-273)+32;
		    	    
		    	    printf("O valor de %.2fK convertido para Fahrenheint \202 %.2fF, e em Celsius \202C %.2f\n",Kelvin,Fahrenheint,Celsius);
				
				break;
			}
			
			default:
			 printf("Informa\207\706o incorreta\n");
					    	
		    }
		      
		     system("pause");   
		        
                       
	return 0;
}
