#include<stdio.h>
void gst(float value);
int main(){
    float value = 100.0;
    gst(value);
    
    return 0;
}
void gst(float value){
    value = value + (0.18 * value);
    printf("final price is : %f ", value);
}