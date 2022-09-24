#include <stdio.h>
int main (){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf(" \n %d \n ",_age);
    //adress//
    printf("%u \n ",&age);
    printf("%u  \n ",ptr);
    printf("%u \n", &ptr);




    return 0;
}