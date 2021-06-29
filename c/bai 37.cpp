#include "stdio.h"
#include "limits.h"
int a[100];
int n;
int x;


void nhap_mang(int x[], int &n){
	do{
	printf("Nhap so luong phan tu(0<n<=100): ");
		scanf("%d", &n);
	}while(n<1);
	
	for(int i = 0; i<n; i++){
		printf("Nhap x[%d]=", i);
		scanf("%d", &x[i]);	
	}
}




void xuat_mang(int x[100], int n){
	printf("Gia tri cua mang la: ");
	for(int i = 0; i<n; i++){
		printf("%d ", x[i]);
	}
}

void them_vao_cuoi_mang(int x[100], int &n, int m){
	int size = sizeof(x)/sizeof(x[0]);
	if(n==size){
		printf("khong the them vao mang");
	}
	x[n] = m;
	n++;
}

void them_vao_dau_mang(int x[100], int &n, int m){
	int size = sizeof(x)/sizeof(x[0]);
	if(n==size){
		printf("khong the them vao mang");
	}
	n++;
	for(int i = n-1; i>0; i--){
		x[i] = x[i-1];
	}
	x[0] = m;
}

void them_vao_vi_tri_k(int x[100], int &n, int m, int k){
	int size = sizeof(x)/sizeof(x[0]);
	if(n==size){
		printf("khong the them vao mang");
	}
	n++;
	for(int i = n-1; i>k; i--){
		x[i] = x[i-1];
	}
	x[k]=m;
}


int main(){
	nhap_mang(a, n);
	xuat_mang(a, n);
	printf("\n");
	them_vao_cuoi_mang(a, n, 20);
	xuat_mang(a, n);
	them_vao_dau_mang(a, n, 20);
	printf("\n");
	xuat_mang(a, n);
	them_vao_vi_tri_k(a, n, 50, 4);
	printf("\n");
	xuat_mang(a, n);
}
