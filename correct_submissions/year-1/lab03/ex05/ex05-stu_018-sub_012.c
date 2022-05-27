#include <stdio.h>

int main()  {

 char c;
 int aspas = 0, barra_antes = 0;

 #define BARRA 1
 #define ABERTO 1

 while ((c = getchar()) != EOF)  {

 if ( c == '"' && barra_antes != BARRA && aspas != ABERTO ) 
  
   aspas = ABERTO;

 else if ( c == '"' && barra_antes != BARRA && aspas == ABERTO ) { 

  aspas = 0;
  printf ( "\n"); }

 else if ( (( c != '"' && c != '\\') || ( (c == '"' || c == '\\') && barra_antes == BARRA)) && aspas == ABERTO)  {

  putchar(c);
  barra_antes = 0;  }

 else if ( c == '\\' && barra_antes != BARRA )  {

  barra_antes = BARRA; }
 
 }
 return 0;
}
