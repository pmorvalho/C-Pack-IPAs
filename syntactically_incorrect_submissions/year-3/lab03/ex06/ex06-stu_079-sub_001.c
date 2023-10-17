

#include <stdio.h>

int digit(int c);

int main(){
    int c, sum = 0
    while((c = getchar())!=EOF){
        if digit(c);
            sum += c - '0';
    }
    printf("%s\n", sum % 9? "no":"yes");
}

inc;