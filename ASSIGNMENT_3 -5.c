///////////////////////////////////////////////////////////////////////////////////////////
//							       								
// Problem Statement : Accept one character From User And check it is vowel or not (a,e,i,o,u) or not       
//							       						        
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//																
//          Function Name : CheckVowel										
//          Input : character										
//          Output : character												
//          Description : check it is vowel or not				
//          Author : Shivraj Rajendra Khulape									
//          Date : 11.05.2025											
//																
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char ch)
{
      if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
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
   char cValue = '\0';
   bool bRet = false;

   printf("Enter The Character:\n");
   scanf("%c",&cValue);

   bRet = CheckVowel(cValue);

   if(bRet == true)
   {
         printf("It is Vowel...\n");
   }
   else
   {
        printf("It is Not Vowel...\n");
   }
   return 0;
}