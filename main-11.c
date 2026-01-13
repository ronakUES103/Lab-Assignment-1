/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float basic, da, ta, gross_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = 0.10 * basic;   
    ta = 0.12 * basic;  

    gross_salary = basic + da + ta;

    printf("Gross Salary = %.2f", gross_salary);

    return 0;
}

