#include <stdio.h>
//Thuat toan SelectionSort(Sap xep chon) => Cach hoat dong: Tim phan tu nho nhat va doi cho no len dau
//Duyet qua n-1 phan tu cua mang (Vi chi can sap xep n-1 phan tu thi phan tu con lai se tu sap xep)
//Coi chi so cua phan tu dang xet lam chi so nho nhat
//Duyet qua tat ca cac phan tu dung sau neu phan tu nao nho hon thi thay the chi so nho nhat bang chi so phan tu nho hon do
//Sau do doi cho phan tu nho vua tim duoc voi phan tu dang xet

void selectionSort(int a[], int n){
	for(int i = 0; i < n-1; i++){
		int min = i;
		for(int j = i+1; j < n; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
		for(int i = 0; i < n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	selectionSort(a,n);
}
