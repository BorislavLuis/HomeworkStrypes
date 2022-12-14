#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int rectangle(double w, double h, double* S, double* P)
{
	if (w > 0 && h > 0)
	{
		*P = (2*w) + (2*h);
		*S = w*h;
	}
	else return -1;
	return 0;
}

int main()
{
	double a, b, c, S, P;
	char* dbl;
	char op1[10], op2[10];
	char symbol = '0';
	int counter = 0;
	int i = 0;
	symbol = getc(stdin);
	while (symbol != EOF)
	{
		if (isspace(symbol))
		{
			counter++;
			i = 0;
		}
		if ((isdigit(symbol) || symbol == '.' || symbol == '-') && counter == 0)
		{
			op1[i] = symbol;
			i++;
		}

		if ((isdigit(symbol) || symbol == '.' || symbol == '-') && counter == 1)
		{
			op2[i] = symbol;
			i++;
		}
		if (symbol == '\n')
		{
			i = 0;
			counter = 0;
			a = strtod(op1, &dbl);
			b = strtod(op2, &dbl);
			for (int i = 0; i < 10; i++)
			{
				op1[i] = ' ';
				op2[i] = ' ';
			}
			if (rectangle(a, b, &S, &P))
			{
				printf("Invalid rectangle size!\n");
			}
			else
			{
				printf("Perimeter = %0.2lf\n", P);
				printf("Area = %0.2lf\n", S);
			}
		}
		symbol = getc(stdin);

	}

	return 0;
}