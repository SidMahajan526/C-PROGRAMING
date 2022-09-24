#include<stdio.h>
#include<string.h>
typedef struct ComputerEngineerStudent{
    int roll;
    float cgpa;
    char name [100];
}coe;

int main (){

    coe s1;
    s1.roll = 143;
    s1.cgpa = 9.3;
    strcpy(s1.name,"shradha");
    printf("student name is %s \n",s1.name);

    return 0;
}