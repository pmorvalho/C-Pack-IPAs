

#include <stdio.h>

int main(){
    int v1, v2, v3, auxiliar;
    scanf("%d %d %d", &v1, &v2, &v3);

    if (v2 < v1){          
        auxiliar = v1;    
        v1 = v2;
        v2 = auxiliar;
    }

    if (v3 > v2)                                 
        printf("%d %d %d\n", v1, v2, v3);
    else
        if (v3 < v1)
            printf("%d %d %d\n", v3, v1, v2);
        else
            printf("%d %d %d\n", v1, v3, v2);
    return 0;
}