
#include <stdio.h>

void quadrado(int n){
    
    for (int i=0; i<n; i++){
        for (int j=1; j<=n; j++){
            printf("%d",i+j);
            if (j<n) printf("\t");
        }
        printf("\n");
    }

}

int main(){
    
    int a;

    if(scanf("%d", &a) != 1 || a<2) return 2;

    quadrado(a);

    return 0;
}