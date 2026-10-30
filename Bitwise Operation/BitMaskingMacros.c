#include <stdio.h>
#include <stdint.h>

#define SET_BIT(reg, bit) ((reg) |= (1U << bit))
#define CLEAR_BIT(reg, bit) ((reg) &= ~(1U << bit))
#define TOGGLE_BIT(reg, bit) ((reg) ^= (1U << bit))

int main()
{
    // Set bit
    uint8_t reg = 0x4A;

    SET_BIT(reg, 2);

    printf("set value %u \n", reg);

    CLEAR_BIT(reg, 2);

    printf("clear value %u \n", reg);

    
    TOGGLE_BIT(reg, 2);

    printf("toggle value %u \n", reg);
    

    return 0;
}