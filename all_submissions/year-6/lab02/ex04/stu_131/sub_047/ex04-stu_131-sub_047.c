
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
        if (c<a){
            max=a;
            if (b<c) med=c, min=b; else med=b, min=c;
        }
    }

    printf("%d %d %d\n", min, med, max);
    
    return 0;
}







    



    

    

// }