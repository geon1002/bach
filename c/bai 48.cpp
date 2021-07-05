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
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++ ){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}


void SAP_XEP_TANG(int x[100][100], int m, int n){
	int k = m*n;
	for(int i = 0; i<k-1; i++){
		for(int j = i+1; j<k; j++){
			if(x[i/n][i%n]>x[j/n][j%n]){
				int temp = x[i/n][i%n];
				x[i/n][i%n] = x[j/n][j%n];
				x[j/n][j%n] = temp;
			}
		}
	}
}
void SAP_XEP_GIAM(int x[100][100], int m, int n){
	int k = m*n;
	for(int i = 0; i<k-1; i++){
		for(int j = i+1; j<k; j++){
			if(x[i/n][i%n]<x[j/n][j%n]){
				int temp = x[i/n][i%n];
				x[i/n][i%n] = x[j/n][j%n];
				x[j/n][j%n] = temp;
			}
		}
	}
}


int main(){
	Nhap_ma_tran(a, m, n);
	Xuat_ma_tran(a, m, n);
	SAP_XEP_TANG(a, m, n);
	printf("\nMang sap xep tang la: ");
	printf("\n");
	Xuat_ma_tran(a, m, n);
	SAP_XEP_GIAM(a, m, n);
	printf("\nMang sap xep giam la: ");
		printf("\n");
	Xuat_ma_tran(a, m, n);
}



