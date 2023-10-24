#include <stdio.h>

int main() {
    char maritalStatus;
    char gender;
    int age;

    printf("Enter marital status (M for married, U for unmarried): ");
    scanf(" %c", &maritalStatus);

    printf("Enter gender (M for male, F for female): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);

    // Check if the person is driving insured based on the conditions
    if ((maritalStatus == 'M') || 
        (maritalStatus == 'U' && gender == 'M' && age > 30) || 
        (maritalStatus == 'U' && gender == 'F' && age > 25)) {
        printf("The person is driving insured.\n");
    } else {
        printf("The person is not driving insured.\n");
    }

    return 0;
}
