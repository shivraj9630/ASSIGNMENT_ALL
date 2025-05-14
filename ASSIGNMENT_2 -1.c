///////////////////////////////////////////////////////////////////////////////////////////
//							       								
// Problem Statement : Accept Number From User And Display * On Screen       
//							       						        
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//																
//          Function Name : Display										
//          Input : Integer										
//          Output : Integer												
//          Description : Display * On Screen				
//          Author : Shivraj Rajendra Khulape									
//          Date : 11.05.2025											
//																
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
     int iCnt = 0;

     for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
         printf("*\n");
     }
}
int main()
{
   int iValue = 0;

   printf("Enter The Number:\n");
   scanf("%d",&iValue);

   Display(iValue);
   return 0;
}