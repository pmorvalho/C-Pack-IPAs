

#include <stdio.h>

void cruz(int n){
    int posi=1,posf=n,i=1,j=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1){
                if(j==posi || j==posf)
                    printf("*");
                else
                    printf("-");
            }
            else{
                if(j==posi || j==posf)
                    printf(" *");
                else
                    printf(" -");
            }
        }
        putchar('\n');
        posi++;
        posf--;
    }
}

int main(){
    int n;
    scanf("%d\n", &n);
    cruz(n);
    return 0;
}