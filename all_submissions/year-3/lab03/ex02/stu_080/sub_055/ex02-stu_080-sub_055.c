
#include <stdio.h>
void piramide(int n){
    int l, c;
    for (l = 0; l < n; l++){
        for (c = 0;((c < n)||(c > n)); c++){
            if (c > 0)
                putchar(' ');
            if ((l + 2 - n + c) > 0)
                printf("%d",l + 2 - n + c);
            else
                putchar(' ');
        }
        for (c--; c > 0; c--){
            if ((l + 1 - n + c) > 0)
                printf("%d", l + 1 - n + c);
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    piramide(n);
    return 0;
}