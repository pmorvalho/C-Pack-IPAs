
#include <stdio.h>
#define VECMAX 100

int main(){
    int l,c,num,mx = 0;
    int val[VECMAX];
    scanf("%d", &num);
    for(l = 0; l < num; l++){
        scanf("%d", &val[l]);
        mx = val[l] > mx ? val[l] : mx;
    }

    for(l = 0; l < mx; l++){
        for(c = 0; c < num; c++){
            if (val[c] < l)
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');
    }

    return 0;
}