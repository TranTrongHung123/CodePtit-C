#include <stdio.h>
#include <math.h>

int main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4;
	scanf("%d %d %d %d\n%d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	int X1 = x1 < x3 ? x1 : x3;
	int Y1 = y1 < y3 ? y1 : y3;
	int X2 = x2 > x4 ? x2 : x4;
	int Y2 = y2 > y4 ? y2 : y4;
	int canh = abs(X1-X2) > abs(Y1-Y2) ? abs(X1-X2) : abs(Y1-Y2);
	printf("%d", canh*canh);
}


