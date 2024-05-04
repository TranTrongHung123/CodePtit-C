#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int N;
		scanf("%d", &N);
		double s = (double)1/N;
		printf("%.15lf\n", s);
	}
}
