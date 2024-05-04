#include <stdio.h>
#include <math.h>

int main() {
	int x, y;
	while (scanf("%d%d", &x, &y) != EOF) {
		if (x == y) {
			printf("0\n");
		}
		else{
			float s;
			if (x < y) s = (float)y - x;
			else s = (float)x - y;
			float c = floor(sqrt(s));
			float n = (s-c*c)/c;
			float t = c*2-1+ceil(n);
			printf("%d\n", (int)t);			
		}
	}
}
