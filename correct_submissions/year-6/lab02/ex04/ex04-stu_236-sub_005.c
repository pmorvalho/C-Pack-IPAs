
# include <stdio.h>

int main(){
    int a, b, c, swp;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {swp = b; b = a; a = swp;}
    if (b > c) {swp = b; b = c; c = swp;}
    if (a > c) {swp = c; c = a; a = swp;}
    if (a > b) {swp = b; b = a; a = swp;}
    printf("%d %d %d\n", a, b, c);
    return 0;
}