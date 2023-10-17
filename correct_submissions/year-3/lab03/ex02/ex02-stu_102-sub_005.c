
#include <stdio.h>
void piramide(int N);
int main(){
    int N;
    scanf("%d",&N);
    piramide(N);
    return 0;
}
void piramide(int N)
    {
        int h = 1,spc,i;
        spc = (N - 1)*2;
        while (h <= N){
            for(i = 2; i <= spc; i++)
                {
                printf(" ");
                }
            if (spc == 0){
                printf("%d",1);
                for(i = 2; i <= h; i++)
                {
                printf(" %d",i);
                }
            }
            else{
            for(i = 1; i <= h; i++)
            {
                printf(" %d",i);
            }
            }
            for (i=i-2; i >= 1; i--)
            {
                printf(" %d",i);
            }
            h++;
            spc = spc - 2;
            printf("\n");
        }
    }
    