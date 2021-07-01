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

void Xuat_ma_tran(int x[100][100], int &m, int &n){
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++ ){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

int Tim_Max(int x[100][100], int m, int n){
	int Max = x[0][0];
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			if(Max<x[i][j])
				Max = x[i][j];
		}
	}
	return Max; 
}


int Tim_Min(int x[100][100], int m, int n){
	int Min = x[0][0];
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			if(Min>x[i][j])
				Min = x[i][j];
		}
	}
	return Min; 
}

int main(){
	Nhap_ma_tran(a, m, n);
	Xuat_ma_tran(a, m, n);
	printf("Max = %d",Tim_Max(a, m, n));
	printf("\n");
	printf("Min = %d",Tim_Min(a, m, n));
	
}
