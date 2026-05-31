
#include <stdio.h>
int main(){
    int div,n,val;
    scanf("%d",&n);
    div=0;
    val=n;
    while (val>0){
    if (n%val==0)  
        div++;
    val--;
    }
    printf("%d\n",div);
    return 0;
}
