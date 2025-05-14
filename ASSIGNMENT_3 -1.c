///////////////////////////////////////////////////////////////////////////////////////////
//							       								
// Problem Statement : Accept Number From User And print Even Number       
//							       						        
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//																
//          Function Name : PrintEven										
//          Input : Integer										
//          Output : Integer												
//          Description : print Even Number				
//          Author : Shivraj Rajendra Khulape									
//          Date : 11.05.2025											
//																
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
     int iCnt = 0;
     
     if(iNo <= 0)
     {
          return;
     }

     for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
         printf("%d",2 * iCnt);
     }
}
int main()
{
   int iValue = 0;

   printf("Enter The Number:\n");
   scanf("%d",&iValue);

   PrintEven(iValue);
   return 0;
}