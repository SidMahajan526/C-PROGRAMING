#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];

};

int main (){
    struct student ece[100];
    ece[0].roll = 1664;
    ece[0].cgpa = 9.7;
    strcpy(ece[0].name,"Shradha khapra");
    printf("name is  : : %s \n",ece[0].name);

    return 0;
}