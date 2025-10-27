
#include <stdio.h>

int main(){
    char c,r;
    int res, code, a, sign = 1;
    scanf("%d", &res);
    while (1) {  
        if ((r =getchar()) == '\n')
            break;
        code = scanf("%c %d",&c, &a);
        if (code != 2)
            break;
        if (c == '-')
            sign = -1;
        else
            sign = 1;
        res += a * sign; 
    }
    printf("%d\n",res);
    return 0;
}