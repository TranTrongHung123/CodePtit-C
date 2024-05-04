#include <stdio.h>
#include <math.h>

struct diem{
	float x;
	float y;
};

typedef struct diem D;

void nhap(D* a){
	scanf("%f%f", &a->x, &a->y);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		D A, B, C;
		nhap(&A);
		nhap(&B);
		nhap(&C);
		float AB = sqrt(pow(A.x-B.x,2) + pow(A.y-B.y,2));
		float AC = sqrt(pow(A.x-C.x,2) + pow(A.y-C.y,2));
		float BC = sqrt(pow(C.x-B.x,2) + pow(C.y-B.y,2));
		if((AB+AC <= BC) || (AB+BC <= AC) || (BC+AC <= AB)) printf("INVALID");
		else printf("%.3f", AB+AC+BC);
		printf("\n");
	}
}
