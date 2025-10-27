
#include <stdio.h>


int main(){
    int a, b, temp;
    scanf("%d %d",&a,&b);
    temp = a;
    if (a>b){
        temp = b;
        b = a;
        a = temp;
    }
    printf("%d\n%d\n",a,b);
    return 0;
}