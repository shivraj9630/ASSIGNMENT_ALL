///////////////////////////////////////////////////////////////////////////////////////////
//							       								
// Problem Statement : Accept 2 Number From User And display first Number in secound number of times     
//							       						        
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//																
//          Function Name : Display										
//          Input : Integer										
//          Output : Integer												
//          Description : Display first Number in secound number of times 				
//          Author : Shivraj Rajendra Khulape									
//          Date : 11.05.2025											
//																
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Display(int iNo, int iFreq)
{
   int iCnt = 0;

   if(iNo < 0)
   {
       iNo = -iNo;
   }

   for(iCnt = 1; iCnt <= iFreq; iCnt++)
   {
      printf("%d\n",iNo);              
   }     
}
int main()
{
   int iValue1 = 0;
   int iValue2 = 0;

   printf("Enter The Number:\n");
   scanf("%d",&iValue1);

   printf("Enter The Frequency:\n");
   scanf("%d",&iValue2);

   Display(iValue1,iValue2);
   return 0;
}