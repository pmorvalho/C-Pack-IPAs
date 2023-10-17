
#include <stdio.h>
void cruz(int N){
    int l,h,aux=0;
    for (h=1; h <= N; h++){
        for (l = 1; l <= N; l++){
            if ((l == h) || (l == (N - aux))){
                if (l == N)
                    putchar('*');
                else
                    putchar('*');putchar(' ');}
            else{
                if (l == N)
                    putchar('-');
                else
                    putchar('-');putchar(' ');
                }
        }
        aux += 1;
        putchar('\n');
    }
}
int main(){
    int N;
    scanf("%d",&N);
    cruz(N);
    return 0;
}