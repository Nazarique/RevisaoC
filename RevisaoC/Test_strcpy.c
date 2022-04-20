#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
   
   char strText[20] = "";
   const char* str = "TEXTO MUITO GRANDE 123456789123456789";

   strcpy(strText, &str[7]);
   puts(strText);

   getchar();
}
