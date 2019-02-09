#include <stdio.h>
#include <stdlib.h>
#define TAM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                                          
               int soma,num,x;
        
        for (x=0;x<TAM;x++){
                printf ("Informar um numero \n");
                scanf ("%d", &num);
                soma=soma+num;
                        
        }
        printf ("soma %d\n", soma);
        
        system("pause");
        
        return 0;
                                                          
                            
                              
                            
}
