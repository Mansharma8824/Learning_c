#include <stdio.h>

int main()
{
   unsigned int reg = 0xA0;
    // set 2 bit ON
   unsigned int mask = (1U << 2);
   reg = reg | mask;
   printf("%d\n", reg);

// Turn OFF the 2 bit

// step 1- invert the mask
// step 2 - User AND operator to set
    reg = reg & ~(mask);
    printf("%d \n", reg);

//  Toggle the 2 bit
    reg = reg ^ mask;
    printf("%d \n", reg);

    //  check 
    if (reg & mask){
        printf("Register is ON\n");
    }
    else{
         printf("Register is OFF\n");
    }



    return 0;
}