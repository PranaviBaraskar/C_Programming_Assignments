///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statements 1 : Write a program which accept number from user and display in reverse
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   DisplayDigit
//    Input             :   integer
//    Output            :   nothing returns
//    Description       :   Display number in reverse format
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   10.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
   int iDigit = 0;

   while(iNo != 0)
   {
      iDigit = iNo % 10;
      printf("%d\n",iDigit);
      iNo = iNo / 10;
   }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;

   printf("Enter Number : \n");
   scanf("%d",&iValue);

   DisplayDigit(iValue);

   return 0;
}