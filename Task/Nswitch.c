#include<stdio.h>
int main()
{
    int Hotcoffee,Coldcoffee,HotTea,ColdTea;
    int choice1;
    int ch;
    printf("\n1.Hot drink : \n2.Cold Drink :");
    printf("\nEnter your Choice");
    scanf("%d",&choice1);
    switch (choice1)
    {
    case 1:
      printf("\n Hot Drink:");
      printf("\n1.HotTea : \n2.HotCoffee :");
      printf("\nEnter your Choice :");
       scanf("%d",&ch);
       switch (ch)
       {
       case 1:
          printf("\n HotTea");
           break;
       case 2:
          printf("\n Hotcoffee");
           break;
       default:
        printf("\n Unavailable");
          break;
       }

        break;
    
    case 2:
         printf("\n Cold Drink :");
          printf("\n1.Coldtea : \n2.Coldcoffee :");
          printf("\nEnter your Choice :");
         scanf("%d",&ch);         
         switch (ch)
         {
         case 1:
             printf("\nColdTea");   
             break;
         case 2:
             printf("\nColdcoffee");
         default:
             printf("\n Una1vailable");
            break;
         }
    default:
         printf("\n Not Available");
        break;
    }
}