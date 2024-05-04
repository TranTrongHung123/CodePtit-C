#include <stdio.h>

struct sinhvien{
	int mts;
	char ten[1000];
	char ngaysinh[1000];
	float diem1, diem2, diem3;
};

typedef struct sinhvien SV;

void nhap(SV* a){
	getchar();
	gets(a->ten);
	gets(a->ngaysinh);
	scanf("%f%f%f", &a->diem1, &a->diem2, &a->diem3);
}

void xuat(SV a){
	printf("%d %s %s %.1f\n", a.mts, a.ten, a.ngaysinh, a.diem1 + a.diem2 + a.diem3);
}

float max(float a, float b){
	return (a > b) ? a : b;
}

int main(){
	int n;
	scanf("%d", &n);
	SV a[n];
	for(int i = 0; i < n; i++){
		nhap(&a[i]);
		a[i].mts = i+1;
	}
	float res = 0;
	for(int i = 0; i < n; i++){
		float sum = a[i].diem1 + a[i].diem2 + a[i].diem3;
		res = max(res,sum);
	}	
	for(int i = 0; i < n; i++){
		float s = a[i].diem1 + a[i].diem2 + a[i].diem3;
		if(res == s){
			xuat(a[i]);
		}
	}
}
