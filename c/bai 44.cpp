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

double Trung_bing_cong_tat_ca(int x[100][100], int n, int m){
	if(n<=0 || m<=0)
		return 0;
	int tong = 0;
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			tong+=x[i][j];
		
		}
	} 
	double trung_binh_cong = (double) tong/(m*n);
	return trung_binh_cong;
}

double Trung_bing_cong_chia_het_cho_5(int x[100][100], int n, int m){
	if(n<=0 || m<=0)
		return 0;
	int tong_chia_het_cho_5 = 0;
		int so_luong_chia_het_cho_5 = 0;
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			if(x[j][i]%5==0){
				so_luong_chia_het_cho_5++;
					tong_chia_het_cho_5+=x[i][j];
			}
		}
	} 
	double trung_binh_cong = 0;
	if(so_luong_chia_het_cho_5>0){
		trung_binh_cong = (double)tong_chia_het_cho_5/so_luong_chia_het_cho_5;
	}
	return trung_binh_cong;
}

int main(){
	Nhap_ma_tran(a, m, n);
	Xuat_ma_tran(a, m, n);
	printf("TBC tat ca la: %.2f", Trung_bing_cong_tat_ca(a,  m,  n));
	printf("\n");
	printf("TBC chia het cho 5 la: %.2f", Trung_bing_cong_chia_het_cho_5(a, m, n));
}
