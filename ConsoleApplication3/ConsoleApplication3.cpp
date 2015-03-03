// This is the main project file for VC++ application project 
// generated using an Application Wizard.

#include "stdafx.h"

//#using <mscorlib.dll>
//using namespace System;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calc(int op1, int op2, int opcode)
{
	__asm
	{
		mov eax, 0; zero out the result
			mov ebx, opcode; move opcode to ebx for comparison

			cmp ebx, 0x01; check for ADD
			jne sub_2;
		mov eax, op1;
		add eax, op2;
		jmp done;

	sub_2:
	done :
	};
}

int main(int argc, char** argv)
{
	int op1, op2, result;

	op1 = op2 = result = 0;

	/*
	if (argc != 3)
	{
	printf("Usage: %s op1 op2 (two integers)\n", argv[0]);
	return 1;
	}

	op1 = atoi(argv[1]);
	op2 = atoi(argv[2]);
	*/
	op1 = 10;
	op2 = 20;
	printf("Operand 1 = %d    Operand 2 = %d\n", op1, op2);
	result = calc(op1, op2, 1);
	printf("Add: %10d   x%08x\n", result, result);
	result = calc(op1, op2, 2);
	printf("Sub: %10d   x%08x\n", result, result);
	result = calc(op1, op2, 3);
	printf("Mul: %10d   x%08x\n", result, result);
	result = calc(op1, op2, 4);
	printf("Div: %10d   x%08x\n", result, result);
	result = calc(op1, op2, 5);
	printf("Mod: %10d   x%08x\n", result, result);
	result = calc(op1, op2, 6);
	printf("And: %10d   x%08x\n", result, result);
	result = calc(op1, op2, 7);
	printf("Or:  %10d   x%08x\n", result, result);
	result = calc(op1, op2, 8);
	printf("Xor: %10d   x%08x\n", result, result);
	result = calc(op1, op2, 9);
	printf("Fac: %10d   x%08x\n\n", result, result);

	return 0;
}

