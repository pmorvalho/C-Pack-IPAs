#include <stdio.h>

int main ()  {

 #define SOMA 1
 #define SUBTRACAO 2
 #define OP 0
 #define NUMERO 1

 char c;
 int num = 0, res = 0, type_space = OP, op = 0, cont = 0;

 while (( c = getchar()) != '\n')  {

  if ( '0' <= c && c<= '9') 

   num = num *10 + (c - '0');

  else  {

    cont += 1;
    
    if (cont == 1){ 

     res = num;
     num = 0;  }

    else {

     if (c == '+') {

      type_space = OP ;
      op = SOMA;  }

     else if (c == '-') {

      type_space = OP ; 
      op = SUBTRACAO;  }

     else if ( c== ' ' && type_space == OP)

      type_space = NUMERO;

     else if ( c == ' ' && type_space == NUMERO) {

      type_space = OP;
     
        if (op == SOMA) { 
       
          res += num;
          num = 0;  }

        else {

          res -= num;
          num = 0; }
         

          }
        }
       }
      }
 if (op == SOMA) 

   res += num;

 else 

   res -= num;
 
 printf("%d\n",res);
 return 0;
}

