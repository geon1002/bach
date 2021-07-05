#include "stdio.h"

int a[100][100];
int n;

void Nhap_ma_tran(int x[100][100], int &n){
	do{
		printf("Nhap vao n : ");
		scanf("%d", &n);
	}while(n<=0);
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}

void Xuat_ma_tran(int x[100][100], int n){
	printf("\nMang:  \n");
		for(int i = 0; i<n; i++ ){
			for(int j = 0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

int KIEM_TRA_DUONG_CHEO_CHINH(int x[100][100], int n){
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(x[i][j]!=x[n-1-j][n-1-i]){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	Nhap_ma_tran(a, n);
	Xuat_ma_tran(a, n);
	printf("%s", (KIEM_TRA_DUONG_CHEO_CHINH(a, n)==1?"Mang doi xung qua duong cheo chinh":"Mang khong doi xung qua duong cheo chinh"));
	printf("%s", (KIEM_TRA_DUONG_CHEO_CHINH(a, n)==1?"\nMang doi xung qua duong cheo phu":"\nMang khong doi xung qua duong cheo phu"));

	
}
