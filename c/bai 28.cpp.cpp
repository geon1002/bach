#include "stdio.h"
#include "math.h"
int Dieu_kien(int x){
	return(x%2==0 && x%3==0);
}

int Dieu_kien_so_nguyen_to(int x){
	if(x<1)
		return 0;
	for(int i=2; i<=sqrt(x); i++ ){
		if(x%i==0);
		return 0;
	}
	return 1;
}

int main(){
	int a[100], n;
	do{
		printf("so luong phan tu (0<n<=100) : ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	
	for(int i = 0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
		
	}
	printf("\nCac so chan chia het cho 3 : ");
	for(int i = 0; i<n; i++){
		if(Dieu_kien(a[i]))
		printf("%d ", a[i] );
	}
	
	printf("\nCac so nguyen to : ");
	for(int i = 0; i<n; i++){
		if(Dieu_kien_so_nguyen_to(a[i]))
		printf("%d ", a[i]);
	}
}
