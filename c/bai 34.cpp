#include "stdio.h"
int Fibonacci(int x){
	if(x==0)
		return 0;
	else if (x==1)
		return 1;
	else
		return Fibonacci(x-1)+Fibonacci(x-2);
}


int main(){
	int n;
	do{
		printf("Nhap so nguyen n la: ");
		scanf("%d", &n);
	}while(n<0);
	
	printf("Fibonacci(%d) = %d", n, Fibonacci(n));
}
