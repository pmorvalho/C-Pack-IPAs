
#include <stdio.h>

int main(){
    int Colunas=1;
    int Linhas=1;
    int NumCol;
    int NumLin;
    scanf("%d",&NumCol);
    NumLin=NumCol;
    while (Colunas<=NumCol){
        while (Linhas<NumLin)
        {
            printf("%d\t",Linhas);
            Linhas=Linhas+1;

        }
        printf("%d\n",Linhas);
        NumLin=NumLin+1;
        Colunas=Colunas+1;
        Linhas=Colunas;

    }
    return 0;

}