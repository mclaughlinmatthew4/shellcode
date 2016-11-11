#include <stdio.h>

int
factorial(int n)
{
int i;
int product;
if(n < 2) return n;
/* else */
product = 1;
for(i = 2; i <= n; i++) {
product *= i;
}
return product;
}


int main(void) 
{
   int a;

   printf("Please input an integer value: ");
   scanf("%d", &a);
   printf("You entered: %d\n", a);

   printf("the factorial of %d is equal to: %d\n",a, factorial(a));
   
   return 0;
}