////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statements 5 : Write a program which accept number from user and return difference 
//                         between summation of even digits ans summation of odd digits.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   CountDifference
//    Input             :   integer
//    Output            :   integer
//    Description       :   Subtraction of even and odd digits count
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   10.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDifference(int iNo)
{
   int iDigit = 0;
   int iEven = 0;
   int iOdd = 0;
   

   if(iNo < 0)
   {
      iNo = -iNo;
   }

   while(iNo != 0)
   {
      iDigit = iNo % 10;
      if((iDigit % 2) == 0)
      {
         iEven = iEven + iDigit;
      }
      else if((iDigit % 2) != 0)
      {
         iOdd = iOdd + iDigit;
      }
      iNo = iNo / 10;
   }
   
   return (iEven - iOdd);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number : \n");
   scanf("%d",&iValue);

   iRet = CountDifference(iValue);

   printf("Summation of even and odd numbers is : %d\n",iRet);
   
   return 0;
}