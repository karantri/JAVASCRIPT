#include <stdio.h>

 main() {
   
    int number;


    printf("Enter an integer: ");


    scanf("%d", &number);


    if (number % 2 == 0) {
        printf("The entered number is even.\n");
    } else {
        printf("The entered number is odd.\n");
    }


}
