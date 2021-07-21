#include "stdio.h"
#include "stdlib.h"

struct ngay_sinh{
	int ngay;
	int thang;
	int nam;
};

int main(){
	FILE *f;
	f = fopen("bai_088.bin", "wb");
	if(f==NULL){
		printf("\n Loi tao hoac mo file");
	}
	ngay_sinh n1;
	n1.ngay = 10;
	n1.thang = 02;
	n1.nam = 2009;
	
	fwrite(&n1, sizeof(struct ngay_sinh), 1, f);
	
	fclose(f);
}
