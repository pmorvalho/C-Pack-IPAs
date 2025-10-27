
#include <stdio.h>

int main(){
    int N, cont, divi;
    divi = 0;
    scanf("%d", &N);
    for (cont = 1; cont <= N; cont++){
        if (N%cont == 0){
            divi++;
        }
    }
    printf("%d\n", divi);
    return 0;
}