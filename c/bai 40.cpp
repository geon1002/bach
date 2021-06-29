#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
int a[100];
int b[100];
int c[200];
int n, n1, n2;


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

void Tach_mang(int x[100], int n, int x1[100], int &n_x1, int x2[100],int  &n_x2){
	int i1 = 0; n_x1 = 0;
	int i2 = 0; n_x2 = 0;
	for(int i = 0; i<n; i++){
		if(x[i]%2==0){
			x1[i1]=x[i];
			i1++;
			n_x1++;
		}else{
			x2[i2]=x[i];
			i2++;
			n_x2++;
		}
	} 
}


int main(){
    printf("--------\n");
	nhap_mang(a, n);
	xuat_mang(a, n);
	printf("\n");
	Tach_mang(a, n, b, n1, c, n2);
	xuat_mang(b, n1);
	printf("\n");
	xuat_mang(c, n2);
	
	
}
