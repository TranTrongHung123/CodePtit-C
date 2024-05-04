#include <stdio.h>
#include <stdlib.h>

struct munber{
	int val;
	int fre;
};

typedef struct munber mun;

int check(int n){
	while(n >= 10){
		if(((n/10)%10) > n%10) return 0;
		n /= 10;
	}
	return 1;
}

int find(mun a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i].val == x){
			return i;
		}
	}
	return -1;
}

int cmp(const void* a, const void* b){
	mun* x = (mun*)a;
	mun* y = (mun*)b;
	if(x->fre < y->fre) return 1;
	return -1;
}

int main(){
	mun a[100001];
	int n = 0, x;
	while((scanf("%d", &x) != -1)){
		if(check(x) == 1){
			int index = find(a,n,x);
			if(index != -1){
				++a[index].fre;
			}
			else{
				a[n].val = x;
				a[n].fre = 1;
				++n;
			}
		}
	}
	qsort(a,n,sizeof(mun),cmp);
	for(int i = 0; i < n; i++){
		printf("%d %d\n", a[i].val, a[i].fre);
	}
}
