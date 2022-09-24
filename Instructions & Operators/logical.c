#include<stdio.h>
int main (){
    // mathematical logic boiii //
    printf("%d  ::  \n ", (4>3)&&(5>2));
    printf("%d  ::  \n ", (1>3)&&(5>2));
    printf("%d  ::  \n ", (1>3)&&(1>2));

    // or//
    printf("%d  ::  \n ", (4>3)||(5>2));  // yeh true//
    printf("%d  ::  \n ", (1>3)||(5>2));
    printf("%d  ::  \n ", (1>3)||(1>2));
    //~ not //
    printf("%d  ::  \n ", !((4>3)||(5>2)));  // but yaha false agaya na meri jaan//
   






    return 0;
}