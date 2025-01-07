
#include <stdio.h>

void quadrado(int n){
    for(int i= 1; i<n; i++){
        int num = i;
        printf("%d\t", num);
        for( int j; j<= 1; j<n; j++){
            printf("%d\t",num + j);
        }
        printf("\n");
    }

}

int main(){
    int n;
    scanf("%d",&n);
    quadrado(n);
    return 0;
}