#include <cstdio>
#include <cmath>

#define PI acos(-1.0)

int main()
{
    int T;
    scanf("%d", &T);

	double length, breadth, radius, coefficient, areaCircle, areaRectangle;

    while(T--)
	{
		scanf("%lf", &length);
		coefficient = length/5;
		radius = coefficient;
		breadth = coefficient*3;

		areaRectangle = length * breadth;
		areaCircle = PI * pow(radius, 2);
		areaRectangle -= areaCircle;

		printf("%.2lf %.2lf\n", areaCircle, areaRectangle);
	}

	return 0;
}
