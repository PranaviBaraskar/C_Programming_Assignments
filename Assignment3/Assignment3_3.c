///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 3 : Write a program which accpect number from user and display
//                          all its non factors.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   NonFact
//    Input             :   integer
//    Output            :   nothing returns
//    Description       :   Display all non factors
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   04.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
      if((iNo % iCnt) != 0)
      {
         printf("%d\n",iCnt);
      }
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

   NonFact(iValue);

}