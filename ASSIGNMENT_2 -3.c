///////////////////////////////////////////////////////////////////////////////////////////
//							       								
// Problem Statement : Accept Number From User And if Number is less then 10 print Hello otherwise print Demo     
//							       						        
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//																
//          Function Name : Display										
//          Input : Integer										
//          Output : Integer												
//          Description : Number is less Then 10 print Hello Otherwise Print Demo				
//          Author : Shivraj Rajendra Khulape									
//          Date : 11.05.2025											
//																
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Display(int iNo)
{
     if(iNo < 0)
     {
        printf("Invalid Input...\n");
     }

     if(iNo < 10)
     {
         printf("Hello\n");
     }
     else
     {
        printf("Demo\n");
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