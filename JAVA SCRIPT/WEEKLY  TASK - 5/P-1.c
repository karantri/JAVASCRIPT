#include <stdio.h>
 main() {
   
    int number;

    printf("Enter a number: ");

    scanf("%d", &number);

    if (number > 0) {
        printf("The entered number is positive.\n");
    } else if (number < 0) {
        printf("The entered number is negative.\n");
    } else {
        printf("The entered number is zero.\n");
    }

}
