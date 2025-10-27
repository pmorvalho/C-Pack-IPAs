
#include <stdio.h>

void cruz(int N){
    int s=0, e=N-1;
    for (int k=0;k<N;k++){

        for (int i=0;i<N;i++){
            printf("%c ", (i==s || i==e)?'*':'-');
        }
        s++;e--;
        printf("\n");
    }   
}
int main(){
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}