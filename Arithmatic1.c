#include<stdio.h>
void main()
{
    int a,b;
    int ans;
    printf("Enter the value of 2 numbers : ");
    scanf("%d%d" ,&a ,&b);
    ans=a+b;
    printf("\nAddition of two numbers :  %d" ,ans);
    ans=a-b;
    printf("\nSubstraction of 2 numbers : %d" ,ans);
    ans=a*b;
    printf("\nMultiplication of 2 numbers : %d" ,ans);
    ans=a%b;
    printf("\nModulo is : %d" , ans);
}