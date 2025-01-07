
#include <stdio.h>
int main()
{
    int Num;
    int NumeroEscrito=1;
    int NumeroColuna=1;
    int NumEspacos;
    int NumEspacosEscritos;
    scanf ("%d",&Num);
    NumEspacos=Num;
    NumEspacosEscritos=1;
    while (NumeroColuna<=Num)
    {
        while (NumEspacosEscritos<NumEspacos)
        {
            printf("\t");
            NumEspacosEscritos++;
        }

        while (NumeroEscrito<NumeroColuna)
        {
            printf("%d\t",NumeroEscrito);
            NumeroEscrito++;
        }
        while (NumeroEscrito>0)
        {
            printf("%d\t",NumeroEscrito);
            NumeroEscrito--;
        }
        printf("\n");
        NumEspacos--;
        NumeroColuna++;
        
        
    }
    return 0;

    
}