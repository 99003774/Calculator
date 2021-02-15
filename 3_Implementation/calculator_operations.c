#include <calculator_operations.h>

int areaOfSquare() 
{
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
void volumeOfCone() {
    printf("CONE\n");
    float radius, height;
    printf("Enter the radius \n");
    scanf("%f", &radius);
    printf("Enter the height \n");
    scanf("%f", &height);
    float volume = (PI*radius*radius*height)/3;
    printf("Volume of cone is : %f", volume);
}
void volumeOfSphere() {
    printf("SPHERE\n");
    float radius;
    printf("Enter the radius \n");
    scanf("%f", &radius);
    float volume = (PI*radius*radius*radius)*4/3;
    printf("Volume of Sphere is : %f", volume);
}
void volumeOfCylinder() {
    printf("CYLINDER\n");
    float radius,height;
    printf("Enter the radius \n");
    scanf("%f", &radius);
    printf("Enter the height \n");
    scanf("%f", &height);    
    float volume = PI*radius*2*height;
    printf("The volume of cylinder is : %f", volume);
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

