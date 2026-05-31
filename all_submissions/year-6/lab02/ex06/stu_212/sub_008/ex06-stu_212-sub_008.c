

int main() {
    int i=1, N=0;
    float num, max, min;
    scanf("%d %f", &N, &min);
    max = min;
    do {
        scanf("%f", &num);
        min = num<min?min:num;
        max = num>max?max:num;
    }
    while (++i<N);
    printf("max: %f, min: %f\n", max, min);
    return 0;
}