#include <stdio.h>
int main(){
    int day;
    printf("enter 1-7 ::  ");
    scanf("%d",&day);

    switch (day){
        case 1 : printf("monday \n ");
                 break;
        case 2 : printf("Tuesday \n");
                 break;
        case 3 : printf("wednesday \n");
                break;
        case 4 : printf("Thursday \n ");
                break;
        case 5 : printf("friday \n");
                break;
        case 6 : printf("saturday \n ");
                break;
        case 7 : printf("<3 day \n ");
                break;
        default: printf("fuck off");        


    }








    return 0;
}