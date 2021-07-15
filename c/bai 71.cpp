#include "stdio.h"

union Ngay_1{
	int ngay;
	int thang;
	int nam;
}ungay;

struct Ngay_2{
	int ngay;
	int thang;
	int nam;
}sngay;

int main(){
	//So sanh xem kich co kieu nao dai hon
	printf("\nkich co kieu union: %d bytes", sizeof(ungay));
	printf("\nkich co kieu struct: %d bytes	", sizeof(sngay));
	
	//so sanh tac dung cua hai kieu xem co giong nhau khong
	
	/*
	Ngay_1 n1;
	n1.ngay = 10;
	n1.thang = 2;
	n1.nam = 2009;
	printf("\nSu dung kieu union: ");
	printf("%d/%d/%d", n1.ngay, n1.thang, n1.nam);
	*/
	Ngay_2 n2;
	n2.ngay = 10;
	n2.thang = 2;
	n2.nam = 2009;
	printf("\nSu dung kieu struct: ");
	printf("%d/%d/%d", n2.ngay, n2.thang, n2.nam);
	
	/*
	khac nhau giua union va struct la
	union:
	tong kich thuoc cua union la tong cua bien lon nhat  
	struct:
	tong cua nhung thanh phan con ben trong
	
	Cach su dung cua union:
	tai mot thoi diem chung ta su dung mot cai bien
	Cach su dung cua struct:
	chung ta co the su dung dong thoi cac bien con ben trong;
	*/
	
	//muon dung kieu union thi
	Ngay_1 n1;
	printf("\nSu dung kieu union: ");
	n1.ngay = 10;
	printf("%d", n1.ngay);
	n1.thang = 2;
	printf("/%d", n1.thang);
	n1.nam = 2009;
	printf("/%d", n1.nam);
	return 0;
}

	


