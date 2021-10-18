/*
Name: Jyotishka Bhattacharjee
Scholar ID: 2012025
*/

#include <stdio.h>
#include <string.h>

int main()
{
  while (1)
  {
    int selection;
    printf("Select a choice: \n 1.Addition \n 2.Multiplication \n 3.Exit \n");
    printf("Enter a choice: ");
    scanf("%d", &selection);
    if (selection == 1)
    {
      char unaryNum1[500], unaryNum2[500];
      printf("Enter two unary no.s: ");
      scanf("%s %s", unaryNum1, unaryNum2);
      if (validunary(unaryNum1) == 1 && validunary(unaryNum2) == 1)
      {
        strcat(unaryNum1, unaryNum2);
        printf("Sum is: %s\n", unaryNum1);
      }
    }
    else if (selection == 2)
    {
      char unaryNum1[500], unaryNum2[500];
      printf("Enter two unary no.s: ");
      scanf("%s %s", unaryNum1, unaryNum2);
      if (validunary(unaryNum1) == 1 && validunary(unaryNum2) == 1)
      {
        printf("Product is: ");
        for (int i = 0; i < strlen(unaryNum2); i++)
        {
          printf("%s", unaryNum1);
        }
        printf("\n");
      }
    }
    else
    {
      printf("Exiting..");
      break;
    }
  }
  return 0;
}