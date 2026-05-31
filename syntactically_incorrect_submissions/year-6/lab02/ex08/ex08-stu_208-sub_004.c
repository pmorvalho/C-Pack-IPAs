
int main() {
    int N; 
    int horas, minutos, segundos;

    scanf("%d", &N);

    if (N < 0) {
        printf("N deve ser positivo.\n");
        return 1;
    }

    horas = N / 3600;
    minutos = (N % 3600) / 60;
    segundos = N % 60;          

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}