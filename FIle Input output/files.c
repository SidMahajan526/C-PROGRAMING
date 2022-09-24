#include <stdio.h>
int main (){
    FILE *fptr;
    fptr = fopen("test.txt","r");
    if(fptr == NULL){
        printf("file does not exist ");
    }else {
        fclose(fptr);
    }
 
    
    return 0;

}