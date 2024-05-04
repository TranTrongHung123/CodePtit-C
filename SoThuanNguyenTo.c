#include <stdio.h>
#include <math.h>

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return n>1;
}

int check1(int n){
	while(n){
		int t = 0;
		t = n%10;
		if(nt(t) == 0) return 0;
		n /= 10;
	}
	return 1;
}

int check2(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	if(nt(sum)) return 1;
	return 0;
}

int max(int l, int r){
	return (l > r) ? l : r;
}

void sieve(int l, int r){
	int prime[r-l+1];
	for(int i = 0; i <= (r-l+1); i++){
		prime[i] = 1;
	}
	for(int i = 2; i <= sqrt(r); i++){
		for(int j = max(i*i, (l+1-i)/i*i); j <= r; j +=	i){
			prime[j-l] = 0;
		}
	}
	int cnt = 0;
	for(int i = max(l, 2); i <= r; i++){
		if(prime[i-l] && check1(i) && check2(i)){
			++cnt;
		}
	}
	printf("%d\n", cnt);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int l, r;
		scanf("%d%d", &l, &r);
		sieve(l,r);
	}
}


