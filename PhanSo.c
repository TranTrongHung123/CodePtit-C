#include <stdio.h>

int gcd(int a, int b){
	while(b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b){
	return a*b/gcd(a,b);
}
struct phanso{
	int tu;
	int mau;
};

typedef struct phanso PS;

void nhap(PS* a){
	scanf("%d%d", &a->tu, &a->mau);
}

void xuat(PS a){
	printf("%d/%d", a.tu, a.mau);
}

PS rutgon(PS a){
	int c = gcd(a.tu,a.mau);
	a.tu = a.tu/c;
	a.mau = a.mau/c;
	return a;
}

void quydong(PS a, PS b){
	PS A, B;
	a = rutgon(a);
	b = rutgon(b);
	A.tu = a.tu * lcm(a.mau,b.mau)/a.mau;
	A.mau = a.mau * lcm(a.mau,b.mau)/a.mau;
	B.tu = b.tu * lcm(a.mau,b.mau)/b.mau;
	B.mau = b.mau * lcm(a.mau,b.mau)/b.mau;
	printf("%d/%d %d/%d\n", A.tu, A.mau, B.tu, B.mau);
}

void tong(PS a, PS b){
	PS t;
	t.tu = a.tu * b.mau + b.tu * a.mau;
	t.mau = a.mau * b.mau;
	t = rutgon(t);
	xuat(t);
	printf("\n");
}

void thuong(PS a, PS b){
	PS t;
	t.tu = a.tu * b.mau;
	t.mau = b.tu * a.mau;
	t = rutgon(t);
	xuat(t);
	printf("\n");
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		PS p1, p2;
		nhap(&p1);
		nhap(&p2);
		printf("Case #%d:\n", i);
		quydong(p1,p2);
		tong(p1,p2);
		thuong(p1,p2);
	}
}

