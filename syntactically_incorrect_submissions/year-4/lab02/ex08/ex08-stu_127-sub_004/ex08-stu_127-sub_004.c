

int main() {
    
    float soma;
    float total = 0;
    float media;
    float count;

    
    while(scanf("%d ", &soma)) {
        total += soma;
        count++;
        printf(".");
    }
    media = total/count;
    printf("%.2f", media);


    return 0;
}