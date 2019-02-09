#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {      
                    int codigo;
                    int quantcomprada;
                    float vcompras,total;
                    
                     
                     printf("Informe o codigo do produto\n");
                       scanf("%d",&codigo);
                       
                     switch(codigo) 
		   {
                        case 1:{
			
		      
		           printf("Informe a quantidade de produtos comprados\n");
		             scanf("%d",&quantcomprada);
		              vcompras=quantcomprada*5.30;
			     
			   if(quantcomprada>=15)
			   {
			   
			     total=vcompras-(vcompras*0.15); 
			      printf("O valor cobrado ser\240 R$%.2f\n",total);
		            }
			   else if(vcompras>=40.00)
			   {
			    total=(vcompras-(vcompras*0.15)); 
	                      printf("O valor cobrado ser\240 R$%.2f\n",total);  
                              }
                              else 
                                printf("O valor cobrado ser\240 R$%.2f\n",vcompras);
                   
                                break;
	                      
                        }
		        case 2:{
   	                   printf("Informe a quantidade de produtos comprados\n");
		             scanf("%d",&quantcomprada);
		              vcompras=quantcomprada*6.00;
			     
			   if(quantcomprada>=15)
			   {
			   
			     total=vcompras-(vcompras*0.15); 
			      printf("O valor cobrado ser\240 R$%.2f\n",total);
		            }
			   else if(vcompras>=40.00)
			   {
			    total=vcompras-(vcompras*0.15); 
	                      printf("O valor cobrado ser\240 R$%.2f\n",total);  
                              }
                              else 
                                printf("O valor cobrado ser\240 R$%.2f\n",vcompras);
                   
                              
			break;
		        }	      
			         
			case 3:{
			   printf("Informe a quantidade de produtos comprados\n");
		              scanf("%d",&quantcomprada);
		              vcompras=quantcomprada*3.20;
			     
			   if(quantcomprada>=15)
			   {
			   
			     total=vcompras-(vcompras*0.15); 
			      printf("O valor cobrado ser\240 R$%.2f\n",total);
		            }
			   else if(vcompras>=40.00)
			   {
			    total=vcompras-(vcompras*0.15); 
	                      printf("O valor cobrado ser\240 R$%.2f\n",total);  
                              }
                              else 
                                printf("O valor cobrado ser\240 R$%.2f\n",vcompras);
                   
                             
				break;
			} 
			
			case 4: {
			printf("Informe a quantidade de produtos comprados\n");
		              scanf("%d",&quantcomprada);
		              vcompras=quantcomprada*2.50;
			     
			   if(quantcomprada>=15)
			   {
			   
			     total=vcompras-(vcompras*0.15); 
			      printf("O valor cobrado ser\240 R$%.2f\n",total);
		            }
			   else if(vcompras>=40.00)
			   {
			    total=vcompras-(vcompras*0.15); 
	                      printf("O valor cobrado ser\240 R$%.2f\n",total);  
                              }
                              else 
                                printf("O valor cobrado ser\240 R$%.2f\n",vcompras);
                   
				break;
			} 	
                     	
                     	
		   }  
                     system("pause");
                    
return 0;
}
