///////////////////////////////////////////////////////////////////////////////////////////
//							       								
// Problem Statement : Accept Number From User And print Even Factor of That Number       
//							       						        
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//																
//          Function Name : DisplayFactor										
//          Input : Integer										
//          Output : Integer												
//          Description : print Even Factor of That Number				
//          Author : Shivraj Rajendra Khulape									
//          Date : 11.05.2025											
//																
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
     int iCnt = 0;
     
     if(iNo < 0)
     {
          iNo = -iNo;
     }

     for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
     {
             if(((iNo % iCnt) == 0) && (iCnt % 2) == 0)
             {
                  printf("%d\n",iCnt);
             }
     }
}
int main()
{
   int iValue = 0;

   printf("Enter The Number:\n");
   scanf("%d",&iValue);

   DisplayFactor(iValue);
   return 0;
}