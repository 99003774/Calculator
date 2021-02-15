#include <calculator_operations.h>

int areaOfSquare() {
    float side;
    printf("SQUARE\n");
    printf("Enter the side\n");
    scanf("%f", &side);
    float area = side*side;
    printf("The area of Square is : %f", area);
}
int areaOfRectangle() {
    float length, breadth;
    printf("RECTANGLE\n");
    printf("Enter length");
    scanf("%f", &length); 
    printf("Enter breadth");
    scanf("%f", &breadth);
    float area = length*breadth;
    printf("The area of Rectangle is : %f", area);
}


int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

