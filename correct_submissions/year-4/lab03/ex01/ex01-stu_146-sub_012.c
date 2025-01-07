

#include <stdio.h>

int main() {

    int n, c, l;
    scanf("%d", &n); 

    for(l=0; l<n; ++l){ 

        for(c=0; c<n; ++c){ 
            if(c) putchar('\t'); 
            printf("%d", l+c+1); 
        }
        putchar('\n');
    }
    return 0;
}



void QUADRADO(int n){
    int l,c;
    for(l=0; l<n; ++l){
        for(c=0;c<n;++c){
            if(c) putchar('\t');
            printf("%d",l+1+c);
        }
        putchar('\n');
    }
}