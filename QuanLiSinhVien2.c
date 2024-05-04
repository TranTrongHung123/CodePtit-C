#include <stdio.h>

struct sinhvien{
	int id;
	char name[100];
	float a, b, c;
};

typedef struct sinhvien SV;

SV s[100];
int cnt = 0;

void add(){
	int n;
	scanf("%d", &n);
	printf("%d\n", n);
	while(n--){
		getchar();
		s[cnt].id = cnt+1;
		gets(s[cnt].name);
		scanf("%f%f%f", &s[cnt].a, &s[cnt].b, &s[cnt].c);
		++cnt;
	}
}

void update(){
	int n;
	scanf("%d", &n);
	getchar();
	printf("%d\n", n);
	gets(s[n-1].name);
	scanf("%f%f%f", &s[n-1].a, &s[n-1].b, &s[n-1].c);
}

void sort(){
	for(int i = 0; i < cnt; i++){
		if(s[i].a < s[i].b && s[i].b < s[i].c){
			printf("%d %s %.1f %.1f %.1f\n", s[i].id, s[i].name, s[i].a, s[i].b, s[i].c);
		}
	}
}

int main(){
	int t;
	while(1){
		scanf("%d", &t);
		switch(t){
			case 1:
				add();
				break;
			case 2:
				update();
				break;
			case 3:
				sort();
				break;
		}
		if(t == 3) break;
	}
}

