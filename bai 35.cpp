#include "stdio.h"
#include "limits.h"
int a[100];
int n;
int x;


void nhap_mang(int x[], int &n){
	printf("Nhap so luong phan tu(0<n<=100): ");
		scanf("%d", &n);
	
	
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

void Xoa_mang_tai_vi_tri(int x[100], int &n, int vi_tri){
	for(int i = vi_tri; i<n; i++){
		x[i]=x[i+1];

	}
	n--;
}

void Xoa_mang_theo_gia_tri(int x[100], int &n){
	int gt;
	printf("Nhap so phan tu can xoa");
	scanf("%d", &gt);
	for(int i = 0; i<n; i++){
		if(x[i]==gt)
			Xoa_mang_tai_vi_tri(x, n, i);
	}
}


int main(){
	nhap_mang(a, n);
	xuat_mang(a, n);
	printf("\n");
	Xoa_mang_theo_gia_tri(a, n);
	printf("\n");
	xuat_mang(a, n);

}
