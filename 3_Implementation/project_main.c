#include "area_ku.h"
#include "volume_ku.h"
#include "Calc_ari.h"
#include "Calc_pnc.h"
#include <stdlib.h>
#include <stdio.h>

// /* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

// /* Calculator operation requested by user*/
// unsigned int calculator_operation = 0;

// /* Operands on which calculation is performed */
// int calculator_operand1 = 0;
// int calculator_operand2 = 0;

// /* Valid operations */
// enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE };

// /* Display the menu of operations supported */
// void calculator_menu(void);
// /* Verifies the requested operations validity */
// int valid_operation(int operation);


int main()
{
    float rad, hei;
    float len,bre,si;
    float d,c,e,f,g,h,i,j;
    long a,b;
    long z;
    // printf("Enter the side\n");
    // scanf("%f", &si);

    // printf("Enter length");
    // scanf("%f", &len); 
    // printf("Enter breadth");
    // scanf("%f", &bre);

    // printf("Enter the radius\n");
    // scanf("%f", &rad);

    // printf("Enter the height\n");
    // scanf("%f", &hei);

    areaOfSquare(si);
    areaOfRectangle(len,bre);
    volumeOfCone(rad,hei);
    volumeOfSphere(rad);
    volumeOfCylinder(rad,hei); 
    add(d,c);
    sub(e,f);
    mul(g,h);
   
 float divs(float s5, float s6); 
 long permutation(int n, int r);
 long combination(int n, int r);
 long factorial(int x);

    return 0;
}
