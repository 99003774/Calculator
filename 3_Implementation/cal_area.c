#include <stdio.h>
#include <math.h>
int main()
{
    float side, length, breadth;
    int choice;
    printf("1. Square\n");
    printf("2. Rectangle\n");

    printf("Enter a number of your choice:\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("SQUARE\n");
            printf("Enter the side\n");
            scanf("%f", &side);
            float area_sq = side*side;
            printf("The area of Square is : %f", area_sq);
            break;

        case 2:
            printf("RECTANGLE\n");
            printf("Enter length");
            scanf("%f", &length); 
            printf("Enter breadth");
            scanf("%f", &breadth);
            
            float area_rec = length*breadth;
            printf("The area of Rectangle is : %f", area_rec);
            break;

        default:
            printf("Please enter the correct value other than 0.\n");
            break;   
    }
    return 0;
}