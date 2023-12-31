///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 4 : Write a program which accept three number and print its multiplication.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Multiply
//    Input             :   integer, integer, integer
//    Output            :   integer
//    Description       :   Display the multiplications
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   04.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
   int iSum = 0;

   if(iNo1 == 0)
   {
      iNo1 = 1;
   }
   else if(iNo2 == 0)
   {
      iNo2 = 1;
   }
   else if(iNo3 == 0)
   {
      iNo3 = 1;
   }

   iSum = iNo1 * iNo2 * iNo3;
   return iSum;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
   int iValue3 = 0;
   int iRet = 0;

   printf("Enter Number\n");
   scanf("%d",&iValue1);

   printf("Enter Number\n");
   scanf("%d",&iValue2);

   printf("Enter Number\n");
   scanf("%d",&iValue3);

   iRet = Multiply(iValue1,iValue2,iValue3);

   printf("Multiplication is : %d\n",iRet);

   return 0;
}