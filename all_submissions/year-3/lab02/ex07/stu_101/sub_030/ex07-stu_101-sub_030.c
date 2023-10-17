

#include <stdio.h>

int main(){
    int n,i,contador=0;
    scanf("%d\n", &n);
    for(i=1; i<n+1; i++){
        if(n%i==0)
            contador++;
    }
    printf("%d\n", contador);
    return 0;
}
