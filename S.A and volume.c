//simple c programming 
/*
NAME:Morris Murage 
REG NO:CT100/G/26143/25
DESCRIPTION: Program to compute surface area and volume of a cylinder 
*/
#include <stdio.h>
#include <math.h>   // for M_PI(π constant)

int main() {
    float radius, height, volume, surfaceArea;

    // Prompt user to enter values of each variables
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = M_PI * radius * radius * height;
    surfaceArea = 2 * M_PI * radius * radius + 2 * M_PI * radius * height;

    // Values of output as entered by the user 
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface Area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}