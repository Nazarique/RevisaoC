// TESTE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define GET_VARIABLE_NAME(Variable) (#Variable)

int main()
{
   int iVar = 52;
   int *piVar = &iVar;
   printf("***VARIAVEL***\n");
   printf("Valor de () %s: %d\n", GET_VARIABLE_NAME(iVar), iVar);
   printf("Endereco de (&) %s: %u\n", GET_VARIABLE_NAME(iVar), &iVar);
   printf("\n\n***PONTEIRO***\n");
   printf("Valor de (*) %s: %d\n", GET_VARIABLE_NAME(piVar), *piVar);
   printf("Endereco de (&) %s: %u\n", GET_VARIABLE_NAME(piVar), &piVar);
   printf("End. Apontado de () %s: %u\n", GET_VARIABLE_NAME(piVar), piVar);

   printf("\n\n\n\n\n");
   printf("Valor de %s mas usando %s++ : %d\n", GET_VARIABLE_NAME(iVar), GET_VARIABLE_NAME(piVar), ++(*piVar));

   getchar();
}
