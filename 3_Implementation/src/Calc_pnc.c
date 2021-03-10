#include "Calc_pnc.h"

void per_comb()
{
    printf("Enter n: \n");
    scanf("%d", &n);

    printf("Enter r:");
    scanf("%d", &r);

	printf("select operation to be performed\n1.Pertutaion\n2.Combination\n");
	scanf("%d",&ch);
	
	switch(ch){
	case 1: printf("Permutation = %ld\n", permutation(n,r));
		break;
	case 2: printf("Combination = %ld\n", combination(n,r));
		break;
	default: printf("You have selected wrong option\n");
	}

 }

 long permutation(int n, int r)
 {
     return factorial(n) / factorial(n-r);
 }

 long combination(int n, int r)
 {
     return permutation(n,r) / factorial(r);
 }

 long factorial(int x)
 {
     long long f = 1;
     while (x > 0)
     {
         f = x* f;
         x--;
     }
     return f;
}