#include <stdio.h>

 main() {
   
    int marks;


    printf("Enter the student's marks: ");

    scanf("%d", &marks);


    if (marks >= 40) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }


}
