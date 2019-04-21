#include <stdio.h>
#include <stdlib.h>

int *
twoSum(int *nums, int numSize, int target);

int
main(void)
{
    int nums[] = {2, 7, 11, 15};
    int *idx_p;

    idx_p = twoSum(nums, 4, 26);

    printf("[%d, %d]\n", idx_p[0], idx_p[1]);
    free(idx_p);

    return 0;
}

int *
twoSum(int *nums, int numsSize, int target)
{
    int *idx_p = malloc((sizeof(int)) * 2);
    int i,j;

    for (i = 0; i < numsSize; i++) {
        for (j = i+1; j < numsSize; j++) {
            if (*(nums+i) + *(nums+j) == target) {
goto END;
            }
        }
    }

END:
    *idx_p = i;
    *(idx_p+1) = j;

    return idx_p;
}
