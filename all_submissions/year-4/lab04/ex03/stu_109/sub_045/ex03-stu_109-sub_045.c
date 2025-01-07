
#include <stdio.h>
#define VECMAX 100

int main(){
    char ok = 1;
    int vec[VECMAX], n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &vec[i]);
    }
    do{
        ok = 0;
        for(i = 1; i <= n; i++){
            if(vec[n - i] > 0){
                putchar('*');
                vec[n - i]--;
                ok = ok || vec[n - i] > 0;
            }
            else
                putchar(' ');
        }
        putchar('\n');
    } while (ok);
    return 0;
}
