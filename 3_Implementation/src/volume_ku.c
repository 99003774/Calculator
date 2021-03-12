#include "volume_ku.h"


const float PI =3.14;
int volumeOfCone(float radius, float height) 
{
    //printf("CONE\n");
    //float radius, height;
    //printf("Enter the radius \n");
    //scanf("%f", &radius);
    //printf("Enter the height \n");
    //scanf("%f", &height);
    float volume1 = (PI*radius*radius*height)/3;
   // printf("Volume of cone is : %f", volume1);
    return volume1;
}
int volumeOfSphere(float radius) {
    //printf("SPHERE\n");
    //float radius;
    //printf("Enter the radius \n");
    //scanf("%f", &radius);
    float volume2 = (PI*radius*radius*radius)*4/3;
    //printf("Volume of Sphere is : %f", volume2);
    return volume2;
}
int volumeOfCylinder(float radius,float height) 
{
    //printf("CYLINDER\n");
    //float radius,height;
    //printf("Enter the radius \n");
    //scanf("%f", &radius);
    //printf("Enter the height \n");
    //scanf("%f", &height);    
    float volume3 = PI*radius*radius*height;
    //printf("The volume of cylinder is : %f", volume3);
    return volume3;
}