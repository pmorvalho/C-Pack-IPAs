

#include <stdio.h>
#define MAX 80

int leLinha(char s[]){
    int counter = 0;
    char c;
    
    while ((c = getchar()) != '\n' && (c != EOF) && (c != '\0') && (c != ' ')){
        s[counter++] = c;
    }

    return counter;
}


int main(){
    char s1[MAX], s2[MAX];
    int max_string = 1;
    leLinha(s1);
    leLinha(s2);

    for (int i = 0; (s1[i] != '\0' && s2[i] != '\0'); i++){
        if ( (s1[i]) > (s2[i]) ){
            max_string = 1;
            break;
        }
        else if ( (s1[i]) < (s2[i]) ){
            max_string = 2;
            break;
        }
    }

    if (max_string == 1){
        printf("%s\n", s1);
    }
    else{
        printf("%s\n", s2);
    }

    return 0;
}

