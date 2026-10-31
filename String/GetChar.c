#include <stdio.h>
#include <string.h>

int main()
{
    char name[10];
    int i =0;
    char ch;

    printf("Enter your name: ");
    while (i< sizeof(name) && (ch = getchar()) != '\n' && ch != EOF)
    {
        name[i] = (char)ch;
        i++;
    }

    name[i] = '\0';

    printf("Name is: %s \n", name);
    printf("String length is : %zu \n",strlen(name));
    printf("Sizeof length is : %zu \n",sizeof(name));
    
}