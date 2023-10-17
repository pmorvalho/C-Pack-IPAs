
# include <stdio.h>

int main(){
    double max = 0, min = 0, num;
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%le", &num);
        if (num > max || (double) max == (double) 0) max = num;
        if (num < min || (double) min == (double) 0) min = num;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}