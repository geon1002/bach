#include "stdio.h"

int a[100][100];
int b[1000];
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
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++ ){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void chuyen_mang_mot_chieu(int x[100][100], int n, int m, int y[1000], int &k){
	int index = 0;
	k = m*n;
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			y[index] = x[i][j];
			index++;
		}
	}
}


void Xuat_mang_mot_chieu(int x[1000], int n){
	printf("Mang mot chieu : ");
	for(int i = 0; i<n; i++){
		printf("%d", x[i]);
	}	
}
int main(){
	Nhap_ma_tran(a, m, n);
	Xuat_ma_tran(a, m, n);
	chuyen_mang_mot_chieu(a, m, n, b, k);
	Xuat_mang_mot_chieu(b, k);
}
