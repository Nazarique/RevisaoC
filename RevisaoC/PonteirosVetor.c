// TESTE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h>
#include <stdio.h>
#include <string.h>
#define GET_VARIABLE_NAME(Variable) (#Variable)

int main()
{
   int ivVar[] = { 52, 34, 2, 13, 89, 56 };
   int *piVar = ivVar;
   int a, b, c = 10;
   const char* sTexto = "Tem gente que gama num peixe com escama, \n\
                  e um peixinho frito e o ultimo grito, mas \n\
                  fique sabendo que um passaro tremendo na  \n\
                  panela fervida e otima pedida!";
   

   printf("\n\na= %d\tb= %d\tc= %d\n\n", a, b, c);
   printf("TESTE: %24.24s\n", sTexto);
   
   getchar();
}
