
#include <stdio.h>

int main() {
    int n, hours = 0, mins = 0, secs = 0;

    scanf("%d", &n);

    if (n >= 3600) {
        secs = n % 60;
        mins = n / 60;
        hours = mins / 60;
        mins %= 60;
    }
    else if (n >= 60) {
        secs = n % 60;
        mins = n / 60;
    }
    
    printf("%02d:%02d:%02d\n", hours, mins, secs);

    return 0;
}