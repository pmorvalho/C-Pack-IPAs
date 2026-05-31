
#include <stdio.h>

void permuta(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

int* max3(int *a, int *b, int *c){
    return (*a > *b)?((*a > *c)? a : c) : ((*b > *c)? b : c);
}

int* min2(int *a, int *b){
    return (*a < *b)? a : b;
}
void res1(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    permuta(max3(&a, &b, &c), &c);
    permuta(min2(&a, &b), &a);
    printf("%d %d %d\n", a, b, c);
}

void res2(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
        permuta(&a, &b);
    if (b > c)
        permuta(&b, &c);
    if (a > b)
        permuta(&a, &b);
    printf("%d %d %d\n", a, b, c);
}

int main(){
    res1();
    return 0;
}