#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {              int a,b,c;

                       printf("Informe tr\210s n\243meros\n");
                         scanf("%d""%d""%d",&a,&b,&c);
                       
		     if(a>b&&a>c&&b>c)  
		       printf("O menor valor \202: %d\n",c);
		     else if(a<b&&b<c&&a<c) 
		      printf("O menor valor \202: %d\n",a); 
	              else if(b<a&&b<c)
                        printf("O menor valor \202: %d\n",b); 
                       else if(a<b&&c<b&&c<a) 
                         printf("O menor valor \202: %d\n",c);
                       else if(a<b&&c<b&&c>a) 
		      printf("O menor valor \202: %d\n",a);   
                        
	                
                    system("pause");
	return 0;
}
