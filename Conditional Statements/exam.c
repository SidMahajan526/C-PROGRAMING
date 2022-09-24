#include<stdio.h>
int main (){
    int marks;
    printf("enter your marks 1-100 : ; : ");
    scanf("%d",&marks);
    if(marks<=30){
        printf("kuch nahi vro hota hai \n ");
    }else if (marks > 30 && marks<=100){
        printf("itna kuch nahi ukaad liya");    

    }else{
        printf("JNL \n ");
    }

    return 0;
}