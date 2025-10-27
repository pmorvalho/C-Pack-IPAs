

#include <stdio.h>

int main() {
    int N,HH,MM,SS;

    scanf("%d",&N);

    HH = N / 3600;
    MM = (N % 3600) /60;
    SS = N % 60;

    printf("%02d:%02d:%02d\n", HH, MM, SS);

    return 0;
}