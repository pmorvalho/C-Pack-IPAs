
#include <stdio.h>

int main(){
    int N;
    int polc;
    polc=2;
    int Total;
    Total=2;
    scanf("%d",&N);
    while (polc<N)
    {
        if (N%polc==0){
            Total++;
        }
        polc++;

    }
    printf("%d",Total);
    return 0;
    
}