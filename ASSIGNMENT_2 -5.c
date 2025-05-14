///////////////////////////////////////////////////////////////////////////////////////////
//							       								
// Problem Statement : Accept 2 Number From User And Check Num is Even or Odd			       						        
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//																
//          Function Name : CheckNum										
//          Input : Integer										
//          Output : Integer												
//          Description :  Check Num is Even or Odd				
//          Author : Shivraj Rajendra Khulape									
//          Date : 11.05.2025											
//																
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
      if((iNo % 2) == 0)
      {
           return true;
      }
      else
      {
          return false;
      }
}
int main()
{
   int iValue1 = 0;
   int iRet = 0;

   printf("Enter The Number:\n");
   scanf("%d",&iValue1);

   iRet = CheckEven(iValue1);

   if(iRet == true)
   {
        printf("Number is Even...\n");
   }
   else
   {
        printf("Number is odd..\n");
   }

   return 0;
}