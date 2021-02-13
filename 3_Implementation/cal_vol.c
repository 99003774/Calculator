#include<stdio.h>
#include<math.h>
int main()
{
    float pi =3.14;
    int choice;
    printf("1. CONE\n");
    printf("2. Sphere\n");
    printf("3. Cylinder\n");

    printf("Enter the choice : \n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("CONE\n");
            float r1,h;
            printf("Enter the radius \n");
            scanf("%f", &r1);
            printf("Enter the height \n");
            scanf("%f", &h);
            float vol_cone = (pi*r1*r1*h)/3;
            printf("Volume of cone is : %f", vol_cone);
            break;

        case 2:
            printf("SPHERE\n");
            float r2;
            printf("Enter the radius \n");
            float vol_sphere = (pi*r2*r2*r2)*4 / 3;
            printf("Volume of Sphere is : %f", vol_sphere);
            break;    

        case 3:
            printf("CYLINDER\n");
            float r3,height;
            printf("Enter the radius \n");
            scanf("%f", &r3);
            printf("Enter the height \n");
            scanf("%f", &height);    
            float vol_cylinder = pi*r3*2*height;
            printf("The volume of cylinder is : %f", vol_cylinder);
            break;

        default:
            printf("Please enter correct choice \n");
            break;    

    }
        return 0;
}