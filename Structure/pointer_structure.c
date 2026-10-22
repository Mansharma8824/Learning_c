#include <stdio.h>

struct Device
{
    int device_id;
    int temp;
    char name[10];
    bool is_active; 
};

int main()
{
    struct Device d1 = {101,30,"device 1",false,};
    // create the pointer structure

    struct Device *ptr_struct;
    ptr_struct = &d1;
    
    printf("Ptr_struct %d\n", ptr_struct);
    printf("d1 %d\n", d1);
    printf("*ptr_struct %d\n", *ptr_struct);
    printf("&d1 %d\n", &d1);


    printf("Device id %d\n", ptr_struct->device_id);
    printf("Device Name %s \n", ptr_struct->name);
    printf("Device Tempreture %d \n", ptr_struct->temp);
    printf("Device Is_Active ? %d \n", ptr_struct->is_active);

}