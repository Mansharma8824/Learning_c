#include <stdio.h>

int main()
{
    int a = 20;
    int *p1; 
    int *p2 ;

    printf("Before pointer Assignment \n\n");
    printf("Value of A before assiging %d \n",a);
    printf("pointer 1 addr %p \n",p1);
    printf("pointer 2 addr %p \n",p2);

    p1 = &a;
    printf("\nAfter pointer assignment \n");
    printf("pointer 1 addr %p \n",p1);
    printf("value address %p \n",&a);
    printf("pointer 1 pointed value %d \n",*p1);

    p2 = p1;

    printf("\npointer 2 value %p \n",p2);
    printf("pointer 2 pointed value %d \n",*p2);

}