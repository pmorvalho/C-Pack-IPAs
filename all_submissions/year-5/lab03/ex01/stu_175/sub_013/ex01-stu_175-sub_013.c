
#include <stdio.h>

void quadrado (int n){
    int i, comp;
    if (n>=2){
        for (i=0;i<n;i++){
            for (comp=1;comp<=n;comp++){
                if (comp==n){
                    printf("%d\n",(comp+i));
                }
                else{
                    printf("%d\t", (comp+i));
                }
            }
        }
    }
}

int main (){
    int n = 0;
    scanf("%d",&n);
    quadrado(n);
    return 0;
}