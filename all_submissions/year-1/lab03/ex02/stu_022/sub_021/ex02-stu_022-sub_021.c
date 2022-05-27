#include <stdio.h>

void piramide(int n);
void espaco(int n, int l);

int main(){
    int n;
    scanf("%d", &n);
    if (n >=2)
        piramide(n);
    return 0;
}

void piramide(int n){
    int ad, l;
    for(l=1;l<=n;++l){
        espaco(n,l);
        if (l==1){
            printf("%d\n",l);
        }
        else{
            for(ad=1; ad <= l; ++ad){
                if(n==1)
                    printf("%d\n",l);
                else
                    printf("%d ", ad);
            }
            if (l!=1){
                for(ad=l-1 ;ad>=1;--ad){
                    if(ad==1)
                        printf("%d\n", ad);
                    else
                        printf("%d ", ad);
                }
            }
        }
            }
}

void espaco(int n, int l){
    int i, lim;
    lim = (n-l)*2;
    for(i=0;i!=lim;++i)
    printf(" ");
}