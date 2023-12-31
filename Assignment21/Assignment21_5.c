////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Accept character from user and display its ASCII value in decimal, ocatl and hexadecimal format.
//                                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Display
//    Input             :   Character
//    Output            :   nothing returns
//    Description       :   display ASCII value of given number
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
   char iCnt = 0;

   for(iCnt = 1; iCnt <= 127 ; iCnt++)
   {
      if(ch == iCnt )
      {
         printf("Decimal : %d\n",iCnt);
         printf("Hexadecimal : %x\n",iCnt);
         printf("Octal : %o\n",iCnt);
         break;
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
   char cValue = '\0';
   
   printf("Enter the character :\n");
   scanf("%c",&cValue);

   Display(cValue);

   return 0;
}
