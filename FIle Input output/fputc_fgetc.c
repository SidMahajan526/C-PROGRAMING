#include <stdio.h>
int main (){
    FILE *fptr;
    fptr = fopen("test.txt","w");
    fputc('A',fptr);
    fputc('I',fptr);
    fputc('N',fptr);
    fputc('O',fptr);




    return 0;
}