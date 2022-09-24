#include <stdio.h>
int main (){
    // for (int i =0; i>=10; i=i++){     // same as I=I+1   //    i++ use the value then increase   //
    //     printf("%d \n ", i);             // ++i incerease then use //
    // }                               //same goes for minus sign --i && i-- ////
    
    for(float fl=1.0; fl<=5.0; fl++){
        printf("%f \n " ,fl );
    }

    for(char ch='a'; ch<='z';ch++){
        printf("%c \n ", ch);
    }

    return 0;
}