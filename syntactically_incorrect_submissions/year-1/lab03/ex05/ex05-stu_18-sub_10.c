#include <stdio.h>

int main()  {

 #define BARRA 1
 #define ABRIU 1

 char c;
 int barra_antes = 0, aspas = 0;

 while ((c = getchar()) != EOF)  {

  if  ( c == '"' && aspas != ABRIU  && barra_antes != BARRA)
   
    aspas = ABRIU;


  else if (c == '"' && aspas == ABRIU  && barra_antes != BARRA)  {
 
   aspas = 0;
   printf("\n"); }


  else if (c != '"' && c != '\\' && aspas == ABRIU) {
   
   putchar(c);
   barra_antes = 0;  }

  else if (c = '\\' && barra_antes == BARRA)  {

   putchar(c); 
   barra_antes = 0;}

  else if (c = '\\' && barra_antes != BARRA)   {
   
   barra_antes = BARRA; }

  else if ( c == '"' && barra_antes == BARRA)
   
   putchar(c); }

 return 0; }
