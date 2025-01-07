
#include <stdio.h>

int main() {
    int Num, div=1, counter=0;

    scanf("%d", &Num);
    while (div<=Num) {

        if (Num%div==0){
            counter++;
        }
        div++;
    }
    printf("%d\n", counter);
    return 0;
}