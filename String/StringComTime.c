#include <stdio.h>
#include <string.h>


// It limits how many characters are read, helping prevent buffer overflow.
// Note: fgets() may also store the newline character \n if there is room.

int main()
{
    char name[20];

    printf("Enter your name :");

    if(fgets(name, sizeof(name), stdin) != NULL)
    {
        printf("Name is: %s \n",name);
        printf("String length is : %zu \n",strlen(name));
        printf("Sizeof length is : %zu \n",sizeof(name));
    }
    return 0;
}