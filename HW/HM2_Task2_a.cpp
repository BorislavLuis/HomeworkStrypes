#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main()
{
	float R,H,V;
	printf("Radius: ");
	scanf_s("%f", &R);
	printf("Height: ");
	scanf_s("%f", &H);
	V = PI * R * R * H;
	printf("Volume: %f m3", V);
	return 0;
}