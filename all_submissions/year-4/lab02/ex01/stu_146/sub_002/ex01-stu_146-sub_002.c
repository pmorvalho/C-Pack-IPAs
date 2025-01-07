





int main() {

    int num1, num2, num3, maior;
    
    printf(' Introduza 3 números inteiros: ');
    scanf('&d%d%d',&num1,&num2,&num3);

    maior = num1 > num2 ? num1 : num2;
    maior = num3 > maior ? num3 : num2;

    print('O maior número introduzido é o %d', maior, '\n');
    return 0;
    
}