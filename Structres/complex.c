#include <stdio.h>

struct complex {
    int real;
    int img;
};

int main (){

    struct complex n1 = {5,8};
    struct complex *ptr = &n1;
    printf("real part = %d \n  ",ptr->real );
    printf("imaginary  part = %d \n  ",ptr->img );
    





    return 0;
}