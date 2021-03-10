#include "Calc_geo.h"

void geometry()
{
    int choice;
    printf("Choose Shape:\n1: Rectangle\n2: Square\n3: Circle \n");
    scanf("%d",&choice);
    if(choice==1)
    {
        Rectangle();
    }
    else if(choice==2)
    {
        Square();
    }
    else if(choice==3)
    {
        Circle();
    }
    else
    {
     printf("Wrong Operation chosen");
        exit(0);   
    }
    return 0;
}
void Rectangle()
{
    float s1,s2;
    printf("Enter Side1: ");
    scanf("%f",&s1);
    printf("\nEnter Side2: ");
    scanf("%f",&s2);
    printf("\nArea of Rectangle is: %f",s1*s2);
    printf("\nPerimeter of Rectangle is: %f",2*(s1+s2));    
}

void Square()
{
    float s1;
    printf("Enter Side: ");
    scanf("%f",&s1);
    printf("\nArea of Rectangle is: %f",s1*s1);
    printf("\nPerimeter of Rectangle is: %f",4*s1);    
}

void Circle()
{
    float s1;
    printf("Enter Radius: ");
    scanf("%f",&s1);
    printf("\nArea of Circle is: %f",3.14*s1*s1);
    printf("\nPerimeter of Perimeter is: %f",2*3.14*s1);
}