// #include "Calc_geo.h"
// #include "Calc_pnc.h"
// #include "calculator_operations.h"
#include "area_ku.h"
#include "volume_ku.h"

// /* Status of the operation requested */
// #define VALID   (1)
// #define INVALID (0)

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


// /* Start of the application */
// int main(int argc, char *argv[])
// {
//     printf("\n****Calculator****\n");
//     while(1)
//     {
//         calculator_menu();
//     }
// }

// void calculator_menu(void)
// {
//     printf("\nAvailable Operations\n");
//     printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Permutation and Combination\n6.Geometry\n20. Exit");
//     printf("\n\tEnter your choice\n");
   
//      // __fpurge(stdin);
//     scanf("%d", &calculator_operation);

//     if(20 == calculator_operation)
//     {
//         printf("\nThank you. Exiting the Application\n");
//         exit(0);
//     }

//     if(INVALID != valid_operation(calculator_operation))
//     {
//         printf("\n\tStarting Operations\n");
//         // __fpurge(stdin);
//         //scanf("%d %d", &calculator_operand1, &calculator_operand2);
//     }
//     else
//     {
//         printf("\n\t---Wrong choice---\nEnter to continue\n");
//         // __fpurge(stdin);
//         getchar();
//         return;
        
//     }
//     switch(calculator_operation)
//     {
//         case ADD:
//             printf("\n\t%d + %d = %d\nEnter to continue", 
//             calculator_operand1, 
//             calculator_operand2,
//             add(calculator_operand1, calculator_operand2));
            
//             // __fpurge(stdin);
//             getchar();
//             break;
//         case SUBTRACT:
//             printf("\n\t%d - %d = %d\nEnter to continue", 
//             calculator_operand1, 
//             calculator_operand2,
//             subtract(calculator_operand1, calculator_operand2));
            
//             // __fpurge(stdin);
//             getchar();
//             break;
//         case MULTIPLY:
//             printf("\n\t%d * %d = %d\nEnter to continue", 
//             calculator_operand1, 
//             calculator_operand2,
//             multiply(calculator_operand1, calculator_operand2));
            
//             // __fpurge(stdin);
//             getchar();
//             break;
//         case DIVIDE:
//             printf("\n\t%d / %d = %d\nEnter to continue", 
//             calculator_operand1, 
//             calculator_operand2,
//             divide(calculator_operand1, calculator_operand2));
            
//             // __fpurge(stdin);
//             getchar();
//             break;
//         case 5:
//             per_comb();
//             break;
//         case 6:
//             geometry();
//             break;
//         case 20:
//             exit(0);
//             break;
//         default:
//             printf("\n\t---It should never come here---\n");
//     }
// }

// int valid_operation(int operation)
// {
//     /* Check if the operation is a valid operation */
//     return ((ADD <= operation) && (20 >= operation)) ? VALID: INVALID;
// }

//+++++++++++++++++===================================++++++++++++++++++++++++++++++++++============================

int main()
{
    float rad, hei;
    float len,bre,si;
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
    return 0;
}
