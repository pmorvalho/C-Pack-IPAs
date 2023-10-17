
#include <stdio.h>

#define READINGNUM 1
#define NOT_READINGNUM 0

#define POSSIBLE_ZERO_READ 1
#define NOT_POSSIBLE_ZERO_READ 0

int main(){
    int currChar, numState, zeroState = NOT_POSSIBLE_ZERO_READ;

    currChar = getchar();

    while (currChar != EOF){

        if ((currChar >= '1') && (currChar <= '9')){
        
            putchar(currChar);
            numState = READINGNUM;

        } else{

            if((currChar == '0') && (numState == READINGNUM)){
                putchar('0');
            }

            if((currChar == '0') && (numState == NOT_READINGNUM)){
                zeroState = POSSIBLE_ZERO_READ;
            }

            if((currChar != '0') && (numState == NOT_READINGNUM)
                && (zeroState == POSSIBLE_ZERO_READ)){
                    putchar('0');
                    putchar(' ');
                    zeroState = NOT_POSSIBLE_ZERO_READ;
            }

            if (numState == READINGNUM){
                putchar(' ');
                numState = NOT_READINGNUM;
            }

        }
        
        currChar = getchar();
    }

    putchar('\n');

    return 0;
}