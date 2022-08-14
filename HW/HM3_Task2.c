#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int triangle(double a, double b, double c, double* S, double* P)
{
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		return -1;
	}
	if (a > 0 && b > 0 && c > 0)
	{
		*P = a + b + c;
		double semi;
		semi = (a + b + c) / 2;
		*S = sqrt(semi * (semi - a) * (semi - b) * (semi - c));
	}
	else return -1;
	return 0;
}

int main()
{
	double a, b, c,S,P;
	char* dbl;
	char op1[10], op2[10], op3[10];
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
		if ((isdigit(symbol) || symbol == '.' || symbol == '-') && counter==0)
		{
			op1[i] = symbol;
			i++;
		}

		if ((isdigit(symbol) || symbol == '.' || symbol == '-') && counter==1)
		{
			op2[i] = symbol;
			i++;
		}
		if ((isdigit(symbol) || symbol == '.' || symbol == '-') && counter == 2)
		{
			op3[i] = symbol;
			i++;
		}
		if (symbol == '\n')
		{
			i = 0;
			counter = 0;
			a = strtod(op1,&dbl);
			b = strtod(op2, &dbl);
			c = strtod(op3, &dbl);
			if (triangle(a, b, c, &S, &P))
			{
				printf("Invalid values for triagle sides!\n");
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