/* Given n, compute n! = 1*2*...*n */
/* Warning: will overflow on 32-bit machines if n > 12 */
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

/*
Source: 
Notes on Data Structures and Programming
Techniques (CPSC 223, Spring 2015)
James Aspnes
2015-04-29T08:59:08-0400
downloaded from: http://www.cs.yale.edu/homes/aspnes/classes/223/notes.pdf
*/