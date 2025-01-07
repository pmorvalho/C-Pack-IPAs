
#include <stdio.h>




void piramide(int N){
    int nespacos = N - 1;
    int nvalores = 1;
    int i  = 1;
    int j = 1;
    int count1 = 1;
    int count2 = 1;
    int valores = 1;
    int middle;

    while(i <= N){

        while(count1 <= nespacos){
            printf("  ");
            count1++;
        }
        while(count2 <= nvalores){
            printf("%d ", valores);
            if(j < middle){        
                valores++;
                j++;
            }else if(j == middle){
                printf("%d ", middle);
                valores--;
                j++;
            }else if(j > middle)
                j++;
                valores--;
        }

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