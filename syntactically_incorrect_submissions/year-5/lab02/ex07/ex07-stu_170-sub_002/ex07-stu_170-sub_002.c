
#include <stdio.h>

int main(){
    int n, contagem=0;
    scanf("%d", &n);


    for (int i = 1; i <= n; i++){
        if (n%i == 0) contagem++;
    }
    printf("%d\n", contagem);

    return 0;
}