#include "stdio.h"
int a[100];
int n;


	
void nhap_mang(int x[100], int &n){
	printf("So luong nhap vao la(0<n<=100)");
		scanf("%d", &n);
	
	for(int i = 0; i<n; i++){
		printf("nhap x[%d]	= ", i);
		scanf("%d", &x[i]);
	}
}

void xuat_mang(int x[100], int n){
	printf("gia tri cua mang: ");
	for(int i = 0; i<n; i++){
		printf("%d ", x[i]);
	}
}

void xuat_mang_nguoc(int x[100], int n){
	printf("\ngia tri cua mang nguoc : ");
	for(int i =n-1; i>=0; i--){
		printf("%d ", x[i]);
	}
}

void mang_dao_nguoc(int x[], int n){
	for(int i = 0; i<=n/2; i++){
		int tam = x[i];
		x[i] = x[n-i-1];
		x[n-i-1] = tam;
	}
}

int main(){
	nhap_mang(a, n);
	xuat_mang(a, n);
	//xuat_mang_nguoc(a, n);
	printf("\n");
	mang_dao_nguoc(a, n);
	xuat_mang(a, n);
}
