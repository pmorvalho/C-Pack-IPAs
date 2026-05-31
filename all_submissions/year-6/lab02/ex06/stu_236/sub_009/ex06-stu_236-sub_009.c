
# include <stdio.h>
int main(){
    int N;
    float min, max, num;
    scanf("%d", &N);
    scanf("%f", &num);
    min = num;
    max = num;
    for (int i = 1; i < N; i++){
        scanf("%f", &num);
        if (num > max){
            max = num;
        if (num < min)
            min = num;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
    }
}