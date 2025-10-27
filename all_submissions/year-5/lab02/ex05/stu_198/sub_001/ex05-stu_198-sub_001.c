
#include <stdio.h>
#define MIN 1
int main(){
    int n;
    int count = MIN;
    scanf("%d", &n);
    while(count <= n){
        printf("%d\n", count);
        count++;
    }
    return 0;
}