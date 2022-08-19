#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int quadEquation(double a, double b, double c,double* x1, double* x2)
{
    double D = (b * b) - (4 * a * c);
    if (D < 0)
    {
        return -1;
    }
    else if (D == 0)
    {
        *x1 = *x2 = (-b) / (2 * a);
    }
    else
    {
        *x1 = ((-b) - sqrt(D)) / (2 * a);
        *x2 = ((-b) + sqrt(D)) / (2 * a);
    }
	return 0;
}

int main(int argc,char* argv[])
{
    char* argument;
    char* dtl;
    double a, b, c,x1,x2;
    int counter = 0;
    printf("Program name is: %s\n", argv[0]);
    if (argc < 4) printf("More arguments needed");
    if (argc >= 4)
    {
        for (int i = 1; i < argc; i++)
        {
            argument = argv[i];
            if (counter == 0)
            {
                a = strtod(argument, &dtl);
                counter++;
            }
            else if (counter == 1)
            {
                b = strtod(argument, &dtl);
                counter++;
            }
            else if (counter == 2)
            {
                c = strtod(argument, &dtl);
                counter++;
            }
            else
            {
                printf("Too many arguments!\n");
                counter = 0;
            }
        }
        if (!quadEquation(a, b, c, &x1, &x2))
        {
            printf("x1 = %lf\n", x1);
            printf("x2 = %lf\n", x2);
        }
        else
        {
            printf("No real roots!\n");
        }
    }

	return 0;
}