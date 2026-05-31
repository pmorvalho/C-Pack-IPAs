
#include <stdio.h>
int main() {
    int N, min, seg, hor;
    scanf("%d",&N);
    if (N<60) {
        printf("00:00:%d\n",N);
        return 0;
    }
    else if (N>60 && N<3600) {
        min=N/60;
        seg=N-min*60;
        printf("00:0%d:0%d\n",min,seg);
        return 0;
    }
    else {
        hor=N/3600;
        min= N-hor*60;
        seg= N-min*60;
        printf("%d:%d:%d\n",hor,min,seg);
        return 0;
    }
}


   