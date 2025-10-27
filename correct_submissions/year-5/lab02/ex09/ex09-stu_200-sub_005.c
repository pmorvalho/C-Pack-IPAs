
#include <stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    printf("%02d:%02d:%02d\n",s/3600,(s % 3600)/60,(s%3600)%60);
    return 0;
}