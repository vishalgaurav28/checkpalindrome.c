/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//c programming to checking whether the number is palindrome is palindrome is palindrome or not//
#include <stdio.h>
int main()
{
    int number,revNumber=0,rem=0,tempNumber;
    printf("enter a integer number");
    scanf("%d",number);
    tempNumber=number;
    while(tempNumber!=0)
    {
        rem=tempNumber%10;
        revNumber=revNumber*10+rem;
        tempNumber/=10;
    }
    if(revNumber==number)
    printf("%d is a palindrome",number);
    else
    printf("%d is not a palindrome",number);
    return 0;
}

