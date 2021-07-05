#include "stdio.h"

int a[100][100];
int b[10000];
int m, n, k;



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



void Xuat_ma_tran(int x[100][100], int &m, int &n){
	printf("\nMang: \n");
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++ ){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}


void THAY_DOI_DONG(int x[100][100], int n, int m, int y, int k){
	for(int i = 0; i<n; i++){
		int temp = x[y][i];
		x[y][i] = x[k][i];
		x[k][i] = temp;
	}
}


void THAY_DOI_COT(int x[100][100], int n, int m, int y, int k){
	for(int i = 0; i<m; i++){
		int temp = x[i][y];
		x[i][y] = x[i][k];
		x[i][k] = temp;
	}
}

int main(){
	Nhap_ma_tran(a, m, n);
	Xuat_ma_tran(a, m, n);
	THAY_DOI_DONG(a, m, n, 1, 2);
	Xuat_ma_tran(a, m, n);
	THAY_DOI_COT(a, m, n, 1, 2);
	Xuat_ma_tran(a, m, n);
	
}



