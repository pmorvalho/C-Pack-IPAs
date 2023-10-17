
#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    if((x>=0 && y>=0)&& x%y==0){
        printf("yes");
    }
    else if((x>=0 && y>=0)&& x%y!=0){
        printf("no");
    }
    else{
        printf("erro");
    }
    return 0;
}