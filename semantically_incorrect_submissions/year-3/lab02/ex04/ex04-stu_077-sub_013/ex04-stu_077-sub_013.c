
#include <stdio.h>

int main()
{
    int x, y, z;
    int temp_x, temp_y, temp_z;
    scanf("%d %d %d", &x, &y, &z);
    temp_x = x;
    temp_y = y;
    temp_z = z;
    while (temp_x >= 0 || temp_y >= 0 || temp_z >= 0)
    {
        if (temp_x == 0)
            printf("%d ", x);
        if (temp_y == 0)
            printf("%d ", y);
        if (temp_z == 0)
            printf("%d ", z);
        temp_x--;
        temp_y--;
        temp_z--;
    }
    printf("\n");
    return 0;
}