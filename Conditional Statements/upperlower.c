#include <stdio.h>
int main (){
    char ch;
    printf("enter the charcter : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch<= 'Z') {
        printf("upper_case");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("lower_case");
    }
    else {
       printf("bhend di shigggi ");
    }
     




    return 0;
}