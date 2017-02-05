// Lab 2_2.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

char fifteen_bss[15];

void stack_function(char* f_s, char* heap)
{
	heap = f_s;
	strcpy_s(heap, 13, f_s);
}

int _tmain(int argc, _TCHAR* argv[])
{
	//1. Copy 12 bytes from the BSS section of the program to the stack
	//add 12 bytes to the BSS section
	static char twelve_bss[12];
	char twelve_stack[] = "12345678901";
	strcpy_s(twelve_stack, twelve_bss);


	//2. Copy 13 bytes from the heap to the DATA section
	//add 13 bytes to the heap
	char* thirteen_heap = (char*)malloc(20 * sizeof(char));
	printf("\nEnter 12 characters: ");
	scanf_s("%s", thirteen_heap);
	printf("\nThe new string is: %s", thirteen_heap);


	//3. Copy 14 bytes from the stack to the heap

	char fourteen_stack[] = "abcdefghijklm";
	char* to_heap = (char*)malloc(14 * sizeof(char));
	stack_function(fourteen_stack, to_heap);

	//4. Copy 15 bytes from the DATA section to the BSS
	//add 15 bytes to the data section	

	strcpy_s(fifteen_bss, 15, "12345678901234");




	//5. Copy 4 bytes from the text section to the DATA section
	//add 4 bytes to the text section


	return 0;
}



