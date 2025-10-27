
#include <stdio.h>

void piramide(int N){
    int tab=N-1, tab_temp, contador,linhas = 0;
    while (linhas<N){
        contador =1;
        tab_temp = tab;
        while (tab_temp>0){
            printf("  ");
            tab_temp--;
        }
        while (contador != N-tab)
            printf("%d ",contador++);
        if (contador == 1)
            printf("%d\n",contador);
        else
            printf("%d ",contador);
        while (contador != 1){
            contador--;
            if (contador != 1)
                printf("%d ",contador);
            else
                printf("%d\n",contador);
        }
        tab--;
        linhas++;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    piramide(n);
    return 0;
}
