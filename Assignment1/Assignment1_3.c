//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statements : Program to print 5 to 1 numbers on scrreen.
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Divide
//    Input             :   integer, integer
//    Output            :   integer
//    Description       :   print 5 to 1 on screen using while loop
//    Author            :   Pranavi Ghanshyaam Baraskarr
//    Date              :   24.4.2023
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
   int i = 0;
   i = 1;
   while(i <= 5 )
   {
      printf("%d\n",i);
      i++;
   }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   Display();

   return 0;
}