#include <stdio.h> 
#include <math.h> 

int main(){ 
	float a,b,c; 
	scanf("%f%f%f",&a,&b,&c); 
	float d=b*b-4*a*c; 
	if(a!=0){ 
	if(d<0) printf("NO"); 
	if(d==0)printf("%0.2f",-b/2*a); 
	if(d>0) printf("%0.2f %0.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a)); }
	else{ if(b==0)
	{ 
	if(c==0 || c!=0) printf("\nNO"); }
	else printf("%0.2f",-b/c); 
	} 
}
