
#include <stdio.h>

int main(){
    float N, num, average = 0;
    scanf("%f", &N);
    for (int i = 0; i < N; i++){
        scanf("%f", &num);
        average += num;
    }
    printf("%.2f\n", average / N);
    return 0;
}