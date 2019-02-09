#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() 
 
 {
	float valor_apostado;
	int n_apostado,m1,c1,d1,u1;
	int n_sorteado,m2,c2,d2,u2;
	float premio;
	int resto;
	
	m1=c1=d1=u1=0;
	m2=c2=d2=u2=0;
		
	printf("Informe o valor apostado\n");
	   scanf("%f",&valor_apostado);
	printf("Informe o numero apostado\n");
		scanf("%d",&n_apostado);
	printf("Informe o numero sorteado\n");
		scanf("%d",&n_sorteado); 
		
	if (n_apostado<0 || n_apostado>99999)
	   printf("Este numero esta incorreto\n");
	else if (n_sorteado<0||n_sorteado>99999)	
		printf("O numero sorteado esta incorreto\n");
		
	resto=n_apostado%10000;// ignorando o quinto digito.
	m1=resto/1000;
	resto=resto%1000;
	c1=resto/100;
	resto=resto%100;
	d1=resto/10;
	resto=resto%10;
	u1=resto;
	
	resto=n_sorteado%10000; //ignorado o quinto digito.
	m2=resto/1000;
	resto=resto%1000;
	c2=resto/100;
	resto=resto%100;
	d2=resto/10;
	resto=resto%10;
	u2=resto;
	
	if(m1==m2&&c1==c2&&d1==d2&&u1==u2)
		premio=valor_apostado*3000;
		
	else if(c1==c2&&d1==d2&&u1==u2)	
		premio=valor_apostado*500;
		
	else if (d1==d2&&u1==u2)
	   premio=valor_apostado*50;
	   
    else if	(d1*10+u1>=97&& d2*10+u2==00|| d1*10+u1==0 && d2*10+u2>=97)
	  premio=valor_apostado*16;
	  
	else if(d1*10+u1<=4&&d2*10+u2<=4&& u1!=0 &&u2!=0)
	premio=valor_apostado*16; 
	
	else if(d1*10+u1>=5 && d1*10+u1<9&& d2*10+u2>=5&& d2*10+u2<9)
    premio=valor_apostado*16;
	
	else if(d1*10+u1>=9 && d1*10+u1<13&& d2*10+u2>=9&& d2*10+u2<13) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=13 && d1*10+u1<17&& d2*10+u2>=13&& d2*10+u2<17) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=17 && d1*10+u1<21&& d2*10+u2>=17&& d2*10+u2<21) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=21 && d1*10+u1<25&& d2*10+u2>=21&& d2*10+u2<25) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=25 && d1*10+u1<29&& d2*10+u2>=25&& d2*10+u2<29) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=29 && d1*10+u1<33&& d2*10+u2>=29&& d2*10+u2<33) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=33 && d1*10+u1<37&& d2*10+u2>=33&& d2*10+u2<37) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=37 && d1*10+u1<41&& d2*10+u2>=37&& d2*10+u2<41) 
	premio=valor_apostado*16;
    
    else if(d1*10+u1>=41 && d1*10+u1<45&& d2*10+u2>=41&& d2*10+u2<45) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=45 && d1*10+u1<49&& d2*10+u2>=45&& d2*10+u2<49) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=45 && d1*10+u1<49&& d2*10+u2>=45&& d2*10+u2<49) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=49 && d1*10+u1<53&& d2*10+u2>=49&& d2*10+u2<53) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=53 && d1*10+u1<57&& d2*10+u2>=53&& d2*10+u2<57) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=57 && d1*10+u1<61&& d2*10+u2>=57&& d2*10+u2<61) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=61 && d1*10+u1<65&& d2*10+u2>=61&& d2*10+u2<65) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=65 && d1*10+u1<69&& d2*10+u2>=65&& d2*10+u2<69) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=69 && d1*10+u1<73 && d2*10+u2>=69 && d2*10+u2<73) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=73 && d1*10+u1<77 && d2*10+u2>=73 && d2*10+u2<77) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=77 && d1*10+u1<81 && d2*10+u2>=77 && d2*10+u2<81) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=81 && d1*10+u1<85 && d2*10+u2>=81 && d2*10+u2<85) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=81 && d1*10+u1<85 && d2*10+u2>=81 && d2*10+u2<85) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=85 && d1*10+u1<89 && d2*10+u2>=85 && d2*10+u2<89) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=89 && d1*10+u1<93 && d2*10+u2>=89 && d2*10+u2<93) 
	premio=valor_apostado*16;
	
	else if(d1*10+u1>=93 && d1*10+u1<97 && d2*10+u2>=93 && d2*10+u2<97) 
	premio=valor_apostado*16;

	else
	   premio=0;
	   
	   
	printf("O numero apostado foi: %d e o numero sorteado foi: %d.Logo o premio foi de %f\n", n_apostado,n_sorteado,premio);
	
	system ("pause");
	
}
