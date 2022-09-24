#include <stdio.h>
void namaste();
void bonjour();

int main(){
    printf("enter f for french and i for ind :: ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i') {
        namaste();
    }else{
        bonjour();

    }
    return 0;
}

void namaste(){
    printf("Namaste \n ");

}
void bonjour(){
    printf("bhenjour \n ");
}