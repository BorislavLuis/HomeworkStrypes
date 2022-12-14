#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>

void VMirror(unsigned char* pImage);

int main()
{
	unsigned char arr[64] = { 0x7F,0x40,0x40,0x40,0x7F,0x00,0x00,0x00,
							  0xFF,0x20,0x20,0x40,0xAF,0x00,0x30,0x50,
							  0x33,0x44,0x5D,0x42,0x74,0x20,0x55,0x00,
							  0x00,0x00,0x00,0x00,0x8F,0x7D,0x6A,0x22,
							  0x8F,0x90,0x67,0x23,0x45,0xAB,0xBC,0xDC,
							  0xAA,0xBB,0xC2,0x40,0xF2,0xFF,0xFF,0xFF,
							  0x00,0x00,0x00,0x32,0x45,0xAD,0xDE,0xEE,
							  0xFE,0x02,0x02,0x02,0xFE,0x00,0x00,0x00 };
	printf("Before mirror:\n");
	for (int i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0) printf("\n");
		printf("%x ", arr[i]);
	}
	printf("\n\n");
	VMirror(arr);
	printf("After mirror:\n");
	for (int i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i!=0) printf("\n");
		printf("%x ", arr[i]);
	}
	return 0;
}

void VMirror(unsigned char* pImage)
{
	unsigned char temp;
	unsigned int small = 0;
	unsigned int big = 56;
	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 8; k++,small++,big++)
		{
			temp = pImage[big];
			pImage[big] = pImage[small];
			pImage[small] = temp;
		}
		big = big - 16;
	}
}