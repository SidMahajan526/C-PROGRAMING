#include<stdio.h>
int main (){
    char day;
    printf("enter kar bsdk ");
    scanf("%s",&day);
    switch (day){
        case 'm' : printf("monday \n ");
                 break;
        case 'x' : printf("Tuesday \n");
                 break;
        case 'w' : printf("wednesday \n");
                break;
        case 't' : printf("Thursday \n ");
                break;
        case 'f' : printf("friday \n");
                break;
        case 's' : printf("saturday \n ");
                break;
        case 'l' : printf("<3 day \n ");
                break;
        default: printf("fuck off");        


    }

   





    return 0;
}