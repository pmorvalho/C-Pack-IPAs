
#include <stdio.h>
void piramide(int N){
    int counter;
    for (counter=1;counter<=N;counter++){
        printf("%d ",counter);
        for(counter=N-1;counter>0;counter--)
            printf("%d ",counter);

    }
}
int main(){
    int N;
    scanf("%d",&N);
    piramide(N);
    return 0;

}