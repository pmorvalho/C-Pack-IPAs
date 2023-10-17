
#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d", &x ,&y);
    if (x<=y)
    {
        printf("%d\n%d\n",x,y);
    }
    else{
        printf("%d\n%d\n",y,x);
    }  

    return 0;
}