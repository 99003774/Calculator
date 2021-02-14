#include <stdio.h>
#include <math.h>
void areaOfSquare() {
    float side;
    printf("SQUARE\n");
    printf("Enter the side\n");
    scanf("%f", &side);
    float area = side*side;
    printf("The area of Square is : %f", area);
}
void areaOfRectangle() {
    float length, breadth;
    printf("RECTANGLE\n");
    printf("Enter length");
    scanf("%f", &length); 
    printf("Enter breadth");
    scanf("%f", &breadth);
    float area = length*breadth;
    printf("The area of Rectangle is : %f", area);
}
int main()
{
    int choice;
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("Enter a number of your choice:\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            areaOfSquare();
            break;
        case 2:
            areaOfRectangle();
            break;
        default:
            printf("Please enter the correct value other than 0.\n");
            break;   
    }
    return 0;
}
