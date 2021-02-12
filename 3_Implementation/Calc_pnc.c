#include<stdio.h>
long permutation(int n, int r);
long combination(int n, int r);
long factorial(int x);

int main(void)
{
    int n, r;
    printf("Enter n: \n");
    scanf("%d", &n);

    printf("Enter r:");
    scanf("%d", &r);

    printf("Permutation = %ld\n", permutation(n,r));
    printf("Combination = %ld\n", combination(n,r));

    return 0;
 }

 long permutation(int n, int r)
 {
     return factorial(n) / factorial(n-r);
 }

 long combinaion(int n, int r)
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