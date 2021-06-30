#include "stdio.h"


int a[100];
int n;


void nhap_mang(int x[100], int &n){
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

int Tim_Max(int x[100], int n){
	int max = x[0] ;
	for(int i = 0; i<n; i++){
		if(x[i]>max)
			max=x[i];
	}  
	return max;
}


void Mang_con_khong_giam(int x[100], int n){
	int b[100];
	for(int i = 0; i<n; i++){
		b[i]=1;
	}
	
	for(int i =n-1; i>0; i--){
		if(x[i]>=x[i-1]){
			b[i-1]=b[i]+1;
		}
	}
	printf("\nMang B");
	printf("\n");
	xuat_mang(b, n);
	
	int so_luong = Tim_Max(b, n);
	for(int i = 0; i<n; i++){
		if(b[i]==so_luong){
			printf("\nMang khong dai nhat: ");
			for(int j=i; j<so_luong+i; j++)
				printf("%d ", x[j]);
		}
	}
}



int main(){
	printf("--------\n");
	nhap_mang(a, n);
	xuat_mang(a, n);
	printf("\n");
	Mang_con_khong_giam(a, n);
  	
}
