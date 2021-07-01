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

int TIM_MIN_DONG(int x[100][100], int m, int n, int dong){
	int MIN = x[dong][0];
	for(int j = 0; j<n; j++){
		if(MIN>x[j][dong])
			MIN=x[j][dong];
	}
	return MIN;
	
}

int TIM_MAX_DONG(int x[100][100], int m, int n, int dong){
	int MAX = x[dong][0];
	for(int j = 0; j<n; j++){
		if(MAX<x[j][dong])
			MAX=x[j][dong];
	}
	return MAX;
	
}


int TIM_MIN_COT(int x[100][100], int n, int m, int cot){
	int MIN = x[0][cot];
	for(int i = 0; i<m; i++){
		if(MIN>x[i][cot])
			MIN=x[i][cot];
	}
	return MIN;
	
}

int TIM_MAX_COT(int x[100][100], int n, int m, int cot){
	int MAX = x[0][cot];
	for(int i = 0; i<m; i++){
		if(MAX<x[i][cot])
			MAX=x[i][cot];
	}
	return MAX;
	
}
int main(){
	Nhap_ma_tran(a, m, n);
	Xuat_ma_tran(a, m, n);
	printf("\nMIN cot 1 = %d", TIM_MIN_DONG(a, m, n, 1));
	
	printf("\nMAX cot 2 = %d", TIM_MAX_DONG(a, m, n, 2));
	
	printf("\nMIN cua dong 0 = %d", TIM_MIN_COT(a, m, n, 0));
	
	printf("\nMAX cua dong 2 = %d", TIM_MAX_COT(a, m, n, 2));	
}



