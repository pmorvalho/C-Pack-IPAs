#include <stdio.h>

int main()
{
 int N,cont;
 float media, num,soma=0;
 scanf ("%d",&N);
 for (cont = 1; cont<= N; cont++)
  {
    scanf ("%f",&num);
    soma = soma + num;
  }
 media = soma/N;
 printf("%.2f\n", media);
 return 0;
}
