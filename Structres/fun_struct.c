#include <stdio.h>
#include <string.h>
 struct student {
    int roll;
    float cgpa;
    char name[100];
 };
 void printInfo(struct student s1);

int main (){

    struct student s1 = {623,9.77,"Arsh sanghavi "};
     printInfo(s1);




    return 0;
}
void printInfo(struct student s1){
    printf("student INFormation and flaana \n");
    printf("Name of student :: %s \n ",s1.name);
    printf(" mkc  :: %f \n ",s1.cgpa);
    printf("woah !!!!!!!! %d \n",s1.roll);

}