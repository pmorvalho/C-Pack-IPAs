
#include <stdio.h>
void cruz(int N);
int main(){
    int N;
    scanf("%d",&N);
    cruz(N);
    return 0;
}
    void cruz(int N)
    {
        int c = 0, h = 0;
        N = N - 1;
        while (h <= N){
            while (c <= N)
            {
            if ((c == h)||(c == N-h)){
                printf("*");
            }
            else{
                printf("-");
            }
            c++;
            }
            c = 0;
            h++;
            printf("\n");
        }
    }