
#include <stdio.h>


void piramide(int N){
    int nespacos = N - 1;
    int nvalores = 1;
    int i  = 1;
    int j = 1;
    int count1 = 1;
    int count2 = 1;
    int valores = 1;
    int middle = N;

    while(i <= N){

        while(count1 <= nespacos){
            printf("  ");
            count1++;
            j++;
        }

        while(count2 <= nvalores){
            printf("%d ", valores);
            if(j < middle){        
                printf("%d ", valores);
                valores++;
                j++;
            }else if(j == middle){
                printf("%d ", middle);
                valores--;
                j++;
            }else if(j > middle){
                printf("%d ", valores);
                valores--;
                j++;
            }
        }
        count1 = 1;
        while(count1 <= nespacos){
            printf("  ");
            count1++;
        }

        nespacos = nespacos - 2;
        nvalores = nvalores + 2;
        j = 1;

    }
}



int main(){

    int N;
    scanf("%d", &N);
    if(N >= 2){
        piramide(N);
    }

    return 0;
}