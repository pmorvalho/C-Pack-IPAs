
#include <stdio.h>

int main() {
    int Num,X,total;
    scanf("%d",&Num);
    X=1;
    total=0;
    while (Num !=X-1)
    {
        if (Num%X==0)
        {
            total++;
            X++;
        }
        else {
            X++;
        }
    }
    printf("%d\n",total);
    return 0;
}