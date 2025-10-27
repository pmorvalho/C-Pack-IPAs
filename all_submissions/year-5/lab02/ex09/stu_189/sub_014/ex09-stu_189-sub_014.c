
#include <stdio.h>
int main(){
    int t, h, m, s;
    scanf("%d",&t);
    #include <stdio.h>
    h = t / 3600;
    m = (t% 3600) / 60;
    s = t % 60;
    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}