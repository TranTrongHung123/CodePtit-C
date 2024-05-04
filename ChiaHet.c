#include <stdio.h>

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	int tmp = 0;
	for(int i = 2; i <= n; i++){
		if(i % 2 == 0){
			int j = i;
			while(j % 2 == 0){
				++tmp;
				j /= 2;
			}
		}
	}
	if(tmp >= k) printf("Yes");
	else printf("No");
}
