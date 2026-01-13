/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, n, answer;

    printf("Enter number: ");
    scanf("%f", &a);

    printf("Enter value of n: ");
    scanf("%f", &n);

    answer = pow(a, 1/n);

    printf("Nth root = %f", answer);

    return 0;
}
