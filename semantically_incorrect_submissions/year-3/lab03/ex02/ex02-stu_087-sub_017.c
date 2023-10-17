
#include <stdio.h>



#define RAISEVALUE 1
#define LOWERVALUE 0

void piramide(int N)
{

    int i, j, offset, currVal, state;

    if (N < 2)
        return;

    for (i = 1; i <= N; i++)
    {
        offset = N - i;

        for (j = 0; j < offset; j++)
        {
            printf("  ");
        }

        currVal = 1;
        state = RAISEVALUE;

        while (currVal > 0)
        {
            if (currVal == i)
                state = LOWERVALUE;

            printf("%d ", currVal);

            if (state == RAISEVALUE)
            {
                currVal++;
            }

            if (state == LOWERVALUE)
            {
                currVal--;
            }
        }

        printf("\n");
    }
    return;
}

int main()
{

    int N;
    scanf("%d", &N);
    piramide(N);

    return 0;
}

