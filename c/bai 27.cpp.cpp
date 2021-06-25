#include "stdio.h"
float Tinh_trung_binh(int b[],int n ){
	int tong = 0;
	for(int i = 0; i<n; i++){
		tong+=b[i];
	}
	return (float)tong/n;
}
float Tinh_trung_binh_duong(int b[],int n ){
	int Soluongsoduong=0;
	int tong = 0;
	for(int i = 0; i<n; i++){
		if(b[i]>=0){
			tong+=b[i];
			Soluongsoduong++;
		}
	}
	return Soluongsoduong>0?(float)tong/Soluongsoduong:-1;
}


int main(){
	int a[100];
	int n;
	 
	do{
		printf("So phan tu(0<n<=100): ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	
	for(int i = 0; i<n; i++){
	printf("a[%d]=", i);
	scanf("%d", &a[i]);
}
	printf("\nTRUNG BINH CONG: %.2f ", Tinh_trung_binh(a,n));
	
	float tbcsd = Tinh_trung_binh_duong(a,n);
	if(tbcsd>0){
		printf("\nTrung binh cong so duong la: %.2f", tbcsd);
	}else{
		printf("\nMang khong co so duong ");
	}
}
