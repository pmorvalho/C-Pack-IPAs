

#include <stdio.h>

int main()
{

    int hours, minutes, seconds, temp;

    if (scanf("%d", &seconds) != 1)
    {
        return 2;
    }
    

    hours = seconds / 3600;
    temp = seconds % 3600;

    minutes = temp / 60;
    seconds = temp % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}