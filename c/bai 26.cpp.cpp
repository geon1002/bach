
#include "stdio.h"
int main(){
	int a[100];
	int n;
	do{
		printf("Nhap vao so luong phan tu(0<n<=100): ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	//Nhap du lieu
	for(int i=0; i<n; i++){
		printf("\na[%d]=", i);
		scanf("%d", &a[i]);
	}
	//Xuat du lieu
	printf("\nMang vua nhap la: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	int tong = 0;
	printf("\nTong cua mang do la");
	for(int i = 0; i<n; i++){
		tong+=a[i];
	}
	printf("Tong = %d", tong);
}
