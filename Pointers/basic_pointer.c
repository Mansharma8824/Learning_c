#include <stdio.h>

int main()
{
    int a = 20;
    // decleration of pointer 
    int *p;
    // initialization 
    p = &a;

    printf("Value of a %d \n",a);
    printf("value at addr %d", *p);

    return 0;
}