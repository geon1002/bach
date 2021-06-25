#include "stdio.h"
int  TIM_MAX(int x[], int n){
	int max = x[0];
	for(int i = 1; i<n; i++){
		if(max<x[i])
			max = x[i];
	}
	return max;
}


int  TIM_MIN(int x[], int n){
	int min = x[0];
	for(int i = 1; i<n; i++){
		if(min>x[i])
			min = x[i];
	}
	return min;
	
}

int main(){
	int a[100], n;
	
	do{
		printf("So luong tu nhap vao(0<n<=100) : ");
		scanf("%d", &n);
	}while(n<1 || n>100 );
	
	for(int i = 0; i<n; i++){
		printf("a[%d]=", i);
		scanf("%d",&a[i]);
		
	}
	printf("\nMax = %d", TIM_MAX(a,n));
	printf("\nMin = %d", TIM_MIN(a,n));
}
