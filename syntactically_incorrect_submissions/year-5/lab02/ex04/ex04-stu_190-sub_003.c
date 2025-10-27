

# include <stdio.h>

int menor(int a, int b) {
    return a < b ? a : b;
}
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int min = menor(menor(a,b), c);
    int max = -menor(menor(-a,-b), -c);
    int med;
    if ((a == min || a == max) && (b == min || b == max)){
        med = c;
    } else if ((a == min || a == max) && (c == min || c == max)) {
        med = b;
    } else {
        med = a;
    }
    printf("%d\n%d\n%d\n", min, med, max);
    return 0;
}