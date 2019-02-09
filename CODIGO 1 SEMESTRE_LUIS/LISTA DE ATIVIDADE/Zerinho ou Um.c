#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {               int a,b,c;
    
    
                     printf("Informe os tr\210s valores escolhidos\n");
                       scanf("%d""%d""%d",&a,&b,&c);
                       
                     if(a==b&&b==c&&a==c)
                       printf("N\706o h\240 vencedor\n");
                      else  if(a==b&&b!=c) 
                        printf("Clara ganhou!\n");
                     else if (a!=b&&b==c)
		      printf("Alice ganhou!\n");
		    else if (a==c&&b!=a&&b!=c) 
		      printf("Beto ganhou!\n"); 
		      
		     system("pause");   
		      

                         
	return 0;
}
