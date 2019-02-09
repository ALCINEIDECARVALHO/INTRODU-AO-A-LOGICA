#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {        
                              int livros,alunos,media;
                              
                              printf("Informe a quantidade de livros e a quantidade de alunos de um curso\n");
                                scanf("%d" "%d",&livros,&alunos);
	                          
	                       media=alunos/livros;
 
                   
                              	if(media<=8)
                                      printf("Conceito A\n");
                                   else if(media>=9&&media<=12)
                                      printf("Conceito B\n");
                                   else if (media>=13&&media<=18)
                                      printf("Conceito C\n");
                                   else if (media>18) 
                                      printf("Conceito D\n");
                               }
				
				system("pause");	   
                                      
					   
					   
                                      


	return 0;
}
