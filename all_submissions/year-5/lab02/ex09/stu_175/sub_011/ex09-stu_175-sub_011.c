
#include <stdio.h>

#define LIM 60

int main (){
    int s, m, h = 0;
    scanf("%d", &s);
    if (s>=LIM){
        m = s/LIM;
        s = s%LIM;
    }
    if (m>=LIM){
        h = m/LIM;
        m = m%LIM;
    }
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}