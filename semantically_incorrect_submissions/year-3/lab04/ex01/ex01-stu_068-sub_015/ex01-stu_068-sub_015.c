
#include <stdio.h>
#define MAX 100

int main(){
    int n, v, i, contador;
    char s[MAX];

    scanf("%d", &n);
    for (contador = 1; contador <= n; contador++){
        scanf("%d", &v);
        
        for (i = 0; i <= v-1; i++){
            s[i] = '*';
            
        }
        printf("%s\n", s);
        s[i] = '\0';
        
    }

        

    return 0;
}