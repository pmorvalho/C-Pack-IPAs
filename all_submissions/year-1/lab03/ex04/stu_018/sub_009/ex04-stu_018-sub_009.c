#include <stdio.h>

int main() {
   
 #define SIM 1
 #define NAO 0
 char c, ultima;
 int num = NAO, sozeros = SIM; 

 while ((c=getchar()) != EOF)  {
  
  if (( '0' < c && c<= '9')||(c == '0' && num == SIM )) {
   putchar(c);
   num = SIM;
   sozeros = NAO; } 

  else if ( (c < '0' || c > '9') && sozeros == SIM && ultima == '0')  {
   
  printf("0");
  putchar(c);
  ultima = c; }
  
  else if ( c < '0' || c > '9') { 
   putchar(c);
   num = NAO;
   ultima = c;
   sozeros = SIM; }
  
  else if ( c == '0')

   ultima = '0';
 }

return 0;

}


  
  
 
