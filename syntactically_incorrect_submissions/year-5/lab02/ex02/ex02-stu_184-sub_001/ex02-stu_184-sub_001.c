
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a,&b);
    if (b>a){
        int temp=a;
        a=b;
        b=temp;
    }
    scanf("%d\n%d\n",&a, &b);
}