#include <stdio.h>
#include <math.h>

int dd[10000];

int main() {
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int mid, l, r;
	while (m--){
		scanf("%d", &mid);
		l = (mid - k > 1) ? mid - k : 1;
		r = (mid + k < n) ? mid + k : n;
		for (int i = l; i <= r; i++) {
			dd[i]++;
		}
	}
	int cnt = 0, d = 0;
	for (int i = 1; i <= n; i++) {
		if (dd[i] == 0) {
			d++;
		} else {
			cnt += (int)ceil((double)d/(1+k*2));
			d = 0; 
		}
	}
	cnt += (int)ceil((double)d/(1+k*2));
	printf("%d", cnt);
} 
