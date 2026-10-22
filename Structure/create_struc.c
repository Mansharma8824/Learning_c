#include <stdio.h>

int main()
{
    struct sensor
    {
        const int s_id;
        char name[10];
        int tmp;

    };

    struct sensor s1 = {
        101, 
        "Sensor", 
        32.5f,
    };

    printf("ID: %d\n", s1.s_id);
    printf("Name: %s\n", s1.name);
    printf("Temprature: %d\n", s1.tmp);
    

    return 0;
}