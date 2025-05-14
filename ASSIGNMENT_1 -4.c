///////////////////////////////////////////////////////////////////////////////////////////
//							       								
// Problem Statement : Accept one Number And Check Number Divisible by 5 of Not       
//							       						        
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//																
//          Function Name : CheckNumber										
//          Input : Integer										
//          Output : Integer												
//          Description : Check Number Divisible by 5 of Not 		
//          Author : Shivraj Rajendra Khulape									
//          Date : 11.05.2025											
//																
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int Bool;
#define TRUE 1
#define FALSE -1

Bool NumberCheck(int iNo)
{
      if((iNo / 5) == 0)
      {
          return TRUE;
      }
      else
      {
          return FALSE;
      }
}
int main()
{
     int iValue = 0;
     Bool bRet = FALSE;

     printf("Enter The Number :\n");
     scanf("%d",&iValue);

     bRet = NumberCheck(iValue);

     if(bRet == TRUE)
     {
          printf("Divisible by 5...\n");
     }
     else
     {
          printf("Not Divisible by 5...\n");
     }
   return 0;
}