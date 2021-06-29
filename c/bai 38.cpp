#include "stdio.h"
#include "conio.h"
int a[100];
int n;
int x;


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

void them_vao_cuoi_mang(int x[100], int &n, int m){
	int size = sizeof(x)/sizeof(x[0]);
	if(n==size){
		printf("khong the them vao mang");
	}
	x[n] = m;
	n++;
}

void them_vao_dau_mang(int x[100], int &n, int m){
	int size = sizeof(x)/sizeof(x[0]);
	if(n==size){
		printf("khong the them vao mang");
	}
	n++;
	for(int i = n-1; i>0; i--){
		x[i] = x[i-1];
	}
	x[0] = m;
}

void them_vao_vi_tri_k(int x[100], int &n, int m, int k){
	int size = sizeof(x)/sizeof(x[0]);
	if(n==size){
		printf("khong the them vao mang");
	}
	n++;
	for(int i = n-1; i>k; i--){
		x[i] = x[i-1];
	}
	x[k]=m;
}


int main(){
	char gt;
	do{
		printf("MENU(chon ham muon xu ly)\n");
		printf("1 - Nhap mang\n");
		printf("2 - Xuat mang");
		printf("3 - them vao cuoi mang\n");
		printf("4 - them vao dau mang\n");
		printf("5 - them vao vi tri k\n");
		printf("x - Thoat\n");
		printf("Lua chon cua ban là: ");
		scanf("%c", &gt);

		if(gt=='1'){
			nhap_mang(a, n);
		}else if (gt=='2'){
			xuat_mang(a,n);
		}else if (gt=='3' || gt=='4' || gt=='5'){
			int m;
			printf("\nNhap vao m = ");
			scanf("%d", &m);
			
			
			if(gt=='3'){
				them_vao_cuoi_mang(a, n, m );
			}else if(gt=='4'){
				them_vao_dau_mang(a, n, m );
			}else if(gt=='5'){
				int k;
				printf("\nNhap vao k = ");
				scanf(" %d", &k);
				them_vao_vi_tri_k(a, n, m, k);
			} 
		}		
	}while(gt!='x');
}
