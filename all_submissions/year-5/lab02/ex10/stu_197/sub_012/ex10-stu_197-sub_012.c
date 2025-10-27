
#include <stdio.h>

int main(){
    int n,total=0,no=0,digito;
    scanf("%d",&n);
    while(n>0){
        digito=n%10;
        total+=digito;
        no++;
        n= n/10;
    }
    printf("%d\n%d\n",no,total);

    return 0;
}