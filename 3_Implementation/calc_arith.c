#include <stdio.h>
int main()
{
    char operator ;
    float num1, num2;
    printf("enter an operator(+,-,*,):");
    scanf("%c", &operator);
    printf("enter two operands:");
    scanf("%1f %1f" , &num1, &num2);

switch(operator)
{
case '+':
printf("%.1lf + %.1lf = %.1lf", num1, num2, num1+num2);
break;

 case'-':
 printf("%.1lf-%.1lf=%.1lf",num1,num2, num1-num2);
 break;

 case'*':
 printf("%.1lf*%.1lf=%.1lf",num1,num2, num1*num2);
 break;

 case'/':
 printf("%.1lf/%.1lf=%.1lf",num1,num2, num1/num2);
 break;
//operator doesnt match any case constant
default:
printf("error! operator is not correct");
}
return 0;
}
