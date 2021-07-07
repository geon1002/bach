#include "stdio.h"

int a[100][100];
int m, n;

void Nhap_ma_tran(int x[100][100], int &m, int &n){
	do{
		printf("Nhap vao m : ");
		scanf("%d", &m);
		printf("Nhap vao n : ");
		scanf("%d", &n);
	}while(m<=0 || n<=0);
	
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}

void Xuat_ma_tran(int x[100][100], int m, int n){
	printf("\nMang: \n");	
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++ ){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void TIM_MA_TRAN_CHUYEN_VI(int x[100][100], int m, int n){
	int y[100][100];
	int k = n; // dong
	int l = m; // cot
	for(int i=0; i<k;i++){
		for(int j=0; j<l; j++){
			y[i][j]= x[j][i];
		}
	}
	printf("\nMa tran chuyen vi: \n");
	for(int i=0; i<k;i++){
		for(int j=0; j<l; j++){
			printf("%d\t", y[i][j]);
		}
		printf("\n");
	}
}

	

int main(){
	Nhap_ma_tran(a, m, n);
	Xuat_ma_tran(a, m, n);
	TIM_MA_TRAN_CHUYEN_VI(a, m, n);
	
}