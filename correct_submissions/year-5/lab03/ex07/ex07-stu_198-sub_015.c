
#include <stdio.h>
#define MAX 100
#define MENOS 1
#define MAIS 0


int main() {
    int i, j = 0, iteration, state = MAIS, num;
    char spacedStr[MAX], s[MAX];
    long int sum = 0;
    fgets(spacedStr, MAX, stdin);
    for (i = 0; spacedStr[i] != '\0'; i++){
        if(spacedStr[i] != ' ' && spacedStr[i] != '\n'){
            s[j] = spacedStr[i];
            j++;
        }
    }
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == '+'){
            state = MAIS;
        }else if(s[i] == '-'){
            state = MENOS;
        }else{
            num = s[i] - '0';
            if(s[i] != '+' || s[i] != '-'){
                iteration = i;
                for(j = iteration; s[j + 1] != '\0'; j++){
                    if(s[j + 1] == '+' || s[j + 1] == '-'){
                        break;
                    }
                    num = num*10 + (s[j+1] - '0');
                    i++;
                }
            }
            if(state == MAIS){
                sum += num;
            }else if(state == MENOS){
                sum -= num;
            }
        }
    }

    printf("%ld\n", sum);
    return 0;
}