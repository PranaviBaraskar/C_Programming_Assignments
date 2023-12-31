////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 2 :  Accept number from user and display pattern.
// 
//                           Output :     5  #  4  #   3  #  2  #  1                        
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

   for(iCnt = iNo; iCnt >= 1; iCnt--)
   {
      printf("%d\t#\t",iCnt);
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