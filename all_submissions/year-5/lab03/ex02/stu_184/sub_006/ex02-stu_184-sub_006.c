
#include <stdio.h>

void piramide(int N){

    for (int i=1;i<=N;i++){
        printf("%*c1", 2*(N-i)+1, '\0');
        for (int j=2;j<=i;j++)printf(" %d", j);
        for (int j=i-1;j>0;j--)printf(" %d",j);
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}