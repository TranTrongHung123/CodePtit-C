#include <stdio.h>
#include <stdlib.h>

struct sinhvien{
	int stt;
	char ten[1000];
	char ngaysinh[1000];
	float diem;
};

typedef struct sinhvien SV;

void xuat(SV a){
	printf("%d %s %s %.1f\n", a.stt, a.ten, a.ngaysinh, a.diem);
}

int cmp(const void* a, const void* b){
	SV* x = (SV*)a;
	SV* y = (SV*)b;
	if(x->diem > y->diem) return -1;
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	SV a[n];
	float x, y ,z;
	for(int i = 0; i < n; i++){
		getchar();
		a[i].stt = i+1;
		gets(a[i].ten);
		gets(a[i].ngaysinh);
		scanf("%f%f%f", &x, &y, &z);
		a[i].diem = x + y + z;
	}
	qsort(a, n, sizeof(SV),cmp);
	for(int i = 0; i < n; i++){
		if((a[i].diem == a[i+1].diem) && (a[i+1].stt < a[i].stt)){
			SV tmp = a[i];
			a[i] = a[i+1];
			a[i+1] = tmp;
		}
	}
	for(int i = 0; i < n; i++){
		xuat(a[i]);
	}
}


