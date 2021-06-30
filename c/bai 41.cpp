#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
int a[100];
int b[100];
int n1, n2;


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

int Kiem_tra_mang_con(int x1[100], int n1, int x2[100], int n2){
	int kq = 0;
	if(n2<n1){
		for(int i = 0; i<n1;i++){
			if(x1[n1]<x2[0]){
				int j;
				for(j=0;j<n2;j++){
					if(x1[i+j]!=x2[j])
						break;
				}
				if(j==n2)
					kq = 1;
			}
		}
	}
	return kq;
}


int main(){
	printf("--------\n");
	nhap_mang(a, n1);
	xuat_mang(a, n1);
	
    printf("--------\n");
	nhap_mang(b, n2);
	xuat_mang(b, n2);
	printf("\n");
	
    int kt = Kiem_tra_mang_con(a, n1, b, n2);
    if(kt){
    	printf("Mang b la mang con cua mang a");
	}else{
		printf("Mang b khong phai la mang con cua mang a");
	}	
}
