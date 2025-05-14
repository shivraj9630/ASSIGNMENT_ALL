///////////////////////////////////////////////////////////////////////////////////////////
//							       								
// Problem Statement : Accept character From User And Convert Case to Character       
//							       						        
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//																
//          Function Name : DisplayConvert										
//          Input : character										
//          Output : character												
//          Description : Convert Case to Character				
//          Author : Shivraj Rajendra Khulape									
//          Date : 11.05.2025											
//																
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayCharacter(char ch)
{
       if((ch >= 'A') && (ch <= 'Z'))
       {
           ch = ch + 32;
           printf("%c",ch);
       }
       else if((ch >= 'a') && (ch <='z'))
       {
           ch = ch - 32;
           printf("%c",ch);

       }
}
int main()
{
   char cValue = '\0';

   printf("Enter The Character:\n");
   scanf("%c",&cValue);

   DisplayCharacter(cValue);
   return 0;
}