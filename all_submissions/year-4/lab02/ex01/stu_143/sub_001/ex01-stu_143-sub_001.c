

int main(){

    int i, maior, num;
    
    maior = 0;

    for (i = 0; i < 4; i++){
        scanf("%d", &num);
        if (num > maior)
            maior = num;
    }

    printf("%d", num);

    return 0;
}
