#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* result = malloc(2 * (sizeof(int)));

    if(result == NULL){
        return NULL;
    }

    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if (nums[i] + nums[j]  == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    free(result);
    return NULL;


}

int main()
{
   int nums[] = {2,7,11,15};
   int target = 17;

   int arrsize = sizeof(nums)/ sizeof(nums[0]);
   int returnsize = 0;

   int* result = twoSum(nums, arrsize, target, &returnsize);

   for (int i = 0; i<returnsize; i++)
   {
        printf("%d ", result[i]);
   }

   free(result);

}