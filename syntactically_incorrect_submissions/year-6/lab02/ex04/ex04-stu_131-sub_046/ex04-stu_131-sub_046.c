
#include <stdio.h>


int main(){
    
    int a, b, c, min, med, max;

    if (scanf("%d %d %d", &a, &b, &c) != 3) return 2;

    if (a<b){
        if (c<b){
            max=b;
            if (a<c) med=c, min=a; else med=a, min=c;
        } else max=c, med=b, min=a;
    } else{
        if (a<c) max=c, med=a, min=b; else max=a, med=c, min=b;
    }

    printf("%d %d %d\n", min, med, max);
    
    return 0;
}







    



    

    

// }