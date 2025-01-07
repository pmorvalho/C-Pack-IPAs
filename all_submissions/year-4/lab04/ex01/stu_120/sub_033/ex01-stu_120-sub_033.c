
#include VECMAX 100
#include <stdio.h>
int main(){
    int n= 0, i, temp;
    while(n<=0||n>=100){
        scanf("%d",&n);
    }
    while(n++){
        scanf("%d",&temp);
        for (i=0; i<temp; i++){
            putchar('*');
        }
    putchar('\n');
    }
    return 0;
}