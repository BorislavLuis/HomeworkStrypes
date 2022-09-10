#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{
	//srand(time(NULL));
	int n,m,k;
	scanf_s("%d", &n);
	char* arr = malloc(n*sizeof(char));
	strcpy(arr, "bo\0");
	//for (int i = 0; i < n; i++)
	//{
	//	//char c = (char)rand(65, 90);
	//	//*arr = 'j';
	//	//strcat(*arr,c);
	//}
	free(arr);
	return 0;
}