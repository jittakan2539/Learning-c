#include <stdio.h>
#include <string.h> 

int main() {
    double number = 0;

    char ask[] = "no";

    do {
        printf("new number: ");
        scanf("%lf", &number);
        printf("number: %lf\n", number);

        printf("Would you like to quit the program? (y/n) \n");
        scanf("%s", &ask);
    }  while (strcmp(ask, "y") != 0);

    printf("Thank you. Good bye.");

    return 0;
}
