///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statements 3 : write a program which accept number from user and print its number line.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Display
//    Input             :   integer
//    Output            :   nothing returns
//    Description       :   Display the number line of given input(- to +)
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   04.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo1)
{  
    int iCnt = 0;

    for(iCnt = -iNo1; iCnt <= iNo1; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iValue1 = 0;

   printf("Enter Number\n");
   scanf("%d",&iValue1);

   Display(iValue1);

   return 0;
}