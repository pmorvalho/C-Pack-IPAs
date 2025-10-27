

int main() {
    int values[3];

    scanf("%d %d %d", &values[0], &values[1], values[2]);
    if (values[0] > values[1] && values[0] > values[2]) {
        printf("%d", values[0]);
    }
    else if (values[1] > values[0] && values[1] > values[2]) {
        printf("%d", values[1]);
    }
    else {
        printf("%d", values[2]);
    }
    
    return 0;
}
