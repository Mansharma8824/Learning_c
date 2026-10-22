#include <stdio.h>

struct Device
{
    int device_id;
    int temp;
    char name[10];
    bool is_active; 
};


void display_device(struct Device *d){

    printf("Device ID %d \n",d->device_id);
    printf("Device temp %d \n",d->temp);
    printf("Device name %s \n",d->name);
    printf("Device Active %d \n",d->is_active);
}

int main(){

    struct Device d1 = {
        101,
        30,
        "device 1",
        false,

    };

    display_device(&d1);



}


