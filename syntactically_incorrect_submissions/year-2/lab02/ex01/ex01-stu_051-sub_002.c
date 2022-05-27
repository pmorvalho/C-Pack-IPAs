#include <stdio.h>

void maior_de_tres(){
    int n1, n2, n3, n4;
    printf("Insira tres numeros, separados por virgulas:");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    if (n1>n2 && n1>n3)
        n4 = n1;
    else if(n2>n1 && n2>n3)
        n4 = n2;
    else n4 = n3;
    printf("O maior numero e': %d",n4);
}

void ordena_2(){
    int n, m;
    printf("Insira dois numeros, separados por virgulas:");
    scanf("%d,%d",&n,&m);
    if (n<m) printf("%d \n%d",n,m);
    else printf("%d \n%d",m,n);
}

void divisor(){
    int n, m;
    printf("Insira dois numeros, separados por virgulas:");
    scanf("%d,%d",&n,&m);
    if (n%m !=0) printf("no");
    else printf("yes");
}

void ordena_3(){
    int n1, n2, n3;
    printf("Insira tres numeros, separados por virgulas:");
    scanf("%d,%d,%d",&n1,&n2,&n3);
}

void ciclo(){
    int n;
    printf("Insira um numero:");
    scanf("%d",&n);
    for(int i = 1; i <= n; ++i) {
        printf("%d\n",i);
    }
}

void maior_e_menor(){

    float min,max,n,num;
    printf("Quantos numeros pretende inserir? ");
    scanf("%f",&num);
    for (int i = 0; i != num; ++i) {
        printf("Insira um numero:");
        scanf("%f",&n);
        if (i == 0) {
            min = n;
            max = n;
        }
        if (n<min) min = n;
        if (n>max) max = n;
    }
    printf("min: %f, max: %f\n", min, max);
}

void divisores(){
    int num,count = 0;
    printf("Insira um numero inteiro:");
    scanf("%d",&num);
    for (int i = 1; i <= num ; ++i) {
        if (num % i == 0) count++;
    }
    printf("%d",count);
}
void media(){
    int num;
    float soma = 0,n,div;
    printf("Quantos numeros pretende inserir? ");
    scanf("%d",&num);
    for (int i = 0; i != num; ++i) {
        printf("Introduza um numero: ");
        scanf("%f",&n);
        soma += n;
    }
    div = soma/num;
    printf("%1.2f\n", div);
}

void conversao(){
    int seg,horas,min;
    printf("Insira o numero de segundos a converter: ");
    scanf("%d",&seg);
    min = seg / 60;
    seg %= 60;
    horas = min /60;
    min %=60;
    printf("%d::%d::%d",horas,min,seg);
}

void digitos(){
    int num,soma = 0,cont = 0;
    printf("Introduza um numero inteiro positivo:");
    scanf("%d",&num);
    while (num != 0){
        cont++;
        soma += num%10;
        num /= 10;
    }
    printf("Soma: %d\nNmr de digitos:%d",soma,cont);
}

int main() {
    int n1, n2, n3, n4;
    printf("Insira tres numeros, separados por virgulas:");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    if (n1>n2 && n1>n3)
        n4 = n1;
    else if(n2>n1 && n2>n3)
        n4 = n2;
    else n4 = n3;
    printf("O maior numero e': %d",n4);
    return 0;
}
