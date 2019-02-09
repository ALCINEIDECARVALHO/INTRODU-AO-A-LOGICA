#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {  

                  
                  float vetorn1 [4];
                  float vetorn2 [4];
                  float vetorm [4];
                  int i,totalturma=0;
                  float somamedia;
                  float mediatotal;
                  
                  for(i=1;i<5;i++)
		    {
		    
                    printf ("ALUNO %d: \n",i);
                    printf ("Primeira nota:");
                     scanf ("%f", &vetorn1[i]); 
		      printf( "Segunda nota:");
	               scanf ("%f",&vetorn2[i]);
	               
	               vetorm[i]=(vetorn1[i]+vetorn2[i])/2;
	               somamedia=somamedia+vetorm[i];
		      }
		        
		        mediatotal=somamedia/4;
		       for(i=1;i<5;i++)
		          printf ("O aluno na posi\207ao %d teve a media %.2f\n ",i,vetorm[i]);
		       if(vetorm[i]> mediatotal)
			    totalturma=totalturma+1;
		             printf("Ao todo temos %d alunos acima da media da turma que \202 %.2f",totalturma,mediatotal);  
		            
		        
		                        
                    
	return 0;
}
