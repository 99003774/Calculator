#include<stdio.h>
#include<math.h>
const float PI =3.14;
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
int main()
{
    int choice;
    printf("1. CONE\n");
    printf("2. Sphere\n");
    printf("3. Cylinder\n");

    printf("Enter the choice : \n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            volumeOfCone();
            break;

        case 2:
            volumeOfSphere();
            break;    

        case 3:
            volumeOfCylinder();
            break;
        default:
            printf("Please enter correct choice \n");
            break;    
    }
        return 0;
}
