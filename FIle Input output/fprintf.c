#include <stdio.h>
int main (){
    FILE *fptr;
    fptr = fopen("test.txt","a");
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'O');
    fprintf(fptr,"%c",'N');
    fclose(fptr);








    return 0;
}