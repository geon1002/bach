#include "stdio.h"
#include "math.h"
struct phan_so{
	int tu_so; 
	int mau_so;
	
};

void rut_gon(phan_so *ps){
	//Tim UCLN
	int a = ps->tu_so;
	int b = ps->mau_so;
	
	a = abs(a);
	b = abs(b);
	
	int UCLN = 1;
	// TH1
	if(a==0 || b==0){
		UCLN = (a+b);
	}else{
	// TH2
			while(a!=b){
				if(a>b){
					a = a-b;
				}else{
					b = b-a;
				}
			}
			UCLN = a;
	}
	ps->tu_so/=UCLN;
	ps->mau_so/=UCLN;
}

void Nhap_phanso(phan_so *ps){
	printf("\nNHap vao tu so: ");
	scanf("%d", &ps->tu_so);
	do{
		printf("\nNHap vao mau so: ");
		scanf("%d", &ps->mau_so);
	}while(ps->mau_so==0);	
}

void In_phanso(phan_so ps){
	if(ps.mau_so<0){
		ps.tu_so*=-1;
		ps.mau_so*=-1;
	}
	rut_gon(&ps);
	printf("%d/%d", ps.tu_so, ps.mau_so);
}


int main(){
	phan_so ps1, ps2;
	printf("\nPhan so thu nhat: ");
	Nhap_phanso(&ps1);
	printf("\nPhan so thu hai: ");
	Nhap_phanso(&ps2);
	printf("\nPhan so thu nhat vua nhap la: ");
	In_phanso(ps1);
	printf("\nPhan so thu hai vua nhap la: ");
	In_phanso(ps2);
	
	
	
}
