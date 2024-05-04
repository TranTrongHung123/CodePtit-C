#include <stdio.h>
#include<stdio.h>
#include<math.h>
long tong1(long n){
	long s=0;
	while(n>0){
		s=s+n%10;
		n=n/10;
	}
	return s;
}
long tong2(long n){
	long s=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			int j=i;
			while(j>0){
				s=s+j%10;
				j=j/10;
			}
			n=n/i;
		}
	}
	if(n>1){
		while(n>0){
			s=s+n%10;
			n=n/10;
		}
	}
	return s;
}
int main(){
    long a;
    scanf("%ld",&a);
    if(tong1(a)!=tong2(a) || a<2) printf("NO\n");
    else printf("YES\n");

}
