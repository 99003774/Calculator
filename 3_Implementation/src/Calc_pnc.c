#include "Calc_pnc.h"


 long permutation(int n, int r)
 {

     return factorial(n)/factorial(n-r);
     
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
