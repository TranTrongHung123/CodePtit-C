#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int cnt = 0, chan = 0, le = 0;
		char kitu = ' ';
		while(kitu == ' '){
			int x;
			scanf("%d", &x);
			++cnt;
			if(x % 2 == 0) ++chan;
			else ++le;
			kitu = getchar();
		}
		if(((cnt % 2)== 0 && (chan > le)) || ((cnt % 2 != 0) && (chan < le))) printf("YES\n");
		else printf("NO\n");
	}
}
