#include <stdio.h>
//declaration protoype 
void printHello();
int main(){
    printHello();
    printHello();  // function call 

    return 0;
}

// function defination 
void printHello(){
    printf("Hello!");
}