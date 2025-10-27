
#include <stdio.h>
int main() {
    int n, sec, min, hr;
    scanf("%d", &n);
    sec = n % 60;
    min = n / 60;
    hr = min / 60;
    min = min % 60;
    printf("%02d:%02d:%02d\n", hr, min, sec);
    return 0;
}