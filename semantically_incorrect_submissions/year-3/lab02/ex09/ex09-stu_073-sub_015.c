
#include <stdio.h>

int main () {
    int N;
    int HH = 0,MM = 0,SS = 0;
    scanf("%d",&N);
    SS = N;
    if (N < 60){
    printf("%02x:%02x:%02x\n",HH,MM,SS);
    }
    else{
        MM = SS / 60;
        SS = SS % 60;
        if (MM < 60){
            printf("%02x:%02x:%02x\n",HH,MM,SS);
        }
        else{
            HH = MM / 60;
            MM = MM % 60;
            printf("%02x:%02x:%02x\n",HH,MM,SS);
        }
        
    }
    return 0;
}
