#include "stdio.h"


int main(){
	int tuoi;
	char ten[50];
	printf("\NNhap so tuoi cua ban: ");
	scanf("%d", &tuoi);
	getchar();
	
	printf("Nhap ten cua ban: ");
	fgets(ten, sizeof(ten), stdin);
	
	printf("\nTen da nhap la: ");
	puts(ten);
	printf("\nTuoi da nhap la: %d", tuoi);
	
}
