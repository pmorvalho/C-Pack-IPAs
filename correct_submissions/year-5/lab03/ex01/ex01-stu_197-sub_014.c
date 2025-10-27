
#include <stdio.h>

void quadrado(int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            printf("%d\t",j+i);
        }
        printf("%d\n",j+i);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    quadrado(n);

    return 0;
}