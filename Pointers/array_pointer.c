#include <stdio.h>

int main()
{
    int arr[4] = {2,4,6,8};
    int *p = arr;

    printf("p* = %d \n",*p);
    printf("*arr = %d\n",*arr);
    printf("p = %d\n",p);
    printf("arr = %d\n",arr);
    printf("*(p+1) = %d\n",*(p+1));
    printf("*(p+2) = %d\n",*(p+2));


    //  traverse using loop
    for (int i =0;i<4;i++){
        printf("%d ", *(p+i));
    }

    printf("\n");

    // multyply every elements by 2

    for (int i=0; i<4;i++)
    {
        printf("%d ", *p *2);
        p++;
    }
    

}