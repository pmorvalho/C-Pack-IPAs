
int main() {
    int count, num;
    int min, max;

    scanf("%d", &count);

    scanf("%d", &num);
    min = num;
    max = num;

    for (int i = count - 1; i >= 1; i--) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("min: %d, max: %d\n", min, max);

    return 0;
}
