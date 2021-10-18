/*
Name: Jyotishka Bhattacharjee
Scholar ID: 2012025
*/

#include <stdio.h>
#include <string.h>

long int digit(char c);
long int romanToDecimal(char roman[]);
long int decimalToRoman(long int num);

int main()
{

  while (1)
  {
    int select;

    printf("Select an option : \n1. Addition \n2. Multiplication \n3. Exit\n");

    scanf("%d", &select);
    if (select == 1)
    {
      char romanNumber1[500], romanNumber2[500];
      printf("Enter two roman numerals : ");
      scanf("%s %s", romanNumber1, romanNumber2);

      long int decimalNumber1 = romanToDecimal(romanNumber1);
      long int decimalNumber2 = romanToDecimal(romanNumber2);
      if (decimalNumber1 == -1 || decimalNumber2 == -1)
      {
        break;
      }
      else
      {
        long int sum = decimalNumber1 + decimalNumber2;
        printf("The sum  of %s and %s  is : ", romanNumber1, romanNumber2);
        decimalToRoman(sum);
        printf("\n");
      }
    }
    else if (select == 2)
    {
      char romanNumber1[500], romanNumber2[500];
      printf("Enter two roman numeral: ");
      scanf("%s %s", romanNumber1, romanNumber2);
      long int decimalNumber1 = romanToDecimal(romanNumber1);
      long int decimalNumber2 = romanToDecimal(romanNumber2);
      if (decimalNumber1 == -1 || decimalNumber2 == -1)
      {
        break;
      }
      else
      {
        long int product = decimalNumber1 * decimalNumber2;
        printf("The product of %s and %s is : ", romanNumber1, romanNumber2);
        decimalToRoman(product);
        printf("\n");
      }
    }
    else
    {
      printf("Exited.");
      break;
    }
  }

  return 0;
}

long int digit(char c)
{

  long int value = 0;

  if (c == 'I')
  {
    value = 1;
  }
  else if (c == 'V')
  {
    value = 5;
  }
  else if (c == 'X')
  {
    value = 10;
  }
  else if (c == 'L')
  {
    value = 50;
  }
  else if (c == 'C')
  {
    value = 100;
  }
  else if (c == 'D')
  {
    value = 500;
  }
  else if (c == 'M')
  {
    value = 1000;
  }
  else if (c == '\0')
  {
    value = 0;
  }
  else
  {
    value = -1;
  }

  return value;
}

long int romanToDecimal(char roman[])
{
  int i = 0;
  long int number = 0;
  while (roman[i])
  {

    if (digit(roman[i]) < 0)
    {
      printf("Invalid roman literal");
      return -1;
    }

    if ((strlen(roman) - i) > 2)
    {

      if (digit(roman[i]) < digit(roman[i + 2]))
      {
        printf("Invalid roman literal");
        return -1;
      }
    }

    if (digit(roman[i]) >= digit(roman[i + 1]))
    {
      number += digit(roman[i]);
    }
    else
    {
      number += digit(roman[i + 1]) - digit(roman[i]);
      i++;
    }

    i++;
  }

  return number;
}

long int decimalToRoman(long int num)
{
  if (num <= 0)
  {
    return -1;
  }
  while (num != 0)
  {

    if (num >= 1000)
    {
      printf("M");
      num -= 1000;
    }

    else if (num >= 900)
    {
      printf("CM");
      num -= 900;
    }

    else if (num >= 500)
    {
      printf("D");
      num -= 500;
    }

    else if (num >= 400)
    {
      printf("CD");
      num -= 400;
    }

    else if (num >= 100)
    {
      printf("C");
      num -= 100;
    }

    else if (num >= 90)
    {
      printf("XC");
      num -= 90;
    }

    else if (num >= 50)
    {
      printf("L");
      num -= 50;
    }

    else if (num >= 40)
    {
      printf("XL");
      num -= 40;
    }

    else if (num >= 10)
    {
      printf("X");
      num -= 10;
    }

    else if (num >= 9)
    {
      printf("IX");
      num -= 9;
    }

    else if (num >= 5)
    {
      printf("V");
      num -= 5;
    }

    else if (num >= 4)
    {
      printf("IV");
      num -= 4;
    }

    else if (num >= 1)
    {
      printf("I");
      num -= 1;
    }
  }
  return 1;
}