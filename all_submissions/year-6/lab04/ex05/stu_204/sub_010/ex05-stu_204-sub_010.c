
#include <stdio.h>
#include <string.h>
#define DIM 100

int leLinha(char *s){

    int i = 0, cars = 0;
    while( s[i] != '\0'){
        ++cars;
        i++;
    }
    cars++;
    return cars;
}

int main(){

    char s[DIM];
    int i = 0;
    for( int c = getchar(); c != '\n'&& c != EOF; c = getchar()){
        s[i++] = c;
        ;
        }
    s[i] = '\0';

    i = 0;

    printf("%s\n", s);
    return 0;
}


