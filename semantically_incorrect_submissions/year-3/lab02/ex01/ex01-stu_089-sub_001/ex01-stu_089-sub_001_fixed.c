

#include <stdio.h>

int main()
{
    int input = 0;
    int output = 0;
    int i = 0;

    scanf("%d", &input);
    output = input;

    while(i<2){
        scanf("%d", &input);
        if(input > output)
            output = input;

        i++;
    }

    printf("%d\n", output);

    return 0;
}
