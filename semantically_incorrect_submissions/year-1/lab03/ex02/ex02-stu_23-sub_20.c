#include <stdio.h>

void piramide(int n)
{
 int linhas,coluna,col=0,espacos;
 for (linhas=1; linhas<=n; linhas++)
 {
  espacos = n-linhas;
  for (; espacos !=0; espacos--)
     printf("  ");
  col = linhas;
  for(coluna=1;coluna<=(linhas*2 -1); coluna++)
  {
   if (coluna<=n)
      printf ("%d ",coluna);
   else
      {
      col--;
      printf ("%d ", col);
      }
  }
  printf("\n");
 }
 return;
}


int main()
{
 int n;
 scanf("%d",&n);
 if (n>=2)
 {
  piramide(n);
 } 
 return 0;
}
