#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
int a[100];
int b[100];
int c[200];
int n1, n2, n3;


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

void sap_xep_tang_dan(int x[100], int n){
	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n; j++){
			if(x[i]>x[j]){
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}

void Tron_mang(int x1[100], int n_x1, int x2[100], int n_x2, int x3[200], int &n_x3 ){
	n_x3 = n_x1+n_x2;
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;
	while(i3<=n_x3){
		if(i1>=n_x1){
			x3[i3]=x2[i2];
			i2++;	
		}else if (i2>=n_x2){
			x3[i3]=x1[i1];
			i1++;
		}else if(x1[i1]<x2[i2]){
			x3[i3]=x1[i1];
			i1++;
		}else{
			x3[i3]=x2[i2]; 
			i2++;
		}
		i3++;	
		
	}
}


int main(){
    printf("--------\n");
	nhap_mang(a, n1);
	xuat_mang(a, n1);
	sap_xep_tang_dan(a, n1);
	printf("\n");
	xuat_mang(a, n1);
	printf("--------\n");
	nhap_mang(b, n2);
	xuat_mang(b, n2);
	sap_xep_tang_dan(b, n2);
	printf("\n");
	xuat_mang(b, n2);
	printf("--------\n");
	Tron_mang(a, n1, b, n2, c, n3);
	printf("\n");
	xuat_mang(c, n3);
	
	
	
	
}
