

#include <stdio.h>

int main() {
    int nums[3];
    scanf("%d%d%d", &nums[0], &nums[1], &nums[2]);

    int max = nums[0];
    for (int i = 1; i < 3; i++) {
        if (nums[i] > max) max = nums[i];
    }

    printf("%d\n", max);
    return 0;
}
