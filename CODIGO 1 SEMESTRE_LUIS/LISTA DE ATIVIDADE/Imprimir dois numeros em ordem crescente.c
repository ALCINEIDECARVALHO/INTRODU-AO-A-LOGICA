#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {            int a,b;

                      printf("Informe dois numeros\n");
                        scanf("%d" "%d",&a,&b);
                        
                      if(a>b)
			    printf("%d-%d\n",b,a);
			 else if (a<b) 
			   printf("%d-%d\n",a,b); 
			  else if(a==b) 
	                  printf("%d=%d\n",a,b); 
			    
			   system("pause");  
	return 0;
}
