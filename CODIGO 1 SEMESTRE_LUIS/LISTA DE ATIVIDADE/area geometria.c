#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {                 char Q,R,C,areageometrica;
                             float area,perimetro,comprimento,lado,raio,altura,largura;
                             
                             printf("Informe a forma geometrica\n");
                              scanf("%c",&areageometrica);
                              
                            switch (areageometrica){
				
                            	case 'Q':
				 {
				 	printf("Informe o lado do quadrado\n");
				 	 scanf("%f",&lado);
				 	 area=lado*lado;
				 	 perimetro=4*lado;
				 	 printf("A area do quadrado \202 :%.2f.O perimetro do quadrado \202:%.2f\n",area,perimetro);
				 	 break;
				 }
				     case 'R':
				     {
		     		        printf("Informe a altura e a largura do retangulo\n");
				 	 scanf("%f" "%f",&altura,&largura);
				 	 area=altura*largura;
				 	 perimetro=((2*altura)+(2*largura));
				 	 printf("A area do retangulo \202 :%.2f.O perimetro do retangulo \202:%.2f\n",area,perimetro);
				 	  break;
				     }
				      case 'C':
				      { 
				       printf("Informe o tamanho do raio\n");
				 	 scanf("%f",&raio);
				 	 area=3.14*(raio*raio);
				 	 comprimento=2*3.14*raio;
				 	 printf("A area do circulo \202 :%.2f.O comprimento do circulo \202:%.2f\n",area,comprimento);
				 	  break;
				     }
				     default:
				       printf("Figura geometrica invalida\n");
				      	
		       	}
				     	
	return 0;
}
