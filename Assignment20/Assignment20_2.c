////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Accept Character from user and check whether it is capital or not (A-Z).
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   CheckCapital
//    Input             :   Character
//    Output            :   boolean(True/False)
//    Description       :   check the given alphabate is capital or not
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :  
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckAlpha(char CH)
{
   char iCnt = '\0';
   BOOL bFlag = FALSE;

   if((CH >= 'A') && (CH <= 'Z'))
   {
      bFlag = TRUE;
   }
   else
   {
      bFlag = FALSE;
   }

   return bFlag;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("Enter the alphabet to check :\n");
   scanf("%c",&cValue);

   bRet = CheckAlpha(cValue);

   if(bRet == TRUE)
   {
      printf("%c Alphabhet is Capital\n",cValue);
   }
   else
   {
      printf("%c Alphabhet is not Capital\n",cValue);
   }

   return 0;
}