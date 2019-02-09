#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {               int a,b,c;
    
    
                     printf("Informe os tr\210s valores escolhidos\n");
                       scanf("%d""%d""%d",&a,&b,&c);
                       
                       if(a>1&&b<=1&&c<=1)
                        printf("Alice por favor coloque 0 ou 1\n");
                       else if (a<=1&&b>1&&c<=1) 
                       printf("Bruno por favor coloque 0 ou 1\n");
                       else if (a<=1&&b<=1&&c>1) 
                       printf("Carlos por favor coloque 0 ou 1\n");
                       else if (a>1&&b>1&&c<=1) 
                        printf("Ana e Bruno por favor coloque 0 ou 1\n");
                       else if (a<=1&&b>1&&c>1)
		      printf("Bruno e Carlos por favor coloque 0 ou 1\n"); 
		     else if (a>1&&b<=1&&c>1)
		      printf("Ana e Carlos por favor coloque 0 ou 1\n"); 
		      else if (a>1&&b>1&&c>1)
		      printf("Ana,Beto e Carlos por favor coloque 0 ou 1\n");     
                      else if(a==b&&b==c&&a==c)
                       printf("Deu empate!\n");
                      else  if(a==b&&b!=c) 
                        printf("Clara ganhou!\n");
                     else if (a!=b&&b==c)
		      printf("Alice ganhou!\n");
		    else if (a==c&&b!=a&&b!=c) 
		      printf("Beto ganhou!\n"); 
		      
		     system("pause");   
		      

                         
	return 0;
}
