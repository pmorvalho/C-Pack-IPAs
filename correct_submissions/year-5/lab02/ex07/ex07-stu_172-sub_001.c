
#include <stdio.h>

int main(){
    int numberinit,divisors,totaldivisors = 1;

    scanf("%d",&numberinit);
    for (divisors = 1; divisors <=(numberinit/2); divisors++){
        if (numberinit%divisors == 0)
            totaldivisors++;
    }
    printf("%d\n",totaldivisors);
    return 0;

}