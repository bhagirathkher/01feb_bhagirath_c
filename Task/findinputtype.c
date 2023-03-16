 #include<stdio.h>
void main()
{
    char value;
    printf("Enter the value to find input type :- ");
    scanf("%c%c",&value);
    
    if (value >= 48 && value <= 57)
    {
        printf("\n%c%c number",value);
    }
    
    else if (value >= 65 && value <= 122)
    {
        printf("\n%c%c character",value);
    }
    
    else
    {
        printf("\n%c%c special-character",value);
    }
    
}
  