#include <windows.h>
#include <stdio.h>
#include <string.h>


void printString(char *string)
{
  for (; *string != '\0'; )
  	putchar(*(string++));

}

int main()
{
	const char *txt = "EU QUERIA TESTAR ISSO";

	printString((char *)txt);
	getchar();
}