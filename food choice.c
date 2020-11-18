#include<stdio.h>
int main()
{
  printf("pick a number: \n. 1. \n. 2. \n. 3. \n. 4. \n. 5.");
  int choice=0;
  scanf("%d",&choice);

  switch(choice)
   {
   case 1 :
            printf("Food item - French Fries. \n price-99");
            break;
   case 2 :
            printf("Food item - Burger. \n price-129");
            break;

   case 3 :
            printf("Food item - Sandwhich. \n price-149");
            break;
   case 4 :
            printf("Food item - Pizza. \n price-239");
            break;
   case 5 :
            printf("Food item - Pasta. \n price-179");
            break;
   default:
           printf("invalid choice");
   }
}
