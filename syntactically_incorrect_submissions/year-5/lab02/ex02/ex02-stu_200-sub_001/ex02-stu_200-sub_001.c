
#include <stdio.h>

int main(){
    int a, b, temp;
    scanf("%d, %d",&a,&b);
    if (a>b){
        temp = b;
        b = a;
        a = temp;
    }
    printf("%d\n%d\n",a,b);
}