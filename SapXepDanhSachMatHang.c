#include <stdio.h>
#include <stdlib.h>

struct sanpham{
	int stt;
	char ten[1000];
	char nhom[1000];
	float loi;
};

typedef struct sanpham SP;

void xuat(SP a){
	printf("%d %s %s %.2f\n", a.stt, a.ten, a.nhom, a.loi);
}

int cmp(const void* a, const void* b){
	SP* x = (SP*)a;
	SP* y = (SP*)b;
	if(x->loi < y->loi) return 1;
	else return -1;
}

int main(){
	int n;
	scanf("%d", &n);
	SP a[n];
	float m ,b;
	for(int i = 0; i < n; i++){
		getchar();
		a[i].stt = i+1;
		gets(a[i].ten);
		gets(a[i].nhom);
		scanf("%f%f", &m, &b);
		a[i].loi = b-m;
	}
	qsort(a,n,sizeof(SP),cmp);
	for(int i = 0; i < n; i++){
		xuat(a[i]);
	}
}
