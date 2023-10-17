
# include <stdio.h>


void swap ( int * num1, int*num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(){
    int a, b, c, temp;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) swap(a, b);
    if (b > c) swap(a, b);
    if (a > c) swap(a, c);
    printf("%d %d %d", a, b, c);
    return 0;
}