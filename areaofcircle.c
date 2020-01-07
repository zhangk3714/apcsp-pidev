#include <stdio.h>
#include <math.h>

float CircleAreaFunction(float r)
{
        return r * r * M_PI;
}

int main()
{

float a;
float i;

for (i = 3.5; i <= 12.5; i++)
{
	a = CircleAreaFunction(i);
	printf("The area of the circle with radius %f is %f\n", i, a);
}

}
