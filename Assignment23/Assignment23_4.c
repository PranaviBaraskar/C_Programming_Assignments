////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a program which accept string from user and toggle the case
//                                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   DisplayDigit
//    Input             :   String
//    Output            :   nothing retruns 
//    Description       :   Displat digit from string
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *src,char *dest)     
{
   while(*dest != '\0')
   {
      if((*src >= '0') && (*src <= '9'))
      {
         *dest = *src;
         dest++;
      }

      src++;
   }
   *dest = '\0';
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   char Arr[20];
   char Brr[20];
   
   printf("Enter the String :\n");
   scanf("%[^'\n']s",Arr);

   DisplayDigit(Arr,Brr);

   printf("Modified string : %s\n",Brr);

   return 0;
}
