

#include <stdio.h>

int main(){
    int n,h,m,s;
    scanf("%d", &n);
    h = (n-n%3600)/3600;
    m = (n%3600-((n%3600)%60))/60;
    s = ((n%3600)%60);
    printf("%d:%d:%d",h,m,s);
    return 0;
}
