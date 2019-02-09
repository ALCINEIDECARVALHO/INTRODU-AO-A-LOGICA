#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {       
                           int c1,c2,c3,c4,escolha;
                           
                           
			      printf("Informe a escolha utilizada\n");
                            scanf("%d",&escolha);
                            
                            switch(escolha){
				 case 1:{
                                printf("Informe o caminho utilizado\n");
			 	    scanf("%d""%d""%d",&c1,&c2,&c3);
			 	    if(c1==1&&c2==4&&c3==6)
			 	      printf("Caminho v\240lido,a equipe chegou ao destino\n");
			 	    else
				     printf("Caminho inv\240lido\n");
				break;	
                              }
                            case 2:{
                                printf("Informe o caminho utilizado\n");
			 	    scanf("%d",&c2);
			 	    if(c2==2)
			 	      printf("Caminho v\240lido,mas a equipe n\706o chegou ao destino\n");
				     else
				     printf("Caminho inv\240lido\n");		
         		       break;
				}  
			       
			       case 3:{
			        printf("Informe o caminho utilizado\n");
                              scanf("%d""%d""%d""%d",&c1,&c2,&c3,&c4);
			 	    if(c1==3&&c2==5&&c3==7&&c4==8)
			 	      printf("Caminho v\240lido,a equipe chegou ao destino\n");
				      else
				     printf("Caminho inv\240lido\n");			
					break;
				}
				  
				
			}
			
			 	
				  
				 system("pause");  
				 
	return 0;
}
