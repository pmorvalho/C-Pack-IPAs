#include <stdio.h>

void piramide (int N)  {
 
 #define ESPACOS 4
 #define NUMEROS 1
 int i, espacos = ESPACOS, j, numeros = NUMEROS, k;

 for (i = 1; i <= N; i++) {

   for (j = 0; j < espacos; j++)  {

    printf(" "); }

  espacos --;

  for (k=1 ; k<= numeros; k++)  {
 
   if ( k <= i) {
    printf ("%d", k); }

   else  {
    
    printf("%d", i - (k-i));} }

  numeros += 2; 
  printf ("\n"); }
}


int main()  {

 int N;

 scanf ("%d", &N);
 piramide(N);
 return 0;
}



