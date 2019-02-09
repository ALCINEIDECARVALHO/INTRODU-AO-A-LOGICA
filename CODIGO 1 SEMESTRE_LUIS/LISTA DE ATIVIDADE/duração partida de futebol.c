#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main()  {
                  int  hinicio, minicio, hfinal, mfinal, htotal, mtotal;

  printf ("informe a hora de inicio do jogo\n");
    scanf ("%d", &hinicio);
  printf ("informe o minuto de inicio do jogo \n");
    scanf ("%d", &minicio);
  printf ("informe a hora final do jogo \n");
    scanf ("%d", &hfinal);
  printf ("informe o minuto final do jogo \n");
    scanf ("%d", &mfinal);
    
      
  
   if (hinicio==hfinal&&minicio==mfinal)
   printf("Duracao de jogo 24 horas\n");
   
   else if(hinicio>24)
    printf("Por favor informar hora inv\240lida\n");
   
    
  
  else if(hfinal<hinicio&& mfinal<minicio)
    
 {
    htotal=hinicio-hfinal;
    mtotal= minicio- mfinal;
  printf("Jogo durou %d horas e %d minutos\n",htotal,mtotal);
   }
   
   else if(hfinal>hinicio&&mfinal>minicio)
   {
      htotal=hfinal-hinicio;
      mtotal=mfinal-minicio;
      printf("Jogo durou %d horas e %d minutos\n",htotal,mtotal);
}
    
    else if(hfinal>hinicio&&mfinal<minicio)
    
    {
      htotal=hfinal-hinicio;
      mtotal=minicio-mfinal;
      printf("Jogo durou %d horas e %d minutos\n",htotal,mtotal);
}
    
    else if(hfinal<hinicio&&mfinal==minicio)
    
    {
      htotal=hinicio-hfinal;
      mtotal=minicio-mfinal;
      printf("Jogo durou %d horas e %d minutos\n",htotal,mtotal);
 }

  else if(hinicio>hfinal&&mfinal>minicio)
    
    {
      htotal=hinicio-hfinal;
      mtotal=mfinal-minicio;
      printf("Jogo durou %d horas e %d minutos\n",htotal,mtotal);
}

  else if(hinicio>hfinal&&mfinal<minicio)
    
    {
      htotal=hinicio-hfinal;
      mtotal=mfinal-minicio;
      printf("Jogo durou %d horas e %d minutos\n",htotal,mtotal);
 }
  else if(hfinal>hinicio&&mfinal==minicio)
    
    {
      htotal=hfinal-hinicio;
      mtotal=minicio-mfinal;
      printf("Jogo durou %d horas e %d minutos\n",htotal,mtotal);
 }
return 0;
}
