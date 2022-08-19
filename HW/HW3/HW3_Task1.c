#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	float op1, op2;
	char symbol;
	char operand;
	char oper1[10], oper2[10];
	int flag = 0;
	int i = 0;
	symbol = getc(stdin);
	while (symbol != EOF)
	{
		if ((isdigit(symbol) || symbol == '.') && !flag)
		{
			oper1[i] = symbol;
			i++;
		}
		if (isspace(symbol))
		{
			flag = 1;
			i = 0;
		}
		if (ispunct(symbol) && symbol != '.')
		{
			operand = symbol;
		}
		if ((isdigit(symbol) || symbol == '.') && flag)
		{
			oper2[i] = symbol;
			i++;
		}
		if (symbol == '\n')
		{
			flag = 0;
			i = 0;
			op1 = atof(oper1);
			op2 = atof(oper2);
			switch (operand)
			{
				case '+': printf("%0.2f\n", op1 + op2); break;
				case '-': printf("%0.2f\n", op1 - op2); break;
				case '*': printf("%0.2f\n", op1 * op2); break;
				case '/': printf("%0.2f\n", op1 / op2); break;
				default: printf("Unsupported operation"); break;
			}
		}
		symbol = getc(stdin);
	}

	return 0;
}