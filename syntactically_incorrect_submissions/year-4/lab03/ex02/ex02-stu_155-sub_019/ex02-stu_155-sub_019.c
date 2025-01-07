
#include <stdio.h>
#define BEFORE_MIDDLE 0
#define AFTER_MIDDLE 1

void piramide(int N);

int main()
{
    int n;
    scanf("%d", &n);

    piramide(n);

    return 0;
}

void piramide(int N)
{
    for (int i = 1; i <= N; ++i)
    {
        int state = BEFORE_MIDDLE;

        for (int j = N - i; j >= 0; --j)
        {
            printf(" ");
        }

        int ptr = 1, value = 1;

        while (ptr <= 2 * i - 1)
        {
            if (value == i)
            {
                state = AFTER_MIDDLE;
            }

            if (state == AFTER_MIDDLE)
            {
                printf("%d", value);
                value--;
                ptr++;
            }
            else if (state == BEFORE_MIDDLE)
            {
                printf("%d", value);
                value++;
                ptr++;
            }
        }

        printf("\n");
    }

    return;
}