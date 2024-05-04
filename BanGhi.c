#include <stdio.h>
#include <math.h>

struct tamgiac{
	float a, b, c, s;
};

typedef struct tamgiac TG;

TG S[100];
int cnt = 0;

float dientich(TG x){
	float p = (x.a + x.b + x.c)/2;
	float s = sqrt(p*(p-x.a)*(p-x.b)*(p-x.c));
	return s;
}

void nhap(){
	int n;
	scanf("%d", &n);
	while(n--){
		scanf("%f%f%f", &S[cnt].a, &S[cnt].b, &S[cnt].c);
		S[cnt].s = dientich(S[cnt]);
		++cnt;
	}
}


void sort(){
	for(int i = 0; i < cnt; i++){
		for(int j = i+1; j < cnt; j++){
			if(S[i].s > S[j].s){
				TG tmp = S[i];
				S[i] = S[j];
				S[j] = tmp;
			}
		}
	}
}

void xuat(){
	for(int i = 0; i < cnt; i++){
		printf("%.0f %.0f %.0f\n", S[i].a, S[i].b, S[i].c);
	}
}

int main(){
	nhap();
	sort();
	xuat();
}
