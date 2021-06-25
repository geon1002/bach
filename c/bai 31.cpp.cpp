#include "stdio.h"
void swap(int &a, int &b){
	int tam = a;
	a = b;
	b = tam;
}


void TANG_DAN(int x[], int n){
	for(int i=0; i<n-1; i++){
		int VI_TRI_NHO_NHAT = i;
		for(int j=i+1; j<n; j++){
			if(x[j]<x[VI_TRI_NHO_NHAT])
				VI_TRI_NHO_NHAT = j;		 	
		}
		swap(x[i], x[VI_TRI_NHO_NHAT]);
	}
}

void GIAM_DAN(int x[], int n){
	for(int i=0; i<n-1; i++){
		int VI_TRI_LON_NHAT = i;
		for(int j=i+1; j<n; j++){
			if(x[j]>x[VI_TRI_LON_NHAT])
				VI_TRI_LON_NHAT = j;		 	
		}
		swap(x[i], x[VI_TRI_LON_NHAT]);
	}
}

void print_ra_mang(int x[], int n){
	for(int i = 0; i<n; i++){
	printf("%d ", x[i]);
	}
}

int main(){
	int a[100], n;
	
	do{
		printf("So phan tu nhap vao(0<n<=100): ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	
	for(int i = 0; i<n; i++){
	printf("a[%d]= ", i);
	scanf("%d", &a[i] );
	}
	
	printf("\nMANG TANG DAN: ");
	TANG_DAN(a, n);
	print_ra_mang(a, n);
	
	printf("\nMANG TANG DAN: ");
	GIAM_DAN(a, n);
	print_ra_mang(a, n);
	
}
