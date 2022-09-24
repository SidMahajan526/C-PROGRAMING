#include <stdio.h>
#include <stdlib.h>
main (){

float *ptr;
ptr = (float*)malloc(5*sizeof(float));

ptr[0] = 1;
ptr[1] = 4;
ptr[2] = 2;
ptr[3] = 8;
ptr[4] = 8;
for(int i=0; i<5; i++){
    printf("%d \n",ptr[i]);
}
return 0;
}
