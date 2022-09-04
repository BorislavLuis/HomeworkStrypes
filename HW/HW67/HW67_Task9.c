#ifdef _MSC_VER
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

void SPRINTF(char* szBuffer, char* szPattern,const char** args);
int sizeArray=0;
int main()
{
	const char* args[] = { "Arg1","Arg2","Arg3","Arg4"};
	sizeArray = sizeof(args)/sizeof(args[0]);
	char result[255];
	char* pattern = "This are %s and %s -> %s. Also %s is here. Final test , does %s exist?";

	SPRINTF(result, pattern, args);
	printf("%s", result);
	return 0;
}

void SPRINTF(char* szBuffer, char* szPattern,const char** args)
{
	int n = 0;
	int row=0, col=0;
	int resultcounter=0;
	while (szPattern[n] != '\0')
	{
		n++;
	}
	for (int i = 0; i < n; i++)
	{
		if (szPattern[i] == '%' && szPattern[i + 1] == 's' && row != sizeArray)
		{
			int counter = 0;
			while (args[row][col]!='\0')
			{
				szBuffer[resultcounter + counter] = args[row][col];
				col++;
				counter++;
			}
			resultcounter +=counter;
			row++;
			col = 0;
			i++;
		}
		else
		{
			if (!(szPattern[i] == '%' && szPattern[i + 1] == 's'))
			{
				if (!(szPattern[i - 1] == '%' && szPattern[i] == 's'))
				{
					szBuffer[resultcounter] = szPattern[i];
					resultcounter++;
				}
			}

		}
	}
	szBuffer[resultcounter] = '\0';
}