
#include <stdio.h>

int main(){
    int c, result = 0, parcel=0;
    char signal = '+';

    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            parcel = parcel * 10 + (c - '0');
        }
        else if(c == ' '){
            if (signal == '+'){
                result += parcel;
            }
            else{
                result -= parcel;
            }
            parcel = 0;
        }
        else if (c == '+'){
            signal = '+';
        }
        else if (c == '-'){
            signal = '-';
        }
    }
    
    if (signal == '+'){
        result += parcel;
    }
    else{
        result -= parcel;
    }

    printf("%d\n", result);
    return 0;
}