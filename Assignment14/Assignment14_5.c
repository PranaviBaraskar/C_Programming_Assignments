////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 5 :  Accept number from user and display pattern.
// 
//                           Output :   2    4    6    8   10    12    14    16                       
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Pattern
//    Input             :   integer
//    Output            :   nothing returns
//    Description       :   Display pattern
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   16.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
      printf("%d\t",iCnt*2);
   }

   printf("\n");
   
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;

   printf("Enter the frequency  :\n");
   scanf("%d",&iValue);

   Pattern(iValue);

   return 0;
}