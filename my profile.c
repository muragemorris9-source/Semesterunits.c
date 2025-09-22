//simple c programming 
/*
NAME:Morris Murage 
REG NO:CT100/G/26143/25
DESCRIPTION: Program to compute my height,weight&phone number 
*/

#include <stdio.h>

int main() {
 //Variables and declaration
    float height, weight;
    long  long phone;

    // Prompt the user to enter values of each variable
    printf("Enter your height (in m): ");
    scanf("%f", &height);

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter your phone number: ");
    scanf("%d", &phone);

    // Values of output as entered by the user
    printf("Height: %.2f cm\n", height);
    printf("Weight: %.2f kg\n", weight);
    printf("Phone Number: %d\n", phone);

    return 0;
}