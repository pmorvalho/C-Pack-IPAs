#include <stdio.h>



int main()
{
    int N, i, num_div;

    scanf("%d", &N);

    for (i = 1; i <= N; ++i)
    {
        if (N % i == 0)
            num_div = num_div + 1;
    }

    printf("%d\n", num_div);

    return 0;

}
