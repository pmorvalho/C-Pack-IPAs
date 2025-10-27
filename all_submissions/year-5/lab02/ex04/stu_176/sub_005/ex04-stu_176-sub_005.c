
#include <stdio.h>

void swap(int nums[], int idx)
{
    int numA;
    numA = nums[idx];
    nums[idx] = nums[idx + 1];
    nums[idx + 1] = numA; 
}

int main()
{
    int nums[3];

    scanf("%d%d%d", &nums[0], &nums[1], &nums[2]);

    if (nums[0] >= nums [1])
    {
        swap(nums, 0);
    }
    
    if (nums[1] >= nums [2])
    {
        swap(nums, 1);
    }

     if (nums[0] >= nums [1])
    {
        swap(nums, 0);
    }
    
    printf("%d %d %d\n", nums[0], nums[1], nums[2]);
    return 0;
}


