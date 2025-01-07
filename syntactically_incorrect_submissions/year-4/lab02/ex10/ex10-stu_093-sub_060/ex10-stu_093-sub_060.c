

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    double num;
    char *ptr;
    char str[100];
    int decimal_places = 0, sum = 0, numbers = 0;
    scanf("%lf", &num);

    sprintf(str, "%.10f", num);  
    ptr = strchr(str, '.');  

    if(num < 0){
        num *= -1;
    }

    if (ptr) {
        ptr++;  
        while (*ptr != '0' && *ptr != '\0') {
            decimal_places++;
            ptr++;
        }
    }

    for(int i = 0; i < decimal_places; i++){
        num *= 10;
    }

    num = floor(num);

    while((int)num % 10 > 0){
        sum += (int)num % 10;
        num /= 10;
        numbers++;
    }

    printf("%d\n", numbers);
    printf("%d\n", sum);
    
    return 0;
}