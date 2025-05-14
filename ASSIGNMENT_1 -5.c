///////////////////////////////////////////////////////////////////////////////////////////
//							       								
// Problem Statement : Accept Number And Print * on Screen     
//							       						        
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//																
//          Function Name : Display										
//          Input : Integer										
//          Output : Integer												
//          Description : Print * on Screen  		
//          Author : Shivraj Rajendra Khulape									
//          Date : 11.05.2025											
//																
///////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Display(int iNo)
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
      iValue = 5;

      printf("Enter The Number:\n");
      scanf("%d",&iValue);

      Display(iValue);

     return 0;
}