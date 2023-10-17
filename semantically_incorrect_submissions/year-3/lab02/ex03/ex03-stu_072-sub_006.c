

#include <stdio.h>

int main(){
    
    int N, M;

    printf("Escreva o dividendo e o divisor separados por espaços\n");
    scanf("%d %d", &N, &M);
    
    if (N % M == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}