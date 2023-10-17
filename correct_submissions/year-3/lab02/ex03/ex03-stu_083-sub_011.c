
#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    if((x>=0 && y>=0)&& x%y==0){
        printf("yes\n");
    }
    else if((x>=0 && y>=0)&& x%y!=0){
        printf("no\n");
    }
    else{
        printf("erro\n");
    }
    return 0;
}