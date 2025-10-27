
#include <stdio.h>

#define SPC "  "

void spaces (int n, int p){
    for(;(n-p);p++){
        printf("%s", SPC);
    }
}

void linha (int n, int p){
    int step = 1;
    spaces(n, p);
    for (;(step<p);step++){
        printf("%d ",(step));
    }
    printf("%d ",p);
    for (step--;step;step--){
        if (step==1){
            printf("%d",step);
        }
        else {
            printf("%d ",step);
    
        }  
    } 
    spaces(n, p);
}

void piramide(int n){
    int p = 1;
    for (;p<=n;p++){
        linha(n, p);
        printf("\n");
    }
}

int main (){
    int n = 0;
    scanf("%d",&n);
    piramide(n);
    return 0;
}