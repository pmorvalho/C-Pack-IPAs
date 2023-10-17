



#include <stdio.h>

int main()
{
    int input [3];
    int output = 0;
    int i = 1;

    scanf("%d %d %d", &input[0], &input[1], &input[2]);
    output = input[0];

    while(i<=2){
        if(input[i] > output)
            output = input[i];

        i++;
    }

    printf("%d\n", output);
    return 0;
}
