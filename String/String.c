#include <stdio.h>
#include <string.h>




int main()
{
    char name[10] = "Manish";

    printf("Name is: %s \n",name);
    printf("String length is : %zu \n",strlen(name));
    printf("Sizeof length is : %zu \n",sizeof(name));
    return 0;
}   