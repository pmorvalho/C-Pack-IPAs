
#include<stdio.h>
int main(){
    int a, k=0;
    scanf("%d", &a);
    for (int i=1;i<=a;i++) {
        if (a%i==0) {
            k++;
        }
    } printf("%d\n", k);
    return 0;
}