#include <stdio.h>

int main()
{
    typedef struct 
    {
        char a; // 1 byte
        char b; // 1 byte
        int x; // 4 byte
        
    }struc_padd_pak;

    // total structure size = 6 byte
    // but

    struc_padd_pak s;

    printf("Size of struc_padd_pak %zu", sizeof(s));

    // geting 8 byte ?
   /* 
    Why is the size 8 bytes instead of 6 bytes?
    This is where structure padding comes into the picture.
    What is structure padding?
    Padding means adding extra unused bytes between structure members or at the end of a structure 
    to satisfy memory alignment requirements.
   */
    

    return 0;
}