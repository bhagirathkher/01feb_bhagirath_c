// String Reverse using strrev

#include<stdio.h>
#include<String.h>
int main()
{
    char word[15];
    printf ("Enter Word That you Want to Reverse : ");
    scanf("%s",&word);
    strrev(word);
    printf("Your Reverse Word is : %s",word);
}