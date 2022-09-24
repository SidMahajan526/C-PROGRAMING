#include <stdio.h>
#include <string.h>

typedef struct adress {
    int houseno;
    int block;
    char city [100];
    char state [100];
}add;

void printAdd(add adds);

int main (){
    add adds [5];
    printf("ENTER Information for person 1 -->  ");
    printf("House Number --> \n ");
    scanf("%d",&adds[0].houseno);
    printf("block -->  \n ");
    scanf("%d",&adds[0].block);
    printf("City --> \n ");
    scanf("%s",adds[0].city);
    printf("State --> \n ");
    scanf("%s",adds[0].state);

        printf("ENTER Information for person 2 -->  ");
    printf("House Number --> \n ");
    scanf("%d",&adds[1].houseno);
    printf("block -->  \n ");
    scanf("%d",&adds[1].block);
    printf("City --> \n ");
    scanf("%s",adds[1].city);
    printf("State --> \n ");
    scanf("%s",adds[1].state);

        printf("ENTER Information for person 3 -->  ");
    printf("House Number --> \n ");
    scanf("%d",&adds[2].houseno);
    printf("block -->  \n ");
    scanf("%d",&adds[2].block);
    printf("City --> \n ");
    scanf("%s",adds[2].city);
    printf("State --> \n ");
    scanf("%s",adds[2].state);

        printf("ENTER Information for person  4  -->  ");
    printf("House Number --> \n ");
    scanf("%d",&adds[3].houseno);
    printf("block -->  \n ");
    scanf("%d",&adds[3].block);
    printf("City --> \n ");
    scanf("%s",adds[3].city);
    printf("State --> \n ");
    scanf("%s",adds[3].state);

        printf("ENTER Information for person 5 -->  ");
    printf("House Number --> \n ");
    scanf("%d",&adds[4].houseno);
    printf("block -->  \n ");
    scanf("%d",&adds[4].block);
    printf("City --> \n ");
    scanf("%s",adds[4].city);
    printf("State --> \n ");
    scanf("%s",adds[4].state);


    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);




    return 0;
}

void printAdd(add adds){
    printf("adress is : %d , %d , %s , %s \n ",adds.houseno,adds.block,adds.city,adds.state);
}
