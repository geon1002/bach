#include "stdio.h"
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

int Tim_kiem(int x[100], int n, int tk){
	int kq = 0;
	for(int i = 0; i<n; i++){
		if(x[i]==tk){
			kq = 1;
			return 1; 
		}
	}
	return kq;
}

void  thuc_hien_tim_kiem(int x[100], int n){
	int tk;
	printf("Nhap vao gia tri can tim: ");
	scanf("%d", &tk);
	int kq = Tim_kiem(x, n, tk);
	if(kq==1){
		printf("\n Tim thay!");
	}else{
		printf("\n Khong tim thay!");
	}
}

int main(){
	nhap_mang(a, n);
	xuat_mang(a, n);
	printf("\n");
	thuc_hien_tim_kiem(a,n);
}
