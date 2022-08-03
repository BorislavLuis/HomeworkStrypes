#include <stdio.h>
#include <math.h>
int main()
{
	float mass, height, BMI;

	printf("Mass in kg:");
	scanf_s("%f", &mass);
	printf("Height in m:");
	scanf_s("%f", &height);
	BMI = mass / (height * height);
	printf("Normal BMI: %f \n", BMI);
	BMI = 1.3 * (mass / (height * height));
	printf("Oxford BMI: %f \n", BMI);
	return 0;
}