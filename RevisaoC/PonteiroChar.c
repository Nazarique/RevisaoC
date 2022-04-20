// TESTE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// #include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
   
   char strTexto[] = "Sera que vai funcionar";
   char* str = strTexto;

   for (; *str != '\0'; putchar(*str), str++);
   getchar();
}
