
# include <stdio.h>

int main() {
    unsigned int N,sum=0,log=0;

    scanf("%u", &N);
    while (N) {
        sum+=N%10;
        log++;
        N/=10;
    }
    
    printf("%u\n%u\n",log,sum);

    return 0;

}