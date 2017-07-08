#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int T;
	scanf("%d", &T);

	int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, area;

	for(int i=1; i<=T; i++)
	{
		scanf("%d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy);

		Dx = Cx + Ax - Bx;
		Dy = Cy + Ay - By;

		area = abs(Ax*By + Bx*Cy + Cx*Dy + Dx*Ay - Ay*Bx - By*Cx - Cy*Dx - Dy*Ax)/2;

		printf("Case %d: %d %d %d\n", i, Dx, Dy, area);
	}

	return 0;
}
