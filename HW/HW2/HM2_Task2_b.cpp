#include <stdio.h>
#include <math.h>

int main()
{
	float R, H,L, A,V;
	printf("Radius: ");
	scanf_s("%f", &R);
	printf("Lenght: ");
	scanf_s("%f", &L);
	printf("Height: ");
	scanf_s("%f", &H);
	A = acos((R-H)/R)*(R*R) - ((R-H)*sqrt(2*R*H -(H*H)));
	V = A * L;
	printf("Area: %f m3", V);
	return 0;
}